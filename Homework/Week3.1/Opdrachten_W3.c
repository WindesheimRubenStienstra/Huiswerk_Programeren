#include <stdio.h>

void main()
{
#pragma region Opd 1

	/*int a;

	printf("Put in a number");
	int scanNumber = scanf("%d", &a);

	if (a > 0)
	{
		printf("groter dan 0");
	}
	else
	{
		printf("kleiner of gelijk aan 0");
	}*/

#pragma endregion

#pragma region Opd 2

	/*int a;

	int scanNumber = scanf("%d", &a);
	if(a > 100)
	{
		printf("Total number: %d", a);
	}
	else
	{
		a = a * -2;
		printf("%d", a);
	}*/

#pragma endregion

#pragma region Opd 5

	//int a = 0;

	//for (size_t i = 0; i <= 10; i++)
	//{
	//	printf("\nI am counting: %d", a);
	//	++a;
	//}

#pragma endregion

#pragma region Opd 6

	//int moduleOfI;
	//
	//for (size_t i = 0; i <= 200; i++)
	//{
	//	moduleOfI = (int)i % 2;
	//	printf("\nVan het getal: %d is: %d de module,", (int)i, moduleOfI);

	//	if (moduleOfI == 0)
	//	{
	//		printf(" Dus is het getal even.");
	//	}
	//	else // ModuleOfI == 1
	//	{
	//		printf(" Dus is het getal oneven.");
	//	}
	//}

#pragma endregion

#pragma region Opd 7

	//float firstNumber;
	//float secondNumber;
	//float thirdNumber;
	//float fourthNumber;
	//float fifthNumber;
	//float sixthNumber;

	//float totalNumber;

	//printf("Fill in 6 numbers:\n"); 

	//int scanNumber = scanf("%f %f %f %f %f %f", &firstNumber, &secondNumber, &thirdNumber, &fourthNumber, &fifthNumber, &sixthNumber);

	//totalNumber = (firstNumber + secondNumber + thirdNumber + fourthNumber + fifthNumber + sixthNumber) / 6;

	//printf("Het gemiddelde is: %f.", totalNumber);

	//if (totalNumber < 5.5f) 
	//{
	//	printf(" Onvoldoende");

	//}
	//else // hoger of gelijk dan 5,5
	//{
	//	printf(" Voldoende");
	//}


#pragma endregion

#pragma region Opd 8

	//int spaarRekening = 1000;
	//float rente = 2;
	//int jaren = 15;

	//float crSpaarRekening = (float)spaarRekening;

	//for (size_t i = 0; i < jaren; i++)
	//{
	//	printf("\n er staat nu in het jaar %d: %f op de spaar rekening.",(int)i, crSpaarRekening);

	//	crSpaarRekening = crSpaarRekening + (crSpaarRekening / 100 * rente);

	//}

	//printf("\n Na %d jaar staat er nu in totaal: %f op de spaar rekening.",jaren, crSpaarRekening);

#pragma endregion

#pragma region Opd 9 Ik heb geen idee wat voor formule ik moet opstellen.

	//Formule: Index, -2 Index, -1 Fibonacci.
	//int targetNumber = 1;
	//int crFibonacciNumber = 0;

	//int twoDelayNumber = 0;

	//printf("Give the target FiconacciNumber: ");

	//int scanNumber = scanf("%d", &targetNumber);

	//int a = 0;
	//for (int i = 0; i < targetNumber; i++)
	//{
	//	if(a >= 3)
	//	{
	//		twoDelayNumber = a - 2;
	//	}

	//	crFibonacciNumber = a / twoDelayNumber + crFibonacciNumber;

	//	printf("The crfibonacciNumber: %d", crFibonacciNumber);
	//	a++;
	//}

#pragma endregion

#pragma region Opd 10

#pragma region Test

//printf("Give 2 numbers:\n");

//int scanNumber = scanf("%d %d", &inputNumber, &modulo);

//moduloAnswer = inputNumber % modulo;

//printf("inputNumber: %d, modulo %d = %d", inputNumber, modulo, moduloAnswer);

#pragma endregion

	////priemgetallen
	//int inputNumber = 0;
	//int modulo = 0;
	//int moduloAnswer = 0;
	//int deelbaarheidAantal = 0;

	//printf("geef het geval wat jij denkt wat een priem getal zou kunnen zijn.\n");

	//int scanNumber = scanf("%d", &inputNumber);

	//int a = 0;
	//for (size_t i = 1; i <= inputNumber; i++) //begint bij 1 omdat alles is deelbaar tot 0
	//{
	//	++a;
	//	int crmoduloAnswer = inputNumber % a;
	//	if (crmoduloAnswer == 0)
	//	{
	//		++deelbaarheidAantal;
	//	}
	//	printf("\ncrModuloAnswer: %d = from: %d modulo %d", crmoduloAnswer, inputNumber, a);
	//}

	//if(deelbaarheidAantal == 2)
	//{
	//	printf("\n\nHet getal is een priem getal");
	//}
	//else 
	//{
	//	printf("\n\nHet getal is geen priem getal");
	//}


#pragma endregion

#pragma region Opd 11

	//int jaarGetal;
	//int crJaarGetal;

	//printf("Geef het jaar getal op:\n");

	//int scanNumber = scanf("%d", &jaarGetal);

	//crJaarGetal = jaarGetal;


	//printf("\nHet jaar getal: %d. Zou er uit zien als: ", jaarGetal);
	//for (size_t i = 0; 0 <= crJaarGetal; i++)
	//{
	//	if (crJaarGetal >= 1000)
	//	{
	//		printf("M");
	//		crJaarGetal = crJaarGetal - 1000;
	//	}
	//	else if (crJaarGetal >= 900)
	//	{
	//		printf("CM");
	//		crJaarGetal = crJaarGetal - 900;
	//	}
	//	else if (crJaarGetal >= 500)
	//	{
	//		printf("D");
	//		crJaarGetal = crJaarGetal - 500;
	//	}
	//	else if (crJaarGetal >= 400)
	//	{
	//		printf("CD");
	//		crJaarGetal = crJaarGetal - 400;
	//	}


	//	else if (crJaarGetal >= 100)
	//	{
	//		printf("C");
	//		crJaarGetal = crJaarGetal - 100;
	//	}
	//	else if (crJaarGetal >= 90)
	//	{
	//		printf("XC");
	//		crJaarGetal = crJaarGetal - 90;
	//	}
	//	else if (crJaarGetal >= 80)
	//	{
	//		printf("LXXX");
	//		crJaarGetal = crJaarGetal - 80;
	//	}
	//	else if (crJaarGetal >= 70)
	//	{
	//		printf("LXX");
	//		crJaarGetal = crJaarGetal - 70;
	//	}
	//	else if (crJaarGetal >= 60)
	//	{
	//		printf("LX");
	//		crJaarGetal = crJaarGetal - 60;
	//	}
	//	else if (crJaarGetal >= 50)
	//	{
	//		printf("L");
	//		crJaarGetal = crJaarGetal - 50;
	//	}
	//	else if (crJaarGetal >= 40)
	//	{
	//		printf("XL");
	//		crJaarGetal = crJaarGetal - 40;
	//	}
	//	else if (crJaarGetal >= 10)
	//	{
	//		printf("X");
	//		crJaarGetal = crJaarGetal - 10;
	//	}


	//	else if (crJaarGetal >= 9)
	//	{
	//		printf("XI");
	//		crJaarGetal = crJaarGetal - 9;
	//	}
	//	else if (crJaarGetal >= 8)
	//	{
	//		printf("VIII");
	//		crJaarGetal = crJaarGetal - 8;
	//	}
	//	else if (crJaarGetal >= 7)
	//	{
	//		printf("VII");
	//		crJaarGetal = crJaarGetal - 7;
	//	}
	//	else if (crJaarGetal >= 6)
	//	{
	//		printf("VI");
	//		crJaarGetal = crJaarGetal - 6;
	//	}
	//	else if (crJaarGetal >= 5)
	//	{
	//		printf("V");
	//		crJaarGetal = crJaarGetal - 5;
	//	}
	//	else if (crJaarGetal >= 4)
	//	{
	//		printf("IV");
	//		crJaarGetal = crJaarGetal - 4;
	//	}
	//	else if (crJaarGetal >= 1)
	//	{
	//		printf("I");
	//		--crJaarGetal;
	//	}
	//	else
	//	{
	//		printf("\nDone");
	//		return;
	//	}
	//}


#pragma endregion

#pragma region Opd 12 Geen idee wat een faculteit is en snap de formule niet echt.

 ////(N!) == Faculteit: (N = 4) = 4 * 3 * 2 * 1.(N = 1) = 1 * 1. (N = 0) = 1. 

	int faculteit = 0;
	int resultaatA = 1;

	printf("Geef de faculteit: ");

	int scanNumber = scanf("%d", &faculteit);

	for (int i = 1; i < faculteit; i++)
	{
		resultaatA += resultaatA * i;

		printf("\n CrResultaat: %d = Faculteit: %d * %d", resultaatA, resultaatA / i, i);
	}

	int resultaatEuler = 1;

	for (int i = 1; i < faculteit; i++)
	{
		int resultaatA = 1;
		for (int i = 1; i < faculteit; i++)
		{
			resultaatA += resultaatA * i;

			printf("\n CrResultaat: %d = Faculteit: %d * %d", resultaatA, resultaatA / i, i);
		}
		resultaatEuler += resultaatEuler / resultaatA;
			
	}



#pragma endregion

#pragma region Opd 13

	//int cijfer;

	//printf("Voer een cijfer van 1 tot 10 in:\n");

	//int scanNumber = scanf("%d", &cijfer);

	//printf("Vanwege het cijfer: %d, krijg je een: ", cijfer);
	//switch (cijfer)
	//{
	//case 1:
	//	printf("Zwaar onvoldoende.");
	//	break;
	//case 2:
	//	printf("Onvoldoende.");
	//	break;
	//case 3:
	//	printf("Zeer matig.");
	//	break;
	//case 4:
	//	printf("Matig.");
	//	break;
	//case 5:
	//	printf("Bijna voldoende.");
	//	break;
	//case 6:
	//	printf("Voldoende.");
	//	break;
	//case 7:
	//	printf("Redelijk goed.");
	//	break;
	//case 8:
	//	printf("Goed.");
	//	break;
	//case 9:
	//	printf("Zeer goed.");
	//	break;
	//case 10:
	//	printf("Uitmuntend.");
	//	break;
	//default:
	//	printf("Geen geldig cijfer.");
	//	break;
	//}
#pragma endregion


}