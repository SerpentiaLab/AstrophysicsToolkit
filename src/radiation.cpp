#include "radiation.h"
#include "constants.h"
#include <cmath>
#include <limits>
#include "numerical.h"


long double flux_from_luminosity(long double luminosity, long double distance)

{

  return luminosity / (4 * pi * distance * distance);

}


long double luminosity_from_flux(long double flux, long double distance)

{

  return 4 * pi * distance * distance * flux;

}

long double distance_from_flux_luminosity(long double luminosity, long double flux)

{

  return std::sqrt(luminosity / (4 * pi * flux));

}

long double peak_wavelength_from_temperature(long double temperature)

{
  if (temperature <= 0)
    {
      return  std::numeric_limits<long double>::quiet_NaN();

       }

  // We only arrive here if temperature > 0

  return b_wien / temperature;
}

long double temperature_from_peak_wavelength(long double wavelength)

{

  if (wavelength <= 0)
    {

      return  std::numeric_limits<long double>::quiet_NaN();
    }

  return b_wien / wavelength;

}

long double planck_wavelength(long double wavelength, long double temperature)

{

  if(wavelength <= 0 || temperature <= 0)

    {

       return  std::numeric_limits<long double>::quiet_NaN();

    }


  long double exponent = h * c /(wavelength * k_B * temperature);

  long double exponent_term = std::exp(exponent) - 1;

  long double numerator = 2 * h * c * c;

  long double wavelength_power = std::pow(wavelength, 5);

  return numerator / (wavelength_power * exponent_term);
}

long double planck_frequency(long double frequency, long double temperature)

{

  if (temperature <= 0 || frequency <= 0)

    {

       return  std::numeric_limits<long double>::quiet_NaN();

    }

  long double exponent_nu = h * frequency / (k_B * temperature);

  long double exponent_term_nu = std::exp(exponent_nu) - 1;

  long double numerator_nu =  2 * h * std::pow(frequency, 3);

  long double denominator_nu = c * c * exponent_term_nu;

  return numerator_nu / denominator_nu;
}

PlanckPeakResult planck_wavelength_max_from_temperature(long double temperature)

{

  if (temperature <= 0)

    {

      PlanckPeakResult result;

      result.wavelength =  std::numeric_limits<long double>::quiet_NaN();
      result.root_x =  std::numeric_limits<long double>::quiet_NaN();
      result.root_error =  std::numeric_limits<long double>::quiet_NaN();
      result.wavelength_error =  std::numeric_limits<long double>::quiet_NaN();
      result.iterations = 0;
      result.converged = false;

      return result;
    }

  auto planck_peak_equation = [](long double x)

  {

    return 5 * (1 - std::exp(-x)) - x;

  };

  BisectionResult bisection_result = bisection(planck_peak_equation, 4.0L, 5.0L, 1e-8L, 100);

  if (!bisection_result.converged)
    {

      PlanckPeakResult result;

      result.wavelength =  std::numeric_limits<long double>::quiet_NaN();
      result.root_x =  std::numeric_limits<long double>::quiet_NaN();
      result.root_error =  std::numeric_limits<long double>::quiet_NaN();
      result.wavelength_error =  std::numeric_limits<long double>::quiet_NaN();
      result.iterations = bisection_result.iterations;
      result.converged = false;

      return result;

     }


   PlanckPeakResult result;

      result.root_x = bisection_result.root;
      result.root_error = bisection_result.estimated_error;

      result.wavelength =  h * c / (result.root_x * k_B * temperature);

      result.wavelength_error = h * c /(std::pow(result.root_x, 2) * k_B * temperature) * result.root_error;

      result.iterations = bisection_result.iterations;
      result.converged = true;

      return result;
}

long double radiative_flux_at_the_surface(long double temperature)

 {

   if(temperature <= 0)

     {

       return  std::numeric_limits<long double>::quiet_NaN();

     }


   return sigma * std::pow(temperature, 4);

 }

long double stellar_luminosity_from_temperature_and_radius(long double radius, long double temperature)

{

  if(radius <= 0 || temperature <= 0)

    {

      return  std::numeric_limits<long double>::quiet_NaN();


    }

  return 4 * pi * radiative_flux_at_the_surface(temperature) * std::pow(radius, 2);

}

long double surface_brightness_from_surface_flux(long double surface_flux)

{

  if(surface_flux < 0)


    {

       return  std::numeric_limits<long double>::quiet_NaN();


    }


  return surface_flux / pi;


}
