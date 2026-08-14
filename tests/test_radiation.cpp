#include "radiation.h"
#include "constants.h"
#include "units.h"
#include <iostream>

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
  
  
}
