#include <stdio.h> 
#include <math.h>
int main() 
{ 
   double a,PI=3.14159;
   scanf("%lf",&a);
   if (a>0) printf("%lf\n%lf",2*a*PI,a*a*PI);
   else printf("ERROR");
}
