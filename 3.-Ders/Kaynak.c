#include <stdio.h>
#include <stdlib.h>

void main() {

	int x;
	int y = 10;

	printf("x degerini giriniz: ");
	scanf_s("%d", &x);
	printf("\n");

	printf("x degeri= %d , y degeri= %d \n", x, y);

	if (x == y) {

		printf("x y ye esittir. \n");

	}
	else
	{
		printf("x y ye esit degil\n");
	}

	if (x != 10) {
		printf("x 10 degil \n");
	}

	if (x == 10) {
		printf("x 10 \n");
	}

	if (x < y) {
		printf("x y den kucuktur \n");
	}

	if (x > y) {
		printf("y x ten kucuktur \n");
	}

	if (y >= x) {
		printf("x y den kucuk veya esit \n");
	}

	else {
		printf("x y den buyuk\n");
	}


	if (y <= x) {
		printf("y x ten kucuktur veya esit \n");
	}


	if (x == 10) {
		printf("Evet 10 \n");
	}
	else if (x == 11) {
		printf("Evet 11 \n");
	}
	else if (x == 12) {
		printf("Evet 12 \n");
	}
	else if (x == 11) {
		printf("Evet 11 \n");
	}
	else
	{
		printf("10 11 12 degil x in degeri %d \n" ,x);
	}

	if (x % y == 0) {
		printf("%d %d a tam bolunur. \n" ,x,y);
	}
	else {
		printf("tam bolunmez \n");
	}

	system("pause");
}