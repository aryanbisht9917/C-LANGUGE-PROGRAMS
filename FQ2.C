#include<stdio.h>
void namaste();
void bonjour();
int main() {
    char ch;
printf("Enter f for french & Enter i for indian:");
scanf("%c",&ch);
if(ch == 'f') {
    bonjour();
}
else {

    namaste();
}
return 0;
}
void namaste() {
    printf("NAMASTE\n");
}
void bonjour() {
    printf("BONJOUR");
}