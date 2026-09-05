#include "units.h"
#include <iostream>



int main()

{

  long double angular_radius = 1.1729e-9L;

  long double angular_radius_test = radian_to_arcsecond(angular_radius);

  std::cout << "Angular radius test: " << angular_radius_test << " arcsec" << std::endl;


  long double recovered_angular_radius = arcsecond_to_radian(angular_radius_test);

  std::cout << "Recovered angular radius: " << recovered_angular_radius << " rad" << std::endl;

  long double solid_angle_test = 1.0L;

  long double solid_angle_in_square_arcseconds = steradian_to_square_arcsecond(solid_angle_test);

  std::cout << "Solid angle in square arcseconds: " << solid_angle_in_square_arcseconds << " arcsec^2" << std::endl;

  long double recovered_solid_angle = square_arcsecond_to_steradian(solid_angle_in_square_arcseconds);

  std::cout << "Recovered solid angle: " << recovered_solid_angle << " sr" << std::endl;




return 0;

}
