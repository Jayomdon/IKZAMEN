#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main() {
	
	int x;
	float y;

	printf("Return x: ");
	scanf("%d", &x);

	y = sqrt(pow(x,2) + pow(x,2));
	
	printf("Result: %f", y);
}