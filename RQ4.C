#include<stdio.h>
int calculatePercentage(int science, int math, int sanskrit);

int main() {
    int science=73;
    int math =99;
    int sanskrit=98;
    printf("PERCENTAGE is=%d\n",calculatePercentage(science,math,sanskrit));
    return 0;

}
int calculatePercentage(int science, int math ,int sanskrit) {
return ((science+math+sanskrit)*100)/300;
}
