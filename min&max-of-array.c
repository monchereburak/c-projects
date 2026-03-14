#include <stdio.h>
int main() {
    int n, i;
    int number;
    int min, max;
    printf("How many integers will you include to the array? ");
    scanf("%d",&n);
    if (n<=0){
        printf("Invalid count for integers\n");
        return 0;
    }
    for (i=0;i<n;i++){
        printf("Please enter %d. integer: ",i+1);
        scanf("%d",&number);
        if (i==0){
            min=number;
            max=number;
        } else if (number<min){
            min=number;
        } else if (number>max){
            max=number;
        }
        }
        printf("min= %d\n",min);
        printf("max=%d\n",max);
    return 0;
}
