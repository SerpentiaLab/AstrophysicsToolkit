#pragma once


//===========================================================================================================================================
// AstrophysicsToolkit
// file: gravity.h
//
// Description:
// Physical functions related to surface gravity, escape velocity, orbital velocity, gravitational potential energy and circular orbit energy
//
// Author:
// Luis Carlos Garcia Moreno.
//===========================================================================================================================================


//===========================================================================================================================================
// Mass, unit [kg]
// Radius, unit [m]
//
// Return value: Surface gravity, unit [m s^-2]
//===========================================================================================================================================

long double surface_gravity(long double mass, long double radius);

//===========================================================================================================================================
// Mass, unit [kg]
// Radius, unit [m]
//
// Return value: Escape velocity, unit [m s^-1]
//===========================================================================================================================================

long double escape_velocity(long double mass, long double radius);

//===========================================================================================================================================
// Mass, unit [kg]
// Orbital radius, unit [m]
//
// Return value: Orbital velocity, unit [m s^-1]
//===========================================================================================================================================


long double orbital_velocity(long double mass, long double orbital_radius);

//===========================================================================================================================================
// Central mass, unit [kg]
// Object mass, unit [kg]
// Distance, unit [m]
//
// Return value: Gravitational potential energy, unit [J]
//===========================================================================================================================================


long double gravitational_potential_energy(long double central_mass, long double object_mass, long double distance);


//===========================================================================================================================================
// Central mass, unit [kg]
// Object mass, unit [kg]
// Orbital radius, unit [m]
//
// Return value: Circular orbit energy, unit [J]
//===========================================================================================================================================


long double circular_orbit_energy(long double central_mass, long double object_mass, long double orbital_radius);
