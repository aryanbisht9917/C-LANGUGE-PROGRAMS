#include<stdio.h>
int main() {
    int n;
    int i=10;
    printf("ENTER YOUR NUMBER");
    scanf("%d",&n);
    while(i>=1)
    {
        printf("%dx%d\n",n,i,n*i);
        i--;
    }
    return 0;
}