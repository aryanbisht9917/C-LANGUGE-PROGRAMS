#include <stdio.h>
int calculateSUM(int a,int b) {
    return a+b;
}
int main() {
    int num1,num2,result;
    printf("Enter  two numbers");
    scanf("%d %d",&num1,&num2 );
    result=calculateSUM(num1,num2);
    printf("sum of two numbers=%d\n",result);
    return 0;
}