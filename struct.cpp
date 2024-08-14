#include<stdio.h>

struct rectangle{
	int length;
	int width;
};

struct person{
	char name[200];
	int age;
};

struct info{
	person pemilik;
	rectangle luasBangunan;
};

int main(){
	
	info infoBangunan = {{"Ibnu Haji", 17}, {20,10}};
	
	printf("%s berumur %d memiliki luas bangunan = %d\n",
			infoBangunan.pemilik.name, infoBangunan.pemilik.age,
			infoBangunan.luasBangunan.length*infoBangunan.luasBangunan.width);
	
//	rectangle kotak1 = {10};
//	person orang1 = {"Player 1", 20};
//	
//	printf("%d", orang1.name);
	
	return 0;
}

