#include<stdio.h>
#include<math.h>
//FUNCTION DECLARATION
float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a,float b);
//FUNTION CALLING INTO MAIN FUNCTION 
int main() {
    //for square
    float side;
    printf("Enter side");
    scanf("%f",&side);
    printf("areaa of square=%.2f\n",squareArea(side));
    //for circle
    float rad;
    printf("Enter radius");
    scanf("%f",&rad);  
    printf("area of circle=%.2f\n",circleArea(rad)); 
}
//FUNCTION DEFINATION
float squareArea(float side){
   return side*side;
}
float circleArea(float rad) {
    return 3.14*rad*rad;
}
float rectangle(float a,float b) {
    return a*b;
}



