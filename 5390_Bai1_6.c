#include <stdio.h> 
#include <math.h>
int main() 
{ 
  double b,c;
  scanf("%lf %lf",&b,&c);
  (b==0) ? ((c==0) ? printf("Phuong trinh vo so nghiem") : printf("Phuong trinh vo nghiem")) : printf("%lf",-c/b);
}
