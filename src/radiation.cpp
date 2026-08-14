#include "radiation.h"
#include "constants.h"
#include <cmath>



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

  
