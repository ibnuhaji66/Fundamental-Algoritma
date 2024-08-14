#include <stdio.h>

int main(){
	
	//SELECTION
	// 1. Switch case
	int angka = 3;
	switch(angka){
		case 0:
			printf("nol");
			break;
		case 1: //angka == 1
			printf("satu");
			break;
		case 5:
			printf("lima");
			break;
		default:
			printf("Selain nol satu dan lima");
	}
}

