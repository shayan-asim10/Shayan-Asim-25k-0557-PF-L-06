#include <stdio.h>

int main(){
	int number;
	printf("Enter a number: ");
	scanf("%d",&number);
	int reverse;
	while(number!=0){
		reverse=number%10;
		number=number/10;
		printf("%d",reverse);
	}
	return 0;
}
