#include<stdio.h>
int convertTem(float celcius);
int main() {
    float far=convertTem(56);
    printf("Fahrenheit=%.2f\n",far);
    return 0;

}
int convertTem(float celcius) {
    float far=celcius*9.0/5.0+32;
    return far;
}