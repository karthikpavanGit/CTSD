#include<stdio.h>
int main() {
	int x, max_submissions;
	printf("Enter number of minutes: ");
	scanf("%d", &x);
	
	int secs = (x*60)-5;
	max_submissions = secs/30;
	printf("max submissions = %d\n", max_submissions);
	return 0;
}
