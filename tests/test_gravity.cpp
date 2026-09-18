#include "gravity.h"
#include "constants.h"
#include "units.h"
#include <iostream>

int main()

{

  long double surface_gravity_of_the_sun = surface_gravity(M_sun, R_sun);

  std::cout << "Surface gravity of the sun: " << surface_gravity_of_the_sun << " m s^-2" << std::endl;

  long double escape_velocity_from_the_sun = escape_velocity(M_sun, R_sun);

  std::cout << "Escape velocity from the sun: " << escape_velocity_from_the_sun << " m s^-1" << std::endl;

  long double distance_meters = astronomical_unit_to_meter(1.0L);

  long double earth_orbital_velocity = orbital_velocity(M_sun, distance_meters);

  std::cout << "The earth orbiting the sun: " << earth_orbital_velocity << " m s^-1" << std::endl;

  long double earth_sun_gravitational_potential_energy = gravitational_potential_energy(M_sun, M_earth, distance_meters);

  std::cout << "Gravitational potential energy of the Earth due to the Sun: " << earth_sun_gravitational_potential_energy << " J" << std::endl;

  long double circular_orbital_energy_earth_to_sun = circular_orbit_energy(M_sun, M_earth, distance_meters);

  std::cout << "Circular orbital energy: " << circular_orbital_energy_earth_to_sun << " J" << std::endl;

}
