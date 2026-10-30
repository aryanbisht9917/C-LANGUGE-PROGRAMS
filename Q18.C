#include<stdio.h>
int main()
{
    int n;
    while(1)
    {
        printf("Enter a number");
        scanf("%d",&n);
        if(n%7==0)
        {
            break;
        }          
}
printf("Multiple of 7 enterd.progrram stopped");
return 0;
    }