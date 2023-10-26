#include <stdio.h> 
#include <math.h>
int main() 
{ 
  double x,y;
  double PI=3.14159;
  scanf("%lf %lf",&x,&y);
  if (x*y<0) (x*sin(y)>0) ? printf("%lf",x*sin(y)/(x*x+y*y)) : printf("%lf",-x*sin(y)/(x*x+y*y));
  else if (x*y==0) printf("%lf",PI/2);
  else printf("%lf",sqrt(x*x+1)-cbrt(2*y*y+2));
  return 0;
}
