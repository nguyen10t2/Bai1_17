#include <stdio.h>
int main(void){
    float luong;
    // luong : hàng triệu;
    scanf("%f",&luong);
    if (luong>25) printf("%f %f",luong*3/10, luong*7/10);
    if (15<=luong && luong<=25) printf("%f %f",luong/5,luong*4/5);
    if (luong<15) printf("%f %f",luong/10,luong*9/10);
}