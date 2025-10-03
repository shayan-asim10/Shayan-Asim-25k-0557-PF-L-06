#include <stdio.h>

int main(){
	int odd = 0, even = 0;
	for(int i=0; i<=20;i++){
	if(i%2 == 0){
		even=even+i;
	}
	else{
		odd=odd+i;
	}
  }
  printf("\nSum of even numbers: %d",even);
  printf("\nSum of odd numbers: %d", odd);
}

