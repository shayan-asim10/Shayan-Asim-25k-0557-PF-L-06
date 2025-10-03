#include <stdio.h>

int main(){
	int n,i;
	char table;
	do{
		printf("\n\nEnter a number: ");
		scanf("%d",&n);
		i = 1;
		while(i<=12){
			printf("\n%d x %d = %d",n,i,n*i);
			i++;
		}
		printf("\nDo you want to print another table?(y/n)\n");
		scanf(" %c",&table);
	}
	while(table == 'y');
}
