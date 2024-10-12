#include <stdio.h>

int isSchrikkelJaar(int jaarGetal)
{
	if (jaarGetal % 100 == 0)
	{
		if (jaarGetal % 400 == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (jaarGetal % 4 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int schrikkelDagen(int beforeDay, int beforeMonth, int beforeYear, int afterDay, int afterMonth, int afterYear) 
{
	int schrikkeldagen = 0;

	if (beforeMonth <= 2)//Voor 1 maart tel wel jaar mee
	{
		
	}
	else//Na 1 maart tel jaar niet mee
	{
		++beforeYear;
	}
	if ((afterDay <= 28 && afterMonth == 2) || afterMonth == 1)//Voor 28 februari tel niet jaar mee. alle dagen voor 28 februari || Januari
	{
		--afterYear;
	}
	else//Na 28 februari tel wel jaar mee. 
	{

	}
	int yearsToCheck = afterYear - beforeYear;

	printf("Vergelijken tussen: %d en %d.\n", beforeYear, afterYear);
	for (int i = beforeYear; i <= afterYear; i++)
	{
		if (isSchrikkelJaar(i) == 1)
		{
			++schrikkeldagen;
		}
	}
	return schrikkeldagen;

}

void main()
{
	printf("%d\n", schrikkelDagen(1, 1, 2000, 1, 2, 2000)); // 0 
	printf("%d\n",schrikkelDagen(1, 1, 2000, 3, 3, 2020)); // 6 
	printf("%d\n", schrikkelDagen(1, 1, 2000, 28, 2, 2020)); // 5 (tel 2020 niet mee)
	printf("%d\n", schrikkelDagen(1, 3, 2000, 28, 2, 2020)); // 4(tel 2000 en 2020 niet mee)
	printf("%d\n", schrikkelDagen(1, 3, 2000, 29, 2, 2020)); // 5(tel 2000 niet mee)
	printf("%d\n", schrikkelDagen(1, 3, 2000, 30, 1, 2020)); // 4 
	printf("%d\n", schrikkelDagen(1, 3, 2000, 28, 1, 2020)); // 4
}