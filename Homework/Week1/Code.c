#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

void main()
{
#pragma region Opd 1

	/*int leeftijdInJaren;
	int leeftijdInMaanden;

	printf("Wat is jouw leeftijd?");

	int stat = scanf("%d", &leeftijdInJaren);
	leeftijdInMaanden = leeftijdInJaren * 12;

	printf("Jouw leeftijd is: %d in jaren en %d in maanden", leeftijdInJaren, leeftijdInMaanden);*/

#pragma endregion

#pragma region Opd 2&6

	//int a;
	//int b;
	//int c;
	//float gemmiddelde;
	//
	//printf("Voer 3 getallen in totaal in, na 1 getal kilk op enter.");
	//int stat = scanf("%d %d %d", &a, &b, &c);

	//gemmiddelde = (a + b + c) / 3;

	//printf("De 3 getallen zijn: %d, %d, %d. Het gemmidelde is: %.4f", a, b, c, gemmiddelde);

#pragma endregion

#pragma region Opd 3&4

	//int a = 0;
	//int b = 0;
	//int c = 0;
	//int grootstegetal = 0;

	//printf("Voer 3 getallen in totaal in, na 1 getal klik op enter.");

	//int stat = scanf("%d %d %d",&a,&b,&c);

	//if (a > b && a > c)
	//{
	//	grootstegetal = a;
	//}
	//else if (b > a && b > c)
	//{
	//	grootstegetal = b;
	//}
	//else if (c > a && c > b)
	//{
	//	grootstegetal = c;
	//}

	//printf("Het grootste getal is: %d.",grootstegetal);

#pragma endregion

#pragma region Opd 5

	/*int a = 0;
	int b = 0;
	

	printf("Voer 2 getallen in totaal in, na 1 getal klik op enter.");

	int stat = scanf("%d %d", &a, &b);

	if (a == b)
	{
		printf("Gelijk aan elkaar");
	}
	else
	{
		printf("Niet gelijk aan elkaar");
	}*/

#pragma endregion

#pragma region Opd 7

	/*float radiuscirkel;
	float omtrekcirkel;
    float oppervlaktecirkel;


	printf("Voer 1 getal in totaal in, na 1 getal klik op enter.");

	int stat = scanf("%f", &radiuscirkel);

	oppervlaktecirkel = (radiuscirkel * radiuscirkel) * M_PI;
	omtrekcirkel = M_PI * radiuscirkel;

	printf("De radius = %f,de oppervlakte van de cirkel = %f en de omtrek = %f",radiuscirkel ,oppervlaktecirkel, omtrekcirkel);*/

#pragma endregion

#pragma region Opd 8

	/*float zonderbtw;
	float metbtw;

	printf("Voer 1 getal in totaal in, na 1 getal klik op enter.");

	int stat = scanf("%f", &zonderbtw);

	metbtw = zonderbtw * 1.21;

	printf("Prijs met btw = %f", metbtw);*/

#pragma endregion

#pragma region Opd 9

	/*float kmperuur;
	float meterperseconde;

	printf("Voer 2 getallen in totaal in, na 1 getal klik op enter.");

	int stat = scanf("%f", &kmperuur);

	meterperseconde = kmperuur * 3.6;

	printf("het gaat = %.1f meters per seconde", meterperseconde);*/

#pragma endregion

#pragma region Opd 10

	/*float u;
	float i;
	float r;

	printf("Voer 2 getallen in totaal in, na 1 getal klik op enter.");

	int stat = scanf("%f %f", &i, &r);

	u = i * r;

	printf("De uitkomst van %.2f * %.2f = %.4f",i ,r ,u);*/

#pragma endregion

#pragma region Opd 11

	//float begingetal;
	//float deelgetal;
	//float uitkomst;
	//int heelgetal = 0;
	//int restgetal = 0;

	//printf("Voer 2 getallen in totaal in, na 1 getal klik op enter.");

	//int stat = scanf("%f %f", &begingetal, &deelgetal);

	//uitkomst = begingetal;
	//while (uitkomst >= deelgetal)
	//{
	//	uitkomst = uitkomst - deelgetal;
	//	++heelgetal;
	//}
	//restgetal = (int)uitkomst;

	//printf("De uitkomst van %.2f / %.2f is het heel getal = %d en het rest getal = %d.", begingetal, deelgetal, heelgetal, restgetal);

#pragma endregion

#pragma region Opd 12

	/*int invulseconden;

	int urenover = 0;
	int minutenover = 0;
	int secondenover = 0;

	printf("Voer 1 getal in totaal in, na 1 getal klik op enter.");

	int stat = scanf("%d", &invulseconden);
	for (size_t i = 0; 3600 < invulseconden; i++)
	{
		invulseconden = invulseconden - 3600;
		++urenover;
	}
	for (size_t i = 0; 60 <= invulseconden; i++)
	{
		invulseconden = invulseconden - 60;
		++minutenover;
	}
	secondenover = (int)invulseconden;

	printf("Wat er over blijft is: %d uur, %d minuten en %d seconden", urenover, minutenover, secondenover);*/

#pragma endregion

#pragma region Opd 13

	/*float voorkwadraat = 0;
	float nakwadraat = 0;

	printf("Voer 1 getal in totaal in, na 1 getal klik op enter.");

	int stat = scanf("%f", &voorkwadraat);

	nakwadraat = voorkwadraat * voorkwadraat;

	printf("De kwadraat van %2.f = %4.f",voorkwadraat, nakwadraat);*/

#pragma endregion

#pragma region Opd 14

	/*float voorkwadraat = 1;
	float crnakwadraat;
	int hoevaakkwadreren = 1;

	float resultaatkwadraat;

	printf("Voer 2 getallen in totaal in, na 1 getal klik op enter.");

	int stat = scanf("%f %d", &voorkwadraat, &hoevaakkwadreren);

	crnakwadraat = voorkwadraat;
	for (size_t i = 0; i < hoevaakkwadreren; i++)
	{
		crnakwadraat = crnakwadraat * voorkwadraat;
	}
	resultaatkwadraat = crnakwadraat;
	

	printf("De %d kwadraten van %2.f = %4.f", hoevaakkwadreren, voorkwadraat, resultaatkwadraat);*/

#pragma endregion
}