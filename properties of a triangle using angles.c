#include <stdio.h>
#include <math.h>
int a1, a2, a3;
int main(){
	printf("Enter 3 the angles of the triangle to find out what kind of triangle it is.\n");
	printf("Enter the first angle: ");
	scanf("%d", &a1);
	printf("Enter the second angle: ");
	scanf("%d", &a2);
	printf("Enter the third angle: ");
	scanf("%d", &a3);
	
	if (a1+a2+a3 != 180){
		printf("Invalid values, angles do not add up to 180");
	}
	else if (a1==a2 && a2==a3 && a1==a3){
		printf("The triangle is equilateral");
	}
	else if (a1==a2 || a2==a3 || a1==a3){
		printf("The triangle is isosceles");
	}
	else {
		printf("The triangle is scalene");
	}
return 0;
}

/* 
Case 1:
a1 = 60
a2 = 60
a3 = 60
Result: "The triangle is equilateral"

Case 2:
a1=50
a2=40
a3=90
Result: "The triangle is scalene"

Case 3:
a1=30
a2=30
a3=120
Result: "The triangle is isosceles"
/*
