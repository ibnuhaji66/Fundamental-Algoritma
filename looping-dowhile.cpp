#include<stdio.h>

int main(){
	//Looping
	//do while
	
	printf("While:\n");
	int j = 11;
	while(j <= 10){
		printf("%d\n", j++);
		
	}
	
	printf("Do While:\n");
	int k = 11;
	do{
		printf("%d\n", k++);
		
	}while(k <= 10);
	
	return 0;
}

