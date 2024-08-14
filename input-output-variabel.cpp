#include<stdio.h>

int main() {
	
	int angkabulat = 17;
	float angkakoma = 1.5f ;
	char karakter = 'a';
	char string[100] = "Hello";
	
	
	
	scanf("%d", &angkabulat);
	printf("%d\n", angkabulat);
	
	
	
	scanf("%.2f\n", &angkakoma);
	printf("%.2f\n", angkakoma);
	
	
	
	scanf("%c\n", &karakter);
	printf("%c\n", karakter);
	
	
	
	scanf("%s\n", &string);
	printf("%s\n", string);
	
	
	
	return 0;
}

