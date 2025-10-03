#include <stdio.h>

int main(){
	int n, reverse = 0, remainder;
	printf("Enter a number: ");
	scanf("%d",&n);
	int original = n;
	while(n!=0){
		remainder=n%10;
		reverse=reverse*10 + remainder;
		n=n/10;
	}
	printf("\n%d",reverse);
	if(reverse == original){
		printf("\nIt is palindrome");
	}
	else{
		printf("\nIt is not palindrome!");
	}
}
