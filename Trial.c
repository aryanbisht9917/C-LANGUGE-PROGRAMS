#include<stdio.h>
int main() {
    int n,i,count=0;
    printf("Enter number");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if(n%i==0) {
            count++;
        }
    }
    if(count==2) {
        printf("prime number\n");
    } else {
        printf("not a prime number \n");
    }
    return 0;
}