#include <stdio.h>
double absolutevalue(double x){
    if (x<0){
        return x*-1;
    } else {
        return x;
    }
}
int main(){
    double anumber;
    printf("Please Pick a Number\n");
    scanf("%lf",&anumber);
    double result=absolutevalue(anumber);
    printf("Absolute Value of Your Number is %.2lf\n",result);
    return 0;
}
