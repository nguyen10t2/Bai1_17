#include <stdio.h> 
#include <math.h>
int main() 
{ 
  double x,y;
  scanf("%lf%lf",&x,&y);
  printf("%lf",pow(y,6)+pow(x,1)*pow(y,5)+pow(x,2)*pow(y,4)+pow(x,3)*pow(y,3)+pow(x,4)*pow(y,2)+ pow(x,5)*pow(y,1)+pow(x,6));
  return 0;
}