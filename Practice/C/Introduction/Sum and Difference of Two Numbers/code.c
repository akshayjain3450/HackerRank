#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum_int(int num1,int num2){
    return num1+num2;
}
int sub_int(int num1,int num2){
    return num1-num2;
}
float sum_float(float num1, float num2){
    return num1+num2;
}
float sub_float(float num1,float num2){
    return num1-num2;
}
int main()
{
	int num1,num2;
    float num3,num4;
    scanf("%d%d",&num1,&num2);
    scanf("%f%f",&num3,&num4);
    printf("%d %d\n", sum_int(num1,num2), sub_int(num1,num2));
    printf("%0.1f %0.1f\n", sum_float(num3,num4), sub_float(num3,num4));

    return 0;
}

