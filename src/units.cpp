#include "units.h"


//============================================================
// Length Conversion Factors
//============================================================

constexpr long double meters_per_centimeter = 0.01L;
constexpr long double meters_per_kilometer  = 1000.0L;
constexpr long double meters_per_AU          = 1.495978707e11L;
constexpr long double meters_per_light_year  = 9.4607304725808e15L;
constexpr long double meters_per_parsec      = 3.0856775814913673e16L;
constexpr long double meters_per_nanometer   = 1.0e-9L;
constexpr long double meters_per_angstrom    = 1.0e-10L;
constexpr long double meters_per_femtometer  = 1.0e-15L;

//============================================================
// Mass Conversion Factors
//============================================================

constexpr long double kilograms_per_gram = 0.001L;

//============================================================
// Energy Conversion Factors
//============================================================

constexpr long double joules_per_eV  = 1.602176634e-19L;
constexpr long double joules_per_erg = 1.0e-7L;

//============================================================
// Pressure Conversion Factors
//============================================================

constexpr long double pascals_per_atm = 101325.0L;
constexpr long double pascals_per_dyn_cm2 = 0.1L;

//============================================================
// Time Conversion Factors
//============================================================

constexpr long double seconds_per_year = 31557600.0L;

//============================================================
// Angle Conversion Factors
//============================================================

constexpr long double degrees_per_radian = 57.29577951308232L;
constexpr long double radians_per_degree = 0.017453292519943295L;



long double meter_to_centimeter(long double meter)

{
  
  return meter / meters_per_centimeter;  
}

long double centimeter_to_meter(long double centimeter)

{

  return centimeter * meters_per_centimeter;

}


long double meter_to_kilometer(long double meter)

{

  return meter / meters_per_kilometer;

}

  
long double kilometer_to_meter(long double kilometer)

{

  return kilometer * meters_per_kilometer;

}

long double meter_to_astronomical_unit(long double meter)

{

  return meter / meters_per_AU;

}


  
long double astronomical_unit_to_meter(long double astronomical_unit)

{

  return astronomical_unit * meters_per_AU; 

}

long double meter_to_light_year(long double meter)

{

  return meter / meters_per_light_year;
  
}

  
long double light_year_to_meter(long double light_year)

{

  return light_year * meters_per_light_year;

}

long double meter_to_parsec(long double meter)

{

  return meter / meters_per_parsec;
  
}

  
long double parsec_to_meter(long double parsec)

{

  return parsec * meters_per_parsec;

}

long double meter_to_nanometer(long double meter)
{

  return meter / meters_per_nanometer;
}

long double nanometer_to_meter(long double nanometer)
{

  return nanometer * meters_per_nanometer;
  
}


long double meter_to_angstrom(long double meter)

{

  return meter / meters_per_angstrom;
  
}

long double angstrom_to_meter(long double angstrom)

{

  return angstrom * meters_per_angstrom;

}



long double meter_to_femtometer(long double meter)

{

  return meter / meters_per_femtometer;
  
}


long double femtometer_to_meter(long double femtometer)

{

  return femtometer * meters_per_femtometer;

}
