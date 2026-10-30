# include <stdio.h>
int main() {
    int n;
    printf("Entre number");
    scanf("%d",&n);

    if(n%2==0) {
        printf("Ever number is=%d\n",n);
    }
    else
    {
        printf("Odd number\n");
    }
    return 0;
}