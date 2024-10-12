//#include <stdio.h>
//
//int a[10] = { 4,22,1,22,3,5,73,12,33,1 };
//int b[10] = { 6,47,7,25,88,51,4,55,75,12 };
//int c[10] = { 11,32,49,67,8,96,57,94,7,3 };
//int d[10] = { 22,90,3,26,58,34,34,2,19,14 };
//int e[10] = { 0 };
//
//void sorteer(int* arr, int length)
//{
//	for (int i = 0; i < length; i++)//Checking for duplicates then turning them into zero
//	{
//		if (duplicatecheck(arr, 10, arr[i]) == 1)
//		{
//			arr[i] = 0;
//		}
//	}
//
//	int crArray[10] = { 0 };
//	for (int i = 0; i < length; i++)
//	{
//		int crSpot = 0;
//		for (int j = 0; j < length; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				++crSpot;
//			}
//		}
//		crArray[crSpot] = arr[i];
//		printf("Putting: %d, in spot: %d.\n", arr[i], crSpot);
//	}
//
//	printf("\nAFTER:\n");
//	for (int i = 0; i < length; i++)
//	{
//		printf("Putting: %d, in spot: %d.\n", crArray[i], i);
//	}
//}
//
//int duplicatecheck(int* arr, int length, int getal)
//{
//	int hasduplicated = 0;
//	for (int i = 0; i < length; i++)
//	{
//		if (arr[i] == getal)
//		{
//			hasduplicated++;
//		}
//		if (hasduplicated >= 2)//Will always find itself 1x.
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//void main()
//{
//	sorteer(a, 10);
//}