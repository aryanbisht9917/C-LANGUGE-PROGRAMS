#include <stdio.h>
int main() {
    int n;
    printf("Enter your number");
    scanf("%d",&n);
    int sum=0;
    for(int i=1; i<=n; i++) {
        sum+=i;
    }
    printf("SUM is %d\n",sum);
    return 0;
} 