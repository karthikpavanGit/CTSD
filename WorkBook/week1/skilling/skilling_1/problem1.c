#include<stdio.h>
int main() {
	float X, distance_walked;
	printf("Enter distance X: ");
	scanf("%f", &X);
	
	distance_walked = (X*2)*5;
	printf("Toal distance covered by ramu = %.2f Kilometers\n", distance_walked);
	return 0;
}
