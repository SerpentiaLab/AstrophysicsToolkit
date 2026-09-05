#pragma once


//================================================================================================
// AstrophysicsToolkit
// file: photometry.h
//
// Description:
// Physical functions related to Apparent and absolute magnitude and the distance modulus.
//
// Author:
// Luis Carlos Garcia Moreno.
//========================================================================================================


//========================================================================================================
// Luminosity, unit Watts [W].
//
// Return value: Absolute bolometric magnitude [dimensionless].
//========================================================================================================


long double absolute_bolometric_magnitude_from_luminosity(long double luminosity);

//=========================================================================================================
// Absolute bolometric magnitude [dimensionless]
//
// Return value: Luminosity, unit Watts [W].
//==========================================================================================================


long double luminosity_from_absolute_bolometric_magnitude(long double absolute_bolometric_magnitude);

//===========================================================================================================
//  Flux ratio (flux_2 / flux_1) , units Watts square meter [W / m^2] / [W / m^2] (dimensionless)
//
// Return value : difference in apparent magnitude (m_2 - m_1) [dimensionless].
//============================================================================================================

long double magnitude_difference_from_fluxes(long double flux_1, long double flux_2);

//=============================================================================================================
// Difference in apparente magnitude (m_2 - m_1) [dimensionless]
//
// Return value : flux ratio (flux_2 / flux_1) , units Watts square meter [W / m^2] / [W / m^2] (dimensionless)
//=============================================================================================================


long double flux_ratio_from_magnitude_difference(long double difference_apparent_magnitude);

//=============================================================================================================
// Distance, units meters, [m]
//
//Return value : distance modulus (m - M) [dimensionless].
//=============================================================================================================


long double distance_modulus_from_distance(long double distance);


//=============================================================================================================
// Distance modulus (m - M) [dimensionless]
//
//Return value : Distance, units meters, [m]
//=============================================================================================================


long double distance_from_distance_modulus(long double distance_modulus);


//==============================================================================================================
// Parallax, unit [arcsec]
//
// Return value: [pc].
//==============================================================================================================


long double distance_from_parallax(long double parallax);

//==============================================================================================================
// Distance, unit [pc]
//
// Return value: [arcsec].
//==============================================================================================================

long double parallax_from_distance(long double distance);

//==============================================================================================================
//Radius, unit [m]
//Distance, unit [m]
//
// Return value: [rad].
//==============================================================================================================


long double angular_radius_from_radius_and_distance(long double radius, long double distance);


//==============================================================================================================
// Angular radius, unit [rad]
//
// Return value: [sr].
//==============================================================================================================
// Uses the small-angle approximation.

long double solid_angle_from_angular_radius(long double angular_radius);
