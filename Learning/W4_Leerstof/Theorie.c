#include <stdio.h>
#include <stdbool.h>
#include <math.h>

//prototypes!
double Discriminant(double a, double b, double c);
void print();
int telop(int a, int b);
bool GroterDan5(int a);
double Wortel(double getal);
int recursie();

int overalBekend;

void main()
{
	/*printf("Dit is de main functie");
	print();*/

	int resultaat = telop(2, 3);
	printf("\nNa dat hij alles optelt komt er: %d, uit.", resultaat);

	int waarde = GroterDan5(4);
	printf("\nDe waarde: %d", waarde);

	double discriminant = Discriminant(12, 3, -1);
	printf("\nDe discriminant = %f", discriminant);

	int getal = 169;
	double wortel = Wortel(getal);
	printf("\nDe wortel van: %d is: %f.", getal, wortel);

	static int maandag = 100;// Het getal blijft altijd hetzelfde.
	recursie();
}

void print()
{
	printf("\nik print iets op het scherm");
}

int telop(int a, int b)
{
	return a + b;
}

bool GroterDan5(int a)
{
	if (a > 5)
	{
		return true;
	}
	else
	{
		return false;
	}
}

double Discriminant(double a, double b, double c)
{
	double discriminant = (b * b - 4 * a * c) / 2;
	if (discriminant < 0)
	{
		return -1.0;
	}
	else
	{
		return discriminant;
	}
}

double Wortel(double getal)
{
	return sqrt(getal);
}

int recursie()
{
	++overalBekend;
	printf("Groter en groter: %d\n", overalBekend);
	recursie();
}
