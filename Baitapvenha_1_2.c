#include <stdio.h>
int kt(int y){
   int x = ((y%4==0)&&(y%100!=0))||(y%400==0) ? 1:  0;
   return x;
}
int main(){ 
    int m,y;
    scanf("%d %d",&m,&y);
    if (m>12 || m<=0 || y<=0) printf("Ko hop le");
    else {
        if (m==2) {
            if (kt(y) ==1) printf("%d",29);
            else printf("%d",28);
        }
        else { if (m==4||m==6||m==9||m==11)  printf("%d",30);
               else printf("%d",31);
             }
    }
}