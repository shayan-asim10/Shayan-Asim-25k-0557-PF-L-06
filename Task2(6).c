#include <stdio.h>

int main(){
	int i, n, prime;
	printf("Enter a number: ");
	scanf("%d",&n);
	int original = n;
	if(n>=2){
	for(i=2;i<n;i++){
		n = original;
		prime = n%i;
		if(prime!=0){
			continue;
		}
		else{
			break;
		}
	}
	if(prime == 0){
		printf("It is not a prime number!");
	}
	else{
		printf("It is a prime number!");
	}
}
	else if(n==1){
		printf("It is not a prime number!");
	}
	else{
		printf("Enter a valid number!");
	}
}
