#include <stdio.h>
int main(){
	int correct_pin = 1234, pin;
	do{
		printf("Enter your PIN: ");
		scanf("%d",&pin);
	}
	while(pin != correct_pin);
	return 0;
}


