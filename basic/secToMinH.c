#include <stdio.h>
int secondsToMinAndHour(int second){
    //60 seonds === 1 min
    int min,hour,sec;
    min = second/60;
    printf("%d",hour);
    if(min>60){
        hour = min/60;
    }
    return min;
}
float secondsToYear(int second){
    //60 seonds === 1 min
    float min = second/60.0;
    return min;
}
int main(){
    int seconds = 25300;
    // printf("Enter Seconds:");
    // scanf("%d",&seconds);
    printf("%d hour",secondsToMinAndHour(seconds));
    return 0;
}