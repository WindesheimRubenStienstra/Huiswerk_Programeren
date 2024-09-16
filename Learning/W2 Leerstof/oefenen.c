#include <stdio.h>
#include <math.h>

void main()
{
#pragma region oef 1

	//int a = 5;
	//int b = 2;

	//int res = a / b;
	//int rest = a % b;

	//printf("The number is: %d, and the rest of the number is: %d", res, rest);

#pragma endregion

#pragma region Helegetallen
	
	//int a = 10; // Neemt 4 bytes geheugen: 32 bits.
	//short b = 20; // Neemt 2 bytes geheugen: 16 Bits
	//long c = 30; // Neemt 4 bytes geheugen: 32 Bits.
	//char d = 65; // Neemt 1 bytes geheugen: 8 bits.
	//long long e = 30; // Neemt 8 bytes geheugen: 64 Bits

	//printf("Een int gebruikt: %zu bytes\n", sizeof(a));
	//printf("Een short gebruikt: %zu bytes\n", sizeof(b));
	//printf("Een long gebruikt: %zu bytes\n", sizeof(c));
	//printf("Een char gebruikt: %zu bytes\n", sizeof(d));
	//
	//// "" = Dit moet je voor tekst gebruiken, '' = Dit moet je voor code gebruiken. 
	//char f = 'A';
	//printf("\n Het nummer van char: %d\n", f);
	//printf("Het letter van char: %c\n", f);

	//float x1 = 5; // Floats gebruiken 4 bytes
	//float x2 = 2;
	//float res = x1 / x2;

	//double d1 = 5; // Doubles gebruiken 8 bytes
	//double d2 = 2;
	//double dres = d1 / d2;

	//printf("Resultaat van de float deling: &f ", res);
	//printf("Resultaat van de double deling: &f ", dres);

	//unsigned int leeftijd = 4; // Getal kan nu nooit meer in de min.

#pragma endregion

#pragma region Wiskundige Functies

	//double getal = 3.14;
	//double sqrt_getal = sqrt(getal);
	//double sin_getal = sin(getal);

	//printf("De sinus van %.2f is: %.2f", getal, sin_getal);
	
	double x = 3;
	double y = 3;
	double totalKwadraat = 0;
	double pow(x, y);

	printf("Het %f kwadraat van %f = %f", x, y, totalKwadraat);
	

#pragma endregion

#pragma region Conversies

	//float getal = 123.786f;
	//int a = (int)getal; // casten naar een type (int)

	//printf("Het getal is: %f", getal);
	//
	////Geen warning, omdat je een getal toevoegt zonder komma 
	//int b = 212;
	//double bb = b;

#pragma endregion


}