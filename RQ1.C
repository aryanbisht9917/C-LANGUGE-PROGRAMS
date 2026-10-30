#include<stdio.h>
int sum(int n);//fun def
int main() {
    printf("Sum is=%d\n",sum(5));
    return 0;

}
int sum(int n){
    if(n==1) {   //base case
        return 1;
    }

    int sumNm1=sum(n-1); 
    int sumN=sumNm1+n;
    return sumN;

    
}