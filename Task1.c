#include <stdio.h>

int main(){
	int number, factorial = 1;
	int i;
	printf("Enter a number!!!!");
	scanf("%d",&number);
	for(i=number;i>=1;i--){
		factorial=factorial*i;
	}
	printf("\n%d",factorial);
}
