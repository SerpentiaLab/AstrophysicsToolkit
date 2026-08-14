#include "photometry.h"
#include "constants.h"
#include "units.h"
#include <iostream>
#include <cmath>


int main()

{

  long double solar_bolometric_magnitude = absolute_bolometric_magnitude_from_luminosity(L_sun);

  std::cout << solar_bolometric_magnitude << std::endl;

  long double solar_luminosity_absolute_bolometric_magnitude = luminosity_from_absolute_bolometric_magnitude(solar_bolometric_magnitude); 

  std::cout << solar_luminosity_absolute_bolometric_magnitude <<" W"<< std::endl;

  long double flux_1 = 1.0e4L;
  long double flux_2 = 1.0e6L;

 long double apparent_magnitude_difference = magnitude_difference_from_fluxes(flux_1, flux_2);

 std::cout << apparent_magnitude_difference << std::endl;

 long double flux_ratio = flux_ratio_from_magnitude_difference(apparent_magnitude_difference);

 std::cout << flux_ratio << std::endl;

 long double conversion_parsec_to_meter = parsec_to_meter(10.0L);

 long double distance_modulus = distance_modulus_from_distance(conversion_parsec_to_meter);

 std::cout << distance_modulus << std::endl;

 long double distance = distance_from_distance_modulus(distance_modulus);

 std::cout << distance << " m" << std::endl;

 long double conversion_meter_to_parsec = meter_to_parsec(distance);

 std::cout << conversion_meter_to_parsec << " pc" <<std::endl;
 
 
}
