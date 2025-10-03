#include <stdio.h>

int main(){
	int n, t1, t2, t3, t4;
	printf("Enter the range of Fibonacci Series: ");
	scanf(" %d",&n);
	t1 = 0, t2 = 1;
	t3 = t1+t2;
	int next_t;
	printf("Fibonacci Series: %d %d",t1,t2);
	next_t = t2+t3;
	for(int i = 3; i<=n;i++){
		printf(" %d", next_t);
		
		t1=t2;
		t2=next_t;
		next_t = t1 + t2;
	}
	return 0;
}
