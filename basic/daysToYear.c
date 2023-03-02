#include <stdio.h>

int main(){
    int days = 2535;
    float yr,mon,dy;
    yr = days/365;
    mon = (days/30.417) - (yr*12);
    dy = (days-(365*yr)) - mon*30.417;
    printf("%f Years %f Months %f Days",yr,mon,dy);
    return 0;
    
}