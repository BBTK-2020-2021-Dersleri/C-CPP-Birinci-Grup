#include<stdio.h>
#include<stdlib.h>

int main(){

	int degisken=-10; // %d
	int	degisken2;
	char karakter,karakter2; //%c
	float noktalý; // %f
	double uzunnoktalý; // %f

	degisken2 = 100; 

	karakter = 'a';

	noktalý = 101.1;
	
	uzunnoktalý = 1.154789;

	printf("birinci degisken: %d\n" ,degisken);

	printf("%c \n",karakter);
	printf("20 kasim 2020 %f \n", noktalý);

	printf("%f \n ", uzunnoktalý);

	system("PAUSE");
}