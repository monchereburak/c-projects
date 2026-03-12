#include <stdio.h>
int main(){
    float a,b,c;
    printf("Please pick a value for 'a'\n");
    scanf("%f",&a);
    if (a==0){
        printf("a can not be equal to zero\n");
        return 1;
    }
    printf("Please pick a value for 'b'\n");
    scanf("%f",&b);
    printf("Please pick a value for 'c'\n");
    scanf("%f",&c);
    float delta=(b*b)-(4*a)*c;
    printf("Delta=%1.0f \n",delta);
    if(delta<0){
        printf("No real roots\n");
        } else if (delta>0){
            printf("Two real roots\n");
        } else {
            printf("A single real root\n");
        }
        return 0;
}
