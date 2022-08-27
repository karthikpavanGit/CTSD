#include<stdio.h>
#include<math.h>
int main() {
	int day, problems, p;
	float total_hours;
	printf("Enter the day to find the number of problems solved: ");
	scanf("%d", &day);
	
	printf("Enter the time taken to solve each problem: ");
	scanf("%d", &p); 

	problems = pow(day,2); 
	printf("Number of problems solved till day %d = %d\n", day, problems); 

	total_hours = (float)(problems*p)/60;
	printf("Total hours spent = %.2f hours\n", total_hours);
	return 0; 
	
}
