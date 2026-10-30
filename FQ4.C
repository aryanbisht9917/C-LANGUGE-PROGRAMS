#include<math.h>
#include<stdio.h>
int main() {
    double num,result;
    printf("Enter your number");
    scanf("%lf",&num);
    result=pow(num,2);
    printf("Square of %.2lf is %.2lf\n",num,result);
    return 0;
}