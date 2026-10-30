#include<stdio.h>
int main() {
    int n,i;
    printf("Enter number");
    scanf("%d",&n);
    i=1;
    while(i<=n) {
        printf("%dx%d=%d\n",n,i,n*i);
        i++;
    }
    return 0;
}