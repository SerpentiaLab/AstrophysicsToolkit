#include "numerical.h"
#include <iostream>
#include <iomanip>



long double f(long double x){

  return  x * x - 2;
 

}

int main()

{




  BisectionResult solution = bisection(f, 2, 0, 1e-10L, 100);


  std::cout <<  "Root: " << std::setprecision(15) << solution.root << std::endl;
  std::cout << "Estimated error: " << solution.estimated_error << std::endl;
  std::cout << "Iterations: " << solution.iterations << std::endl;
  std::cout << "Converged: " << solution.converged << std::endl; 
  

}
  
