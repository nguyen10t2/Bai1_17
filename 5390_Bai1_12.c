//C++ 
#include <stdio.h> 
#include <math.h>
int main() 
{ 
   double a,b;
   double PI=3.141593;
   scanf("%lf%lf",&a,&b);
   if(a<=0 || b<=0) printf("ERROR");
   else {
    a = a/2;
    b = b/2;
    printf("%.4lf\n%.4lf",PI*(3*(a+b)-sqrt((3*a+b)*(a+3*b))),PI*a*b);
   }
}

