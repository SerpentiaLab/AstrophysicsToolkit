#include "photometry.h"
#include "constants.h"
#include <cmath>
#include "units.h"

long double absolute_bolometric_magnitude_from_luminosity(long double luminosity)

{

  return  M_bol_sun - 2.5 * std::log10(luminosity / L_sun);


}


long double luminosity_from_absolute_bolometric_magnitude(long double absolute_bolometric_magnitude)

{


  return L_sun * (std::pow(10.0L, (M_bol_sun - absolute_bolometric_magnitude) / 2.5));

}

long double magnitude_difference_from_fluxes(long double flux_1, long double flux_2)

{

  return -2.5 * std::log10(flux_2 / flux_1);


}


long double flux_ratio_from_magnitude_difference(long double difference_apparent_magnitude)

{

  return std::pow(10.0L, -difference_apparent_magnitude / 2.5);

}


long double distance_modulus_from_distance(long double distance)

{

  long double distance_pc =  meter_to_parsec(distance);

  return 5 * std::log10( distance_pc / 10 );

}

long double distance_from_distance_modulus(long double distance_modulus)


{
  
  long double distance_pc = std::pow(10.0L, distance_modulus / 5 + 1);

  return  parsec_to_meter(distance_pc);

}
