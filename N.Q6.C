#include<stdio.h>
int main() {
    int i,j;
    i=1;
    while(i<=3)
{
    j=1;
    while(j<=3){
        printf("%d",i);
        j++;
    }
    printf("\n");
    i++;
}
return 0;
}