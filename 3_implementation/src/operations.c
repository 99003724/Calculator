#include <operations.h>
//#include<math.h>

double square1(double sq)
{
    return sq*sq;
}

double cube1(double cu)
{
    return cu*cu*cu;
}

double square_root(double sq_rt)
{
    double temp,sqrt;
    sqrt=sq_rt/2;
    temp=0;
    while(sqrt!=temp)
    {
        temp =sqrt;
        sqrt=(sq_rt/temp +temp)/2;
    }
    return sqrt;
}

double cube_root(double cb_rt) {
   double cbrt, precision = 0.000001;
   
   for(cbrt = 1; (cbrt*cbrt*cbrt) <= cb_rt; ++cbrt);         //Integer part

   for(--cbrt; (cbrt*cbrt*cbrt) < cb_rt; cbrt += precision);  //Fractional part
   
   return cbrt;
}


