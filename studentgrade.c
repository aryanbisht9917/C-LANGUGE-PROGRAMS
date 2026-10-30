#include <stdio.h>
int main() {
    int mark;
    printf("Entre mark");
    scanf("%d",&mark);
    
    if(mark<30) {
        printf("grade=C\n");
    } 
    else if(mark>=30&&mark<70) {
        printf("grade=B\n");
    }
    else if(mark>=70&&mark<90) {
        printf("grade=A\n");
    }
    else if(mark>=90&&mark<=100) {
        printf("grade=A+\n");
    }
    else {
        printf("fail\n");
    }
    return 0;

}