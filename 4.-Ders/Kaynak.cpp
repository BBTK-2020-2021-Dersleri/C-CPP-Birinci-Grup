#include <stdio.h>
#include <stdlib.h>

void main() {

	int x, y,z;

	printf("x deger giriniz: ");
	scanf_s("%d", &x);
	printf("y deger giriniz: ");
	scanf_s("%d", &y);

	z = x-1 ;
	printf("z degeri %d\n",z);
	printf("x degeri %d\n", x);
	z = x + y;
	printf("z degeri %d\n", z);

	if ((x + y) == z) {
		printf("x+y toplamý z ye esittir\n");
	}
	z = y+1;
	if ((x + y) == z)
		printf("x+y toplamý z ye esittir\n");
	
	else
		printf("x+y toplamý z ye esit degil\n");

	if (x == y)
		printf("x y ye esit\n");
	
	if (x == 5)
		printf("X 5 e esit\n");

	if (x != y) {
		printf("x y ye esit degildir\n");
	}

	int t = 100,k;

	k = t % 11;
	printf("k deger %d\n", k);

	x = 10;
	y = 10;
	z = 0;

	if (x == y && x == z)
		printf("x y ye ve z ye esit\n");
	else if (x == y)
		printf("x sadece y ye esittir \n");
	else if (x == z)
		printf("x sadece z ye esittir \n");
	else if (x != y && x != z)
		printf("x ne y ye ne de z ye esit\n");
	else
		printf("yanlýs karakter girisi\n");

	if (x == y && x == z && z == y) {
		printf("Hepsi birbirine esit\n");
	}

	if (x == y || x == z) {
		printf("x y ye esit veya z ye esit\n");
		if (x == y)
			printf("x y ye esit\n");
		else
			printf("x z ye esit \n");

	}



	system("PAUSE");
}