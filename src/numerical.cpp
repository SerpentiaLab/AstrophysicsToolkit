#include "numerical.h"
#include <limits>



BisectionResult bisection(long double(*f)(long double), long double a, long double b, long double epsilon, int max_iterations) 
{

  BisectionResult result; 

  result.iterations = 0;
  result.converged = false;
  result.root = std::numeric_limits<long double>::quiet_NaN();
  result.estimated_error =  std::numeric_limits<long double>::quiet_NaN(); 

  if(epsilon <= 0){

    return result;

  }


  if (max_iterations <= 0){

    return result;

  }

  if (a >= b)

    {

      return result;

    }
  
  if(f(a) == 0){

    result.root = a;
    result.estimated_error = 0;
    result.iterations = 0;
    result.converged = true;
    
    return result;

  }

  if(f(b) == 0){

    result.root = b;
    result.estimated_error = 0;
    result.iterations = 0;
    result.converged = true;
    
    return result;

    
  }

// Bisection requires a sign change across the interval.
  
if (f(a) * f(b) > 0){
  
    return result;

 }

 while(result.iterations < max_iterations && !result.converged)
   {

     long double x_m = (a + b) / 2; // Midpoint of the current interval.
     long double f_m = f(x_m); // Value of the function at that point.
     result.iterations++;

     if (f_m == 0)
       {
    result.root = x_m;
    result.estimated_error = 0;
    result.converged = true;

    return result; 
       }

// Keep the half-interval that preserves the sign change.

     if(f(a) * f_m < 0)

       {

	 b = x_m;

       }
     else

       {

	 a = x_m;
	 
       }

     result.root = (a + b) / 2;

// The half-width of the remaining interval bounds the root error.
     
     result.estimated_error = (b - a) / 2;

     if(result.estimated_error <= epsilon)

       {
	 
	 result.converged = true;
	 

       }

   }
  
 return result; 
 
}


