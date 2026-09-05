#pragma once

//============================================================
// AstrophysicsToolkit
// File: units.h
//
// Description:
// Library of unit conversion functions used throughout the
// project. All conversions are based on the International
// System of Units (SI) and astronomical units when required.
//
// Author:
// Luis Carlos Garcia
//
// Created:
// July 2026
//============================================================

//============================================================
// Length
//============================================================

long double meter_to_centimeter(long double meter);
long double centimeter_to_meter(long double centimeter);

long double meter_to_kilometer(long double meter);
long double kilometer_to_meter(long double kilometer);

long double meter_to_astronomical_unit(long double meter);
long double astronomical_unit_to_meter(long double astronomical_unit);

long double meter_to_light_year(long double meter);
long double light_year_to_meter(long double light_year);

long double meter_to_parsec(long double meter);
long double parsec_to_meter(long double parsec);

long double meter_to_angstrom(long double meter);
long double angstrom_to_meter(long double angstrom);

long double meter_to_nanometer(long double meter);
long double nanometer_to_meter(long double nanometer);

long double meter_to_femtometer(long double meter);
long double femtometer_to_meter(long double femtometer);


//============================================================
// Mass
//============================================================




//============================================================
// Energy
//============================================================



//============================================================
// Pressure
//============================================================



//============================================================
// Time
//============================================================



//============================================================
// Angle
//
// Radian, unit [rad]
// Return value: [arcsec]
//============================================================

long double radian_to_arcsecond(long double radian);

//============================================================
// Arcsecond, unit [arcsec]
//
// Return value: Radian, unit [rad]
//============================================================


long double arcsecond_to_radian(long double arcsecond);

//============================================================
// Steradian, unit [sr]
//
// Return value: unit, [arcsec^2].
//============================================================



long double steradian_to_square_arcsecond(long double steradian);



//============================================================
// Square arcsecond , unit [arcsec^2]
//
// Return value: unit, [sr].
//============================================================

long double square_arcsecond_to_steradian(long double square_arcsecond);
