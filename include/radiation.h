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
//===========================================================================


//===========================================================================
// Luminosity, unit Watts [W].
// Distance, unit meters [m].
// Return value: [W/m^2].
//===========================================================================

long double flux_from_luminosity(long double luminosity, long double distance);

//===========================================================================
// Flux, unit Watts per square meter [W/m^2].
// Distance, unit meters [m].
// Return value: [W].
//============================================================================

long double luminosity_from_flux(long double flux, long double distance);

//============================================================================
// Luminosity, unit Watts [W].
// Flux, unit Watts per square meter [W/m^2].
// Return value: [m].
//============================================================================

long double distance_from_flux_luminosity(long double luminosity, long double flux);
