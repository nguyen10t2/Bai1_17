#include <stdio.h>
#include <math.h>
#define PI 3.141593
int kt(int y){
   int x = ((y%4==0)&&(y%100!=0))||(y%400==0) ? 1:  0;
   return x;
}
void bai1() 
{  
   long a,b;
   printf("First  number: ");scanf("%ld",&a);
   printf("Second number: ");scanf("%ld",&b);
   printf("Sum: %lf",a*1.0+b);
}
void bai2() 
{ 
   double a,b,c,h;
   printf("Enter a,b,c: ");
   scanf("%lf %lf %lf",&a,&b,&c);
   if (c<a+b && a<c+b && b<a+c) {
       h = (a+b+c)/2;
       h = sqrt(h*(h-a)*(h-b)*(h-c));
       printf("Area of triangle: %lf",h);
   }
   else printf("NOT TRIANGLE");
}
void bai3() 
{  
   double a;
   printf("Enter Radius: ");
   scanf("%lf",&a);
   if (a>0) printf("Perimeter: %lf\nArea: %lf",2*a*PI,a*a*PI);
   else printf("ERROR");
} 
void bai4() 
{ 
  double a,b,c;
  printf("Price is without tax: ");scanf("%lf",&a);
  printf("Kilo of tomatoes: ");scanf("%lf",&b);
  printf("Tax(%c): ",37);scanf("%lf",&c);
  printf("Total Money: %lf",a*b*(100+c)/100);
}
void bai5() 
{ 
  double x,y;
  printf("\nEnter x and y: ");
  scanf("%lf %lf",&x,&y);
  printf("x^2+y^2 = %lf\n(x+y)^2 = %lf\n(x-y)^2 = %lf",x*x+y*y,(x+y)*(x+y),(x-y)*(x-y));
}
void bai6()
{ 
  double a,b;
  printf("\nEnter a and b: ");scanf("%lf %lf",&a,&b);
  (a==0) ? ((b==0) ? printf("Wealth of counter!") : printf("No solution!")) : printf("The only soulution: %lf",-b/a);
}
void bai7()
{ 
  double a,b,c,d;
  printf("\nEnter a,b,c: ");scanf("%lf %lf %lf",&a,&b,&c);
  if (a==0) 
  (b==0) ? ((c==0) ? printf("Wealth of counter!") : printf("No solution!")) : printf("%.6lf",-c/b);
  else {
    d = b*b-4*a*c;
    if (d>0) printf("x1 = %.6lf\nx2 = %.6lf", (-b+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a));
    else if (d==0) printf("%.6lf",-b/(2*a));
    else printf("No solution!");
  }
}
void bai8() 
{ 
  long a,b;
  printf("\nEnter 2 number: ");scanf("%ld %ld",&a,&b);
  printf("Swap: %ld %ld",b,a);
}
void bai9()
{ 
  double x,y;
  printf("\nEnter x and y: ");scanf("%lf %lf",&x,&y);
  if (x<=y) {
    printf("5.x.sin(y)-3.y^3.c = %.3lf",5*x*sin(y)- 3*y*y*y*x);
  }
  else printf("2.x^2.y + 1 - |y - x| = %.3lf",x,y,y,x,2*x*x*y + 1 - abs(y-x));
}
void bai10()
{ 
  double x,y;
  printf("\nEnter x and y: ");scanf("%lf %lf",&x,&y);
  if (x*y<0) (x*sin(y)>0) ? printf("|x.sin(y)|\n---------- = %lf\nx^2 + y^2 ",x*sin(y)/(x*x + y*y)) : printf("|x.sin(y)|\n---------- = %lf\nx^2 + y^2 ",-x*sin(y)/(x*x + y*y));
  else if (x*y==0) printf("arccos(x) - arcsin(y) = %lf",PI/2);
  else printf("(x.x + 1)^(1/2) - (2.y.y + 2)^(1/3) = %lf",sqrt(x*x+1)-cbrt(2*y*y+2));
}
void bai11()
{ 
  double x,y;
  printf("\nEnter x and y: ");scanf("%lf %lf",&x,&y);
  printf("y^7 + x^5.y^5 + x^2.y^2 + |x| + y^(1/2) = %.4lf",pow(y,7)+pow(x,5)*pow(y,5)+pow(x,2)*pow(y,2)+abs(x)+sqrt(y));
}
void bai12() 
{ 
   double a,b;
   printf("\nEnter width and height: ");
   scanf("%lf %lf",&a,&b);
   if(a<=0 || b<=0) printf("ERROR");
   else {
    a = a/2;
    b = b/2;
    printf("Perimeter: %.4lf\nArea: %.4lf",PI*(3*(a+b)-sqrt((3*a+b)*(a+3*b))),PI*a*b);
   }
}
void btvn1_1()
{ 
  long y;
  printf("\nEnter Year: ");scanf("%ld",&y);
  ((y%4==0)&&(y%100!=0))||(y%400==0) ? printf("Leap Year!") : printf("No Leap Year!");
}
void btvn1_2()
{ 
  int m,y;
  printf("\nEnter Month and Year: ");scanf("%d %d",&m,&y);
  if (m>12 || m<=0 || y<=0) printf("ERROR!");
  else {
      if (m==2) {
          if (kt(y) ==1) printf("Number of days of the Month: %d",29);
          else printf("Number of days of the Month: %d",28);
                }
      else { if (m==4||m==6||m==9||m==11)  printf("Number of days of the Month: %d",30);
             else printf("Number of days of the Month: %d",31);
            }
       } 
}
void btvn1_3()
{ 
  double x,y;
  printf("\nEnter x and y: ");scanf("%lf %lf",&x,&y);
  printf("y^6 + x.y^5 + x^2.y^4 + x^3.y^3 + x^4.y^2 + x^5.y + x^6 = %lf",pow(y,6)+pow(x,1)*pow(y,5)+pow(x,2)*pow(y,4)+pow(x,3)*pow(y,3)+pow(x,4)*pow(y,2)+ pow(x,5)*pow(y,1)+pow(x,6));
}
void btvn1_4()
{ 
  float luong;
  printf("\nEnter Monthly Salary: ");scanf("%f",&luong);
    // luong : hàng triệu;
  if (luong>25) printf("Income Tax: %f\nSalary Received: %f",luong*3/10, luong*7/10);
  if (15<=luong && luong<=25) printf("Income Tax: %f\nSalary Received: ",luong/5,luong*4/5);
  if (luong<15) printf("Income Tax: %f\nSalary Received: ",luong/10,luong*9/10);
}
void main(){
    int n;
    printf("Enter Number: ");scanf("%d",&n);
    switch (n)
  {
    case 0:
       printf("END PROGRAMMING!");
    break;
    case 1:
       printf("RUN BAI_1:SUM OF TWO INTEGERS!\n");
       bai1();
    break;
    case 2:
       printf("RUN BAI_2:CHECK AND FOUND AREA OF TRIANGLE!\n");
       bai2();
    break;
    case 3:
       printf("RUN BAI_3:FOUND PERIMETER AND AREA OF CIRCLE!\n");
       bai3();
    break;
    case 4:
       printf("RUN BAI_4:PRICE TO BUY SOME KILO TOMATOES!\n");
       bai4();
    break;
    case 5:
        printf("RUN BAI_5:CALCULATE THE EXPRESSION VALUE!");
        bai5();
    break;
    case 6:
        printf("RUN BAI_6:LINEAR EQUATION ax+b=0?");
        bai6();
    break;
    case 7:
        printf("RUN BAI_7:QUADRATIC EQUATION ax^2+bx+c=0?");
        bai7();
    break;
    case 8:
        printf("RUN BAI_8:SWAP 2 NUMBERS");
        bai8();
    break;
    case 9:
        printf("RUN BAI_9:CALCULATE THE EXPRESSION VALUE!");
        bai9();
    break;
    case 10:
        printf("RUN BAI_10:FOUND f(x,y) ");
        bai10();
    break;
    case 11:
        printf("RUN BAI_11:CALCULATE THE EXPRESSION VALUE");
        bai11();
    break;
    case 12:
        printf("RUN BAI_12:PERIMETER AND AREA OF ELLIPSE");
        bai12();
    break;
    case 13:
        printf("RUN BAI_13: LEAP YEAR OR NO LEAP YEAR");
        btvn1_1();
    break;
    case 14:
        printf("RUN BAI_14: NUMBER OF DAYS OF THE MONTH,YEAR");
        btvn1_2();
    break;
    case 15:
        printf("RUN BAI_15:CALCULATE THE EXPRESSION VALUE");
        btvn1_3();
    break;
    case 16:
        printf("RUN BAI_16:MONTHLY SALARY!");
        btvn1_4();
    break;
    default:
       printf("Enter Again!\n");
       main();
  }
  printf("\n\n");
  printf("\n             @@     @@@@@@@@    @@@@@@@           @@@@@@@      @@@@@@@                           ");
  printf("\n             @@        @@            @@           @     @           @@                           ");
  printf("\n             @@        @@       @@@@@@@    @@@@   @     @      @@@@@@@                           ");
  printf("\n             @@        @@       @@                @     @           @@                           ");
  printf("\n             @@        @@       @@@@@@@           @@@@@@@      @@@@@@@                           ");
  printf("\n\n");
}