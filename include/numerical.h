#pragma once



//===================================================================================
// AstrophysicsToolkit
// file: numerical.h
//
// Description: BisectionResult is a type we created that contains:
// root, estimated error, iterations, converged
// We declared a bisection function that: returns a BisectionResult
// and receives: f, a, b, epsilon, max_iterations and also f takes a long double
// argument and returns a long double
// a, b are the endpoints of the initial interval, epsilon is the requested tolerance,
// and `max_iterations` is the safety limit.
//
// Our version of bisection assumes that the function is continuous on the interval
// and that the valid interval contains a sign change.
//
//
// Author:
// Luis Carlos Garcia Moreno.
//====================================================================================





struct BisectionResult  

{

  long double root;
  long double estimated_error;
  int         iterations;
  bool        converged;


};

BisectionResult bisection(long double(*f)(long double), long double a, long double b, long double epsilon, int max_iterations); 
