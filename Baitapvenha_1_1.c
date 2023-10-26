#include <stdio.h>
int main(){
   long y;
   scanf("%ld",&y);
   ((y%4==0)&&(y%100!=0))||(y%400==0) ? printf("Nam nhuan") : printf("Nam Khong Nhuan");
}