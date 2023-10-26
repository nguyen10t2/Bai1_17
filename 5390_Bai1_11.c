#include <stdio.h> 
#include <math.h>
int main() 
{ 
  double x,y;
  scanf("%lf%lf",&x,&y);
  printf("%.4lf",pow(y,7)+pow(x,5)*pow(y,5)+pow(x,2)*pow(y,2)+abs(x)+sqrt(y));
  return 0;
}