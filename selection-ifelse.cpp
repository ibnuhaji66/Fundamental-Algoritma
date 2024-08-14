#include <stdio.h>

int main(){
	
	//SELECTION
	// 1. If, else if,else
	int angka = 0;
	
		// Kalau angka 0 maka print "nol,Kalau angka ganjil print "ganjil"
		// Kalau angka genap print "genap"
		if (angka == 0){
			printf("nol");
		}
	
		else if(angka%2 == 1){
			printf("ganjil");
		}
		else{
			printf("genap");
		}
	
	return 0;
	
}

