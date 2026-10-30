#include<stdio.h>
int main() {
    int n,i,sum=0;
    printf("enter your num");
    scanf("%d",&n);
    for(i=1; i<=n; i++) {
        sum+=i;
    }
    printf("Sum is=%d",sum);
//reverse
printf("Reverse\n");

for(i=n; i>=1; i--) {
    printf("%d",i);
}
return 0;
}