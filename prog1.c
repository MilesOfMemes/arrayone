#include <stdio.h>

#define SIZE 5

int main(){
	int array[SIZE];
	int index; //note nothing is placed here in C vs Java, which would put zero

	for(index=0;index<SIZE;index++){
		scanf("%d",&array[index]);
	}
	
	for(index=0;index<SIZE;index++){
		printf("%d ",array[index]);
	}
	printf("\n");

}
