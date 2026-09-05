#include "radiation.h"
#include "constants.h"
#include "units.h"
#include <iostream>
#include <fstream>
#include <iomanip>

int main()

{

  long double distance = astronomical_unit_to_meter(1.0L);

  long double solar_flux = flux_from_luminosity(L_sun, distance);



  std::cout << solar_flux <<" W/m^2" <<std::endl;

  long double solar_luminosity = luminosity_from_flux(solar_flux, distance);


  std::cout << solar_luminosity <<" W" <<std::endl;

  long double solar_distance = distance_from_flux_luminosity(solar_luminosity, solar_flux);


  std::cout << solar_distance <<" m" <<std::endl;

  long double solar_distance_au = meter_to_astronomical_unit(solar_distance);

  std::cout << solar_distance_au <<" AU"<<std::endl;

  long double temperature = 6000.0L; 
  long double wavelength_wien = peak_wavelength_from_temperature(temperature);

  std::cout << "Wien peak wavelength: " <<  wavelength_wien << " m"<<std::endl; 


  long double recovered_temperature =  temperature_from_peak_wavelength(wavelength_wien);

  std::cout << recovered_temperature << " K"<<std::endl;


  long double wavelength_300nm = nanometer_to_meter(300.0L);
  long double planck_300nm = planck_wavelength(wavelength_300nm, temperature);

  std::cout << planck_300nm << " W m^-3 sr^-1" <<std::endl;

  long double wavelength_483nm = nanometer_to_meter(483.0L);
  long double planck_483nm = planck_wavelength(wavelength_483nm, temperature);

  std::cout << planck_483nm << " W m^-3 sr^-1" <<std::endl;


  long double wavelength_800nm = nanometer_to_meter(800.0L);
  long double planck_800nm = planck_wavelength(wavelength_800nm, temperature);

  std::cout << planck_800nm << " W m^-3 sr^-1" <<std::endl;

  long double planck_at_peak = planck_wavelength(wavelength_wien, temperature);

  std::cout << planck_at_peak << " W m^-3 sr^-1"<<std::endl;

  long double frequency_483nm = c / wavelength_483nm;
  long double planck_nu_483nm = planck_frequency(frequency_483nm, temperature);

  std::cout << frequency_483nm << " Hz"<<std::endl;
  std::cout << planck_nu_483nm << "W m^-2 Hz^-1 sr^-1" <<std::endl;

  long double planck_nu_from_lambda = planck_483nm * wavelength_483nm * wavelength_483nm / c;  

  std::cout << planck_nu_from_lambda << "W m^-2 Hz^-1 sr^-1" <<std::endl;

  std::ofstream output_file("planck_curve.dat");
  if (!output_file.is_open())
{
    std::cerr << "THE FILE IS NOT OPEN" << std::endl;
    return 1;
}
  output_file << std::setprecision(15);

  for(int i = 0; i <= 190000; i++)
    {
      long double wavelength_nm = 100.0L + 0.01L * i;
      long double wavelength_m = nanometer_to_meter(wavelength_nm);
      long double planck_value = planck_wavelength(wavelength_m, temperature);

       output_file << wavelength_nm << "\t" << planck_value << std::endl;


    }

// Validate the Planck peak wavelength obtained numerically
// by comparing it with Wien's displacement law.

  
  std::cout << std::endl;

  std::cout << "------------Planck peak validation (T = "<< temperature << " K)------------" << std::endl;

  PlanckPeakResult numerical_bisection_result =  planck_wavelength_max_from_temperature(temperature);

  std::cout << "Planck peak root x: " << numerical_bisection_result.root_x <<std::endl;
  std::cout << "Bisection Planck peak wavelength: " << numerical_bisection_result.wavelength << " m"<<std::endl;
  std::cout << "Bisection iterations:  " << numerical_bisection_result.iterations<<std::endl;
  std::cout << "Root estimated error: " << numerical_bisection_result.root_error << std::endl;
  std::cout << "Wavelength estimated error: " << numerical_bisection_result.wavelength_error<< " m" <<std::endl;
  std::cout << "Converged: "<< std::boolalpha <<  numerical_bisection_result.converged<<std::endl;


// Compare the numerical Planck peak with the Wien-law prediction
// using absolute, relative, and percentage differences.
  
  long double absolute_difference = std::abs(wavelength_wien - numerical_bisection_result.wavelength);

  std::cout << "Absolute Wien-bisection difference: "<< absolute_difference << " m"<<std::endl;

  long double relative_difference = absolute_difference / wavelength_wien;

  std::cout << "Relative Wien-bisection difference: " << relative_difference <<std::endl;

  long double percentage_difference = relative_difference * 100.0L;

  std::cout << "Percentage Wien-bisection difference: " << percentage_difference<< " %" <<std::endl;

  long double radiative_flux = radiative_flux_at_the_surface(T_eff_sun);

  std::cout << "Radiative flux at the surface: "<< radiative_flux << " W m^-2" << std::endl;

  long double stellar_luminosity = stellar_luminosity_from_temperature_and_radius(R_sun, T_eff_sun);

  std::cout << "Stellar luminosity: " << stellar_luminosity << " W" << std::endl;

  long double luminosity_absolute_difference = std::abs(stellar_luminosity - L_sun);

  std::cout << "Luminosity absolute difference: " << luminosity_absolute_difference << " W" << std::endl;

  long double luminosity_relative_difference = luminosity_absolute_difference / L_sun;

  std::cout << "Luminosity relative difference: " << luminosity_relative_difference << std::endl;

  long double percentage_luminosity_difference = luminosity_relative_difference * 100.0L;

  std::cout << "Luminosity percentage difference: " << percentage_luminosity_difference << " %" << std::endl;

  long double surface_brightness = surface_brightness_from_surface_flux(radiative_flux);

  std::cout << "Surface brightness: " << surface_brightness << " W m^-2 sr^-1" << std::endl;

  return 0;
}
