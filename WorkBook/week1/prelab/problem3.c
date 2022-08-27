#include<stdio.h>
#include<math.h>
#define pi 3.14
int main() {
	float deg, rad, tan_value;
	printf("Enter angle in degree: ");
	scanf("%f", &deg);
	
	rad = deg* (pi/180);

	tan_value = tan(rad);
	printf("tan(%.1f) = %.2f\n", deg, tan_value);
	return 0;
}
