#include "gravity.h"
#include "constants.h"
#include <cmath>
#include <limits>

long double surface_gravity(long double mass, long double radius)

{

  if(radius <= 0 || mass <= 0)

    {
      return  std::numeric_limits<long double>::quiet_NaN();
    }

  return G * mass / std::pow(radius, 2.0L);

}


long double escape_velocity(long double mass, long double radius)

{

  if(radius <= 0 || mass <= 0)

    {
      return  std::numeric_limits<long double>::quiet_NaN();
    }

  return std::sqrt(2.0L * G * mass / radius);

}


long double orbital_velocity(long double mass, long double orbital_radius)

 {

   if(orbital_radius <= 0 || mass <= 0)

     {
       return std::numeric_limits<long double>::quiet_NaN();
     }

   return std::sqrt(G * mass / orbital_radius);

 }


long double gravitational_potential_energy(long double central_mass, long double object_mass, long double distance)

{

  if(central_mass <= 0 || object_mass <= 0 || distance <= 0)

    {
      return std::numeric_limits<long double>::quiet_NaN();
    }

  
  return -(G * central_mass * object_mass) / distance;


}


long double circular_orbit_energy(long double central_mass, long double object_mass, long double orbital_radius)

{


  if(central_mass <= 0 || object_mass <= 0 || orbital_radius <= 0)

    {
      return std::numeric_limits<long double>::quiet_NaN();
    }


  return -(G * central_mass * object_mass) /(2.0L * orbital_radius);

}
  
