#include<stdio.h>
int main() {
	int n;
	printf("Enter n value: ");
	scanf("%d", &n);

	if(n%2==0) {
		printf("White Ball\n");
	}
	else {
		printf("Black Ball\n");
	}
	return 0;
}
