#include <stdio.h> 
#include <math.h>
int main() 
{ 
  double x,y;
  scanf("%lf%lf",&x,&y);
  if (x<=y) {
    printf("%.3lf",5*x*sin(y)- 3*y*y*y*x);
  }
  else printf("%.3lf",2*x*x*y + 1 - abs(y-x));
}
