#include <stdio.h> 
#include <math.h>
int main() 
{ 
   double a,b,c,h;
   scanf("%lf %lf %lf",&a,&b,&c);
   if (c<a+b && a<c+b && b<a+c) {
       h = (a+b+c)/2;
       h = sqrt(h*(h-a)*(h-b)*(h-c));
       printf("%lf",h);
   }
   else printf("Khong phai tam giac");
}
