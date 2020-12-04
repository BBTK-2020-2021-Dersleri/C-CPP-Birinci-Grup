#include <stdio.h>
#include <stdlib.h>

void main() {

	int number=110;
	float noktalý;
	noktalý = 1.12;
	char karakter = 'k';
	double uzunnoktalý = 1.25689458;

	printf("integer degerim: %d \n", number);
	printf("float degerim: %f\n", noktalý);
	printf("karakter degerim: %c\n", karakter);
	printf("double degerim: %f\n", uzunnoktalý);

	int number2=1;
	char karakter2='h';

	printf("ilk deger: %d\n", number2);
	printf("degeri giriniz: ");
	scanf_s("%d", &number2);
	printf("degisken degeri: %d \n", number2);

	printf("ilk karakter deger: %c\n", karakter2);
	printf("degeri giriniz:");
	scanf_s("%c", &karakter2);
	printf("degisken degeri: %c \n", karakter2);

	int num2, num, num3,toplam=0;
	num = 10;
	printf("2.degeri siz giriniz: ");
	scanf_s("%d", &num2);

	num3 = 2;

	toplam = toplam + num;
	toplam = toplam + num2;
	
	printf("toplama sonuc: %d \n", toplam);

	num3 = toplam;
	num3 += num;
	printf("num3 degeri: %d \n", num3);

	num *= num2;
	printf("num1 degeri: %d\n", num);
	printf("num2 degeri: %d\n", num2);

	num2 = num2 - 25;
	printf("num2 degeri: %d\n", num2);
	
	float x = 10.01;
	float y,z,t;
	int a = 5,b=4;
	printf("float degerini gir: ");
	scanf_s("%f", &y);

	z = x - y;
	printf("z degeri: %f\n", z);
	z -= a;
	printf("z degeri: %f\n", z);

	t = (float)a / (float)b;
	a = a / b;
	
	printf("t degeri: %d\n", t);
	printf("a degeri: %d\n", a);

	system("PAUSE");
}