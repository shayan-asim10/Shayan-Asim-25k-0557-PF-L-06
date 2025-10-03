#include <stdio.h>

int main(){
	int n, result=0, original,i=0,prod,remainder;
	printf("Enter a number: ");
	scanf("%d",&n);
	original = n;
	
	while(original!=0){
		original /=10;
		i++;
	}
	original = n;
	
	while(original != 0){
		remainder=original%10;
		original /=10;
		prod = 1;
		for(int j=1;j<=i;j++){
			prod=prod*remainder;
		}
		result = result + prod;
	}
	
	if(result == n){
		printf("\nIt is Armstrong number!");
	}
	else{
		printf("\nIt is not a Armstrong number!");
	}
}


