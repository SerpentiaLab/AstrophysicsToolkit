#pragma once

//============================================================
// AstrophysicsToolkit
// File: constants.h
//
// Description:
// Physical constants and astronomical reference values
// used throughout the project.
//
// Author:
// Luis Carlos Garcia Moreno

//============================================================


//============================================================
//============================================================
// Physical Constants
// Source:
// Stellar Astrophysics Formulary
// Master in Advanced Physics
// Universitat de València
//============================================================
//============================================================


// Pi

// Speed of light

// Universal gravitational constant

// Boltzmann constant

// Planck constant

// Stefan-Boltzmann constant

// Radiation constant

// Elementary charge

// Vacuum permittivity

// Vacuum permeability

// Avogadro constant

// Atomic mass unit

// Electron mass

// Proton mass

// Neutron mass

// Thomson cross-section


//============================================================
// Astronomical Reference Values
//============================================================


//-------------------------
// Sun
//-------------------------

// Solar mass

// Solar radius

// Solar luminosity

// Solar effective temperature

// Solar bolometric magnitude

//-------------------------
// Earth
//-------------------------

// Earth mass

// Earth radius


//-------------------------
// Jupiter
//-------------------------

// Jupiter mass

// Jupiter radius/

// Values based primarily on the Stellar Astrophysics Formulary,
// Master in Advanced Physics, Universitat de Valencia.
// Some particle constants use higher-precision SI values CODATA.

constexpr long double pi = 3.14159265358979323846L; // pi constant
constexpr long double c = 2.99792458e8L; // Speed of light [m/s]
constexpr long double G = 6.673e-11L; // Universal gravitational constant [m^3 kg^-1 s^-2]
constexpr long double k_B = 1.3807e-23L; // Boltzmann constant [J/K]
constexpr long double h = 6.6261e-34L; // Planck constant [J s]
constexpr long double sigma = 5.6705e-8L; // Stefan-Boltzmann constant [W m^-2 K^-4]
constexpr long double a = 7.5659e-16L; // Radiation constant [J m^-3 K^-4]
constexpr long double e = 1.609e-19L; // Elementary charge [C]
constexpr long double epsilon_0 = 8.8541878188e-12L; // Vacuum electric permittivity [F m^-1]
constexpr long double mu_0 = 1.25663706127e-6L; // Vacuum magnetic permeability [N A^-2]
constexpr long double N_A = 6.0221367e23L; // Avogadro's number
constexpr long double m_u = 1.66053906892e-27L; // Atomic mass unit [kg]
constexpr long double m_e = 9.1093837139e-31L; // Electron mass [kg]
constexpr long double m_p = 1.67262192595e-27L; // Proton mass [kg]
constexpr long double m_n = 1.67492750056e-27L; // Neutron mass [kg]
constexpr long double sigma_T = 6.6524e-29L; // Thomson cross-section [m^2]


//============================================================
// Astronomical Reference Values
//============================================================

//-------------------------
// Sun
//-------------------------

constexpr long double M_sun = 1.989e30L; // Solar mass [kg]
constexpr long double R_sun = 6.960e8L; // Solar radius [m]
constexpr long double L_sun = 3.828e26L; // Solar luminosity (bolometric) [W]
constexpr long double T_eff_sun = 5772L; // Effective temperature of the Sun [K]
constexpr long double M_bol_sun = 4.74L; // Solar bolometric magnitude (dimensionless)

//-------------------------
// Earth
//-------------------------

constexpr long double M_earth = 5.974e24L; // Earth mass [kg]
constexpr long double R_earth = 6.367e6L; // Earth radius (mean) [m]

//-------------------------
// Jupiter
//-------------------------

constexpr long double M_jupiter = 1.90e27L; // Jupiter mass [kg]
constexpr long double R_jupiter = 6.917e7L; // Jupiter radius [m]

