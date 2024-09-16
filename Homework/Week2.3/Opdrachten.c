#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void main()
{
#pragma region Opd 1 //Werkt alleen niet wanneer het getal zo hoog gaat dat het in de min gaat

	//int numberone;
	//int numbertwo;
	//int numberresult;

	//printf("Give the 2 numbers to multiply");
	//int result = scanf("%d %d", &numberone, &numbertwo);

	//numberresult = numberone * numbertwo;
	//
	//if (numberresult >= 214783647)
	//{
	//	printf("The crResult: %d. Overflow.", numberresult);
	//}
	//else
	//{
	//	printf("The crResult: %d. Good.", numberresult);
	//}

#pragma endregion

#pragma region Opd 2 Heb boek nodig

#pragma endregion

#pragma region Opd 3

	/*int totalprints = 100;

	for (int i = 0; i <= totalprints; i++)
	{
		printf("Dit is de: %d print\n", i);
	}*/

#pragma endregion

#pragma region Opd 4 + extra

	/*char characterinput;
	int numberofcharacter;

	int scanitem = scanf("%c", &characterinput);

	numberofcharacter = (int)characterinput;

	printf("Van de letter: %c, is de index van het karakter: %d", characterinput, numberofcharacter);*/

	//char inputtext[100];// Het nummer geeft aan hoeveel characters hij vast kan houden

	//printf("Give your text: ");

	//int scanitem = scanf("%[^\n]", &inputtext);

	//printf("This is what you wrote right?: %s", inputtext);

#pragma endregion

#pragma region Opd 5 + extra ik weet niet hoe je op de juiste en nette manier die +1 +2 +3 in 1 printf kan doen.

	//int number = 1;//Hoe vaakt de loop gebeurt

	//int crNumber = 0;
	//char amountTimesText[1000] = "h";
	//char craddamounttext[20] = "a";

	//int scannumber = scanf("%d", &number);

	//printf("N = %d -> ", number);
	//for (size_t i = 0; i <= number; i++)
	//{
	//	crNumber = crNumber + i;
	//	printf("+%d ", i);
	//	
	//	strncat_s(amountTimesText, 1000, craddamounttext, 100);
	//}
	//printf("= %d", crNumber);

	//printf("\n The whole text: %s \n The added text: %s \n Current number: %d", amountTimesText, craddamounttext, crNumber);

	//Ik wou alles in 1 printf doen maar dat lukte niet.
	//sprintf_s(craddamounttext, 1000, "%d", crNumber);
	//strncat_s(craddamounttext, 1000, 1, 100);

#pragma endregion

#pragma region Opd 6

	/*int crNumber = 0;
	int speedUp = 100;

	while (crNumber <= 214783647)
	{
		crNumber = crNumber +1 * speedUp;
		printf("%d", crNumber);
	}
	if (crNumber >= 214783647)
	{
		printf("The crResult: %d. Overflow.", crNumber);
	}*/

#pragma endregion

#pragma region Opd 7

	/*int a;
	int b;
	float testNumber;
	float testNumberRounded;

	int scanNumber = scanf("%d %d", &a, &b);

	testNumber = (float)a / (float)b;
	testNumberRounded = testNumber;
	testNumberRounded = roundf(testNumberRounded);

	if (testNumber == testNumberRounded)
	{
		printf("Getal is deelbaar: %d / %d = %f", a, b, testNumber);
	}
	else
	{
		printf("Getal is niet deelbaar: %d / %d = %f", a, b, testNumber);
	}*/

#pragma endregion

#pragma region Opd 8 Hoe kan je weten of een letter een klinker of een medeklinker is?

	/*char inputLetter;

	scanf("%c", inputLetter);*/



#pragma endregion

#pragma region Opd 9

	//int Years = 1;
	//char inputText[100];

	//float totalCosts = 0;

	//printf("Wilt u uw dal of piek weten?");

	//int scanNumber = scanf("%s", &inputText);
	////int lowerNumber = tolower(inputText);

	//if (inputText == "dal")
	//{
	//	totalCosts = (80 + (24 * 365 * 0.40)) * Years;
	//}
	//else if (inputText == "piek")
	//{
	//	totalCosts = (80 + (24 * 365 * 0.46)) * Years;
	//}
	//printf("Total costs: %f. Inputted text: %s", totalCosts, inputText);

#pragma endregion

#pragma region Opd 10 & 11

	/*int wortelinput;
	double worteloutput;
	int worteloutputint;

	printf("Schrijf de wortel op: ");

	int scanNumber = scanf("%d", &wortelinput);

	worteloutput = sqrt(wortelinput);

	worteloutputint = round(worteloutput);

	printf("De wortel van: %d = %f. Afgerond: %d", wortelinput, worteloutput, worteloutputint);*/

#pragma endregion

#pragma region Opd 12

	/*int x;
	int n;
	int crX;
	float totalnumber;

	printf("Voer het getal en kwadraat in:");

	int scanNumber = scanf("%d %d", &x, &n);

	crX = x;

	for (size_t i = 0; i < n; i++)
	{
		crX = (crX * x);
	}
	totalnumber = crX;


	printf("het getal: %d en het kwadraat van: %d. Krijg je: %f", x, n, totalnumber);*/

#pragma endregion

#pragma region Opd 13 + weet niet hoe ik het laatste getal kan krijgen van een getal die hoger is dan 10.

//int numberOne;
//int numberTwo;
//int crX;
//float totalnumber;
//
//printf("Voer de 2 getallen in:");
//
//int scanNumber = scanf("%d %d", &numberOne, &numberTwo);
//
//
//
//
//printf("het getal: %d", numberOne);

#pragma endregion

#pragma region Opd 14

	/*int a;
	int b;
	int c;
	
	double resultPositive;
	double resultNegative;

	printf("Voer de 3 getallen in:");

	int scanNumber = scanf("%d %d %d", &a, &b, &c);

	double crSqrt = (b * b) - 4 * a * c;

	if (crSqrt < 0)
	{
		printf("de oplossing is imaginaire.");
	}
	else
	{
		crSqrt = sqrt(crSqrt);
		resultPositive = b + crSqrt;
		resultNegative = b - crSqrt;

		printf("Via de positieve formule krijg je: %f. En via de negatieve formule krijg je: %f", resultPositive, resultNegative);
	}*/
	

	#pragma endregion

#pragma region Opd 15

	int n;//aantal keer
	int resultNumber = 0;

	printf("Voer de 3 getallen in:");

	int scanNumber = scanf("%d", &n);

	//printf("1");
	for (size_t i = 0; i < n; i++)
	{
		resultNumber = resultNumber * 10 + i;
		printf("\n%d", resultNumber);
	}

	//printf("Via de positieve formule krijg je: %f. En via de negatieve formule krijg je: %f", resultNumber);


#pragma endregion

#pragma region Opd 16 Ik heb geen idee wat een binaire reeks is.

	

#pragma endregion
}