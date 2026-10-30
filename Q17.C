#include<Stdio.h>
int main() {
    int n;
  
    for(;;){
        printf("Enter your number");
        scanf("%d",&n);
        if(n%2!=0) 
        {
            break;
        }
        printf("you entered an even number\n");
    }
    printf("you enterd an odd number.progrram stopped");
    return 0;
}