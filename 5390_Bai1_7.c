#include <stdio.h> 
#include <math.h>
int main() 
{ 
  double a,b,c,d;
  scanf("%lf %lf %lf",&a,&b,&c);
  if (a==0) 
  (b==0) ? ((c==0) ? printf("Phuong trinh vo so nghiem") : printf("Phuong trinh vo nghiem")) : printf("%.6lf",-c/b);
  else {
    d = b*b-4*a*c;
    if (d>0) printf("%.6lf\n%.6lf", (-b+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a));
    else if (d==0) printf("%.6lf",-b/(2*a));
    else printf("Phuong trinh vo nghiem");
  }
}
