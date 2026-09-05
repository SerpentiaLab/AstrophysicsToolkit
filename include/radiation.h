#pragma once

//==========================================================================
// AstrophysicsToolkit
// file: radiation.h
//
// Description:
// Physical functions related to radiative and geometric quantities.
//
// Author:
// Luis Carlos Garcia Moreno.
//=================================================================================


//=================================================================================
// Luminosity, unit Watts [W].
// Distance, unit meters [m].
// Return value: [W/m^2].
//=================================================================================

long double flux_from_luminosity(long double luminosity, long double distance);

//==================================================================================
// Flux, unit Watts per square meter [W/m^2].
// Distance, unit meters [m].
// Return value: [W].
//==================================================================================

long double luminosity_from_flux(long double flux, long double distance);

//==================================================================================
// Luminosity, unit Watts [W].
// Flux, unit Watts per square meter [W/m^2].
// Return value: [m].
//==================================================================================

long double distance_from_flux_luminosity(long double luminosity, long double flux);

//===================================================================================
// Temperature, unit Kelvin [K]
// Wien constant, unit [m K]
// Return value: [m]
//===================================================================================

long double peak_wavelength_from_temperature(long double temperature);


//===================================================================================
// Wavelength, unit meters [m]
// Wien constant, unit [m K]
// Return value: [K]
//===================================================================================

long double temperature_from_peak_wavelength(long double peak_wavelength);

//===================================================================================
// Wavelength, unit meters [m]
// Temperature, unit [K]
// Return value: [W m^-3 sr^-1]
//===================================================================================

long double planck_wavelength(long double wavelength, long double temperature);

//===================================================================================
// Frequency, unit  [Hz]
// Temperature, unit [K]
// Return value: [W m^-2 Hz^-1 sr^-1]
//====================================================================================

long double planck_frequency(long double frequency, long double temperature);


//=====================================================================================
// Computes the wavelength of maximum Planck spectral radiance for a given temperature.
// Input:  temperature [K]
// Return: PlanckPeakResult containing wavelength [m], root x, root error,
// wavelength error [m], iteration count, and convergence status.
//=====================================================================================

struct PlanckPeakResult

{

  long double wavelength;
  long double root_x;
  long double root_error;
  long double wavelength_error;
  int iterations;
  bool converged;

};


PlanckPeakResult planck_wavelength_max_from_temperature(long double temperature);

//=====================================================================================
// Temperature, unit [K]
// Return value: [W m^-2]
//=====================================================================================

long double radiative_flux_at_the_surface(long double temperature);

//=====================================================================================
// Temperature, unit [K]
// Radius, unit [m]
// Return value: [W]
//=====================================================================================

long double stellar_luminosity_from_temperature_and_radius(long double radius, long double temperature);


//=====================================================================================
// Surface flux, unit [W m^-2]
//
// Return value: [W m^-2 sr^-1]
//=====================================================================================

long double surface_brightness_from_surface_flux(long double surface_flux);
