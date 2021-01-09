#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int sayac = 0;

	while (sayac < 10) {

		printf("a ");

		sayac++;
	}
	printf("\n");

	sayac = 0;
	int i = 5;
	while (sayac<10 && i<10) {

		printf("b ");
		
		sayac++;
		i++;
	}

	printf("\n");
	sayac = 30;
	while (1) {

		if (sayac == 10)
			break;
		else 
			printf("c ");

		sayac--;

	}

	while (0) {
		printf("0 ama girebildi");
	}
	
	printf("\n");
	for (int x = 0;x<=50;x++) {

		if(x%10==0)
		printf("d ");

	}
	int y;
	for (y = 0; y < -1; y++) {
		printf("Girmemesi gerek");
	}
	printf("\n");

	for (y = 0; y < 10; y++) {
		printf("%d ", y);
	}

	printf("\n");
	for (y = 100; y >= 0; y -= 10) {
		printf("%d ", y);
	}
	
	printf("\n");
	//A dan Z ye kadar alfabeyi yazdýr.

	for (char c = 'A'; c <= 'Z'; c++) {

		printf("%c ", c);

	}

	printf("\n");
	for (char c = 'a'; c <= 'z'; c=c+2) {

		printf("%c ", c);
	}

	return 0;
}