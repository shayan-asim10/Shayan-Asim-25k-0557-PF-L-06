#include <stdio.h>

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int exponent;
	printf("\nEnter the power: ");
	scanf("%d",&exponent);
	int prod = 1;
	for(int i=1;i<=exponent;i++){
		prod=prod*n;
	}
	printf("\n%d",prod);
}
