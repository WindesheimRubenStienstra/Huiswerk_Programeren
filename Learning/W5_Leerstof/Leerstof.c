#include <stdio.h>


void DoeIetsLeuks(int * a, int * b);
void Swap(int * a, int * b);
void Printarray(double * u,int length);

void drieDarray(int drieD[][8][8], int x, int y, int z)
{

}
void Initialiseerbord(char* bord[][8], int lengte)
{
	for (int rij = 0; rij < lengte; rij++)
	{
		for (int lijn = 0; lijn < lengte; lijn++)
		{

		}
	}
}

void main()
{
#pragma region arrays

	////C Tabel
	//int a[5];
	//double cijfers[10] = { 1.0, 7.0, 9.0, 3.0, 5.0};

	////vullen
	//a[0] = 2;
	//a[1] = 26;
	//a[2] = 112;
	//a[3] = 99;
	//a[4] = 36;

	////printf("Het %d A element is: %d \n",2 , a[2]);

	///*for (int i = 0; i < 5; i++)
	//{
	//	printf("Het %d A element is: %d \n", i, a[i]);
	//}*/
	//
	////Initialiseren van de tabel
	//for (int i = 0; i < 10; i++)
	//{
	//	//cijfers[i] = 0.0;
	//}

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("Het %d A element is: %f \n", i, cijfers[i]);
	//}

	//int arrayOne[6] = {0, 0, 1, 1, 2, 3};
	//int arrayTwo[6] = {0, 1, 1, 2, 2, 3};
	//for (size_t i = 0; i < 6; i++)
	//{
	//	if (arrayOne[i] == arrayTwo[i]) 
	//	{
	//		printf("The numbers are equal!\n");
	//	}
	//	else
	//	{
	//		printf("Numbers are not equal!\n");
	//	}
	//}
#pragma endregion

#pragma region Pointer


	//int a = 6;// Adres + 06 00 00 00. Int * adress. (int*) == Int pointer.

	////Hoe kan je het adres achterhalen.

	//int* adres;
	//adres = &a;
	//printf("De waarde van A is: %d\n", a);
	//printf("De waarde van A is: %x\n", adres); //566ff9c4

	////Als adres +1 gaat dan wordt het 566ff9c8 (+4). Als het een int is dan gaat er +4 bij op voor elke keer dat er 1 bij komt.

	////& == adres operator.

	//int b = 10;
	//int* p = &b;
	//printf("%x", *p);

#pragma endregion

	int a = 1;
	int b = 2;

	printf("Waarde van a is: %d \n", a);
	printf("Waarde van a is: %d \n", b);

	DoeIetsLeuks(&a, &b);
	Swap(&a, &b);

	printf("Waarde van a is: %d \n", a);
	printf("Waarde van a is: %d \n", b);

	double y[4] = { 10,11,12,13 };
	Printarray(y, 4);

	char* naam = "Jannie";// STRING. Het is een array met letters. 1=J, 2=A, 3=N, 4=N, 5=I, 6=E, 7=0.

	//strcat: strings samenvoegen
	//strcmp: vergelijk strings
	//strcpy: 
	//strlen: lengte van string

	int schaakbord[8][8];

	int kubus[3][3][3];
}

void DoeIetsLeuks(int * a, int * b)
{
	*a = *a + 300;
	*b = *b -200;

	printf("Waarde van a in fucntie is: %d \n", *a);
	printf("Waarde van a in fucntie is: %d \n", *b);

	//Call by reference werkt door in het adres zelf de value to veranderen in plaats van de aangemaakte variable te veranderen.

}
void Swap(int * a, int * b)
{
	int* temp = a;
	*a = *b;
	*b = *temp;
}
void Printarray(double * y, int length)// double * y slaat de adres op en op het adres staat een array, double
{
	for (int i = 0; i < length; i++)
	{
		printf("Element %f: \n", y[i]);
	}
}
