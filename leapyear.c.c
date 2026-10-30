#include <stdio.h>
int main() {
    int x;
    printf("enter year");
    scanf("%d",&x);
    if((x % 4 == 0 && x % 100 != 0)||(x % 400 == 0)){
        printf("Leap year\n");
    } else {
        printf("not a leap year\n");
    }
    return 0;

}    