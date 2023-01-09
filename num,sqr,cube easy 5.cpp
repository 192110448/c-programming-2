#include<stdio.h>
int main()
{
	float number,square,cube;
	printf("enter the decimal number:");
	scanf("%f",&number);
	square=number*number;
	cube=number*number*number;
	printf("the square of number=%.2f\n",square);
	printf("the cube of numbers=%.3f",cube);
}
