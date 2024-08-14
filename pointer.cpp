#include<stdio.h>

int main(){
	
	//Pointer
	int a = 0;
	int *p;
	int **p2;
	p = &a;
	p2 = &p;
	
	printf("%d\n", *p2);
	printf("%d\n", &a);
	
		return 0;
}

