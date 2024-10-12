#include <stdio.h>

int n;

int swapA = 123;
int swapB = 5;


double GemiddeldeGetalPakken(int a, int b, int c, int d)
{
	return (double)((a + b + c + d)/4);
}

int AantalKeer()
{
	++n;
	printf("Zo vaak is de functie AantalKeer aangeroepen: %d", n);
}

void Swap(int a, int b)
{
	swapB = a;
	swapA = b;
}

int CijferSwap(int a)
{

}

int Som37(int number) 
{
	int totalNumber = 0;
	for (int i = 0; i < number; i++)
	{
		printf("I = %d, Percent 3 = %d, Percent 7 = %d.\n", i, i % 3, i % 7);
		if (i % 3 == 0 || i % 7 == 0) 
		{
			totalNumber += i;
			printf("Added: %d.\n", i);
		}
	}
	printf("TotalNumber: %d.\n", totalNumber);
	return totalNumber;
}

int KleinsteSomDelerBad(int number)// Had de opdracht niet helemaal goed begrepen, maar ben er wel trots op  :)
{
	float crTimesNumber = 0;
	while (crTimesNumber <= 100000)
	{
		++crTimesNumber;
		float crNumber = crTimesNumber;
		for (int j = 1; j < number; j++)
		{
			crNumber = crNumber / j;

			if (crNumber >= 1)
			{
				printf("\nV: %f / %d = %f", crTimesNumber, j, crNumber);
			}
			else if (crNumber < 1)
			{
				printf("\nX: %f / %d = %f", crTimesNumber, j, crNumber);
			}
		}
		if (crNumber == 1)
		{
			return crTimesNumber;
		}
		else
		{
			printf("\nnumber: %f, did not work.", crTimesNumber);
		}
	}
}

int KleinsteSomDelerGood(int number)
{
	int crWhileNumber = 0;
	while (crWhileNumber <= 100000)
	{
		++crWhileNumber;

		int crNumber = crWhileNumber;
		int timesDidRight = 0;
		for (int j = 1; j <= number; j++)
		{
			if(crNumber % j == 0)
			{
				printf("\nV: %d Percent %d = %d", crNumber, j, (crNumber % j));
				++timesDidRight;
			}
			else
			{
				printf("\nX: %d Percent %d = %d", crNumber, j, (crNumber % j));
			}
		}
		if (timesDidRight == number)
		{
			return crWhileNumber;
		}
		else
		{
			printf("\nnumber: %d, did not work.", crWhileNumber);
		}
	}
}

int IsPriem(int priemGetal)
{
	int aantalKeerGedeeld = 0;
	for (int i = 1; i < priemGetal; i++)
	{
		printf("\n%d Percent %d == %d", priemGetal, i, priemGetal % i);
		if (priemGetal % i == 0)
		{
			++aantalKeerGedeeld;
		}
	}
	printf("\nHet getal: %d kan: %d keer gedeeld worden.", priemGetal, aantalKeerGedeeld);
	if(aantalKeerGedeeld <= 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int PriemSom(int aantalKeer)
{
	int totaalPriemGetal = 0;
	for (int i = 0; i <= aantalKeer; i++)
	{
		if (IsPriem(i) == 1)
		{
			totaalPriemGetal += i;
		}
	}
	return totaalPriemGetal;
}



void main()
{

#pragma region Opd 1

	double gemiddelde = 0.0;
	gemiddelde = GemiddeldeGetalPakken(1, 2, 3, 4);

	printf("%f", gemiddelde);
#pragma endregion

#pragma region Opd 2

	//AantalKeer();

#pragma endregion

#pragma region Opd 3

	/*Swap(swapA, swapB);
	printf("swapA turned into: %d, swapB turned into: %d", swapA, swapB);*/

#pragma endregion

#pragma region Opd 4 Ik heb geen idee hoe je getallen achterste voren moet laten maken



#pragma endregion

#pragma region Opd 5

	//Som37(10);

#pragma endregion

#pragma region Opd 6 Hoe kan ik de while loop verbeteren? Het werkt wel...

	/*int kleinsteGetalDeler = 0;
	kleinsteGetalDeler = KleinsteSomDelerGood(10);
	printf("\nDe kleinste getal is: %d", kleinsteGetalDeler);*/

#pragma endregion

#pragma region Opd 7

	/*int misschienPriemGetal = 90;

	if(IsPriem(misschienPriemGetal) == 1)
	{
		printf("\nHet getal %d is: zekers een priem getal.", misschienPriemGetal);
	}
	else
	{
		printf("\nHet getal %d is: helemaal geen priem getal.", misschienPriemGetal);
	}*/

#pragma endregion

#pragma region Opd 8

	/*int aantalKeerPriemenBerekenen = 5;
	int totaalPriemGetal = PriemSom(aantalKeerPriemenBerekenen);
	printf("\nTotaal PriemGetal: %d", totaalPriemGetal);*/

#pragma endregion

#pragma region Opd 9 Geen idee hoe de Fibonacci werkt



#pragma endregion
	
}