#include<stdio.h>
int main()
{
	int age,a;
	printf("enter the age\n");
	scanf("%d",&age);
	a=18-age;
	if(age>=18)
	printf("ELIGIBLE");
	else
	printf("NOT ELIGIBILE\n");
	printf("has to wait %d years",a);
}
