#include <stdio.h>

int dagenInMaand[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};//Jan - Dec
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
	//printf("Vergelijken tussen: %d en %d.\n", beforeYear, afterYear);

	for (int i = beforeYear; i <= afterYear; i++)
	{
		if (isSchrikkelJaar(i) == 1)
		{
			++schrikkeldagen;
		}
	}
	return schrikkeldagen;
}

int DatumVerschilInDagen(int beforeDay, int beforeMonth, int beforeYear, int afterDay, int afterMonth, int afterYear)
{
	int crDagenVerschil = 0;
	for (int i = beforeYear; i < afterYear; i++)
	{
		crDagenVerschil += 365;
	}

	if (beforeMonth < afterMonth)
	{
		for (int i = beforeMonth; i > afterMonth || i < afterMonth; i++)//Telt naar aftermonth toe ++
		{
			crDagenVerschil += dagenInMaand[i];
		}
	}
	else if (beforeMonth > afterMonth)
	{
		int max12Months = 0;
		for (int max12Months = beforeMonth; max12Months > afterMonth || max12Months < afterMonth; max12Months--)//Telt naar Aftermonth toe --
		{
			crDagenVerschil -= dagenInMaand[max12Months];
			if (max12Months <= 0)
			{
				max12Months = 11;
			}
		}
	}
	else// beforeMonth == Aftermonth
	{
		//nothing
	}

	if (beforeDay > afterDay)
	{
		crDagenVerschil -= beforeDay - afterDay;
	}
	else if (beforeDay < afterDay)
	{
		crDagenVerschil += afterDay - beforeDay;
	}
	else
	{
		//Nothing
	}

	crDagenVerschil += schrikkelDagen(beforeDay, beforeMonth, beforeYear, afterDay, afterMonth, afterYear);
	return crDagenVerschil;
}

int eersteWeekDagMaand(int dag, int maand, int jaar)
{
	int dagInInt = 0;

	int dagenVerschil = DatumVerschilInDagen(1, 1, 2000, dag, maand, jaar);

	dagInInt = (5 + dagenVerschil) % 7;
	printf("%d = (5+ %d) Percent 7, ", dagInInt, dagenVerschil);

	switch (dagInInt)
	{
	case 0://Maandag
		
		break;
	case 1://Dinsdag

		break;
	case 2://Woesndag

		break;
	case 3://Donderdag

		break;
	case 4://Vrijdag

		break;
	case 5://Zaterdag

		break;
	case 6://Zondag

		break;
	default:
		printf("WARNING number is higher >6 or lower <0");
		break;
	}
	return dagInInt;
}
void vulMaandArray(int maand, int jaar, int* maandArray)
{
	int dagenVerschil = dagenInMaand[maand];
	dagenVerschil += isSchrikkelJaar(jaar);

	for (int i = 1; i <= dagenVerschil; i++)
	{
		maandArray[i] = i;
		printf("Voegt: %d toe aan, [%d].\n", maandArray[i], i - 1);
	}
	for (int i = dagenVerschil +1; i < 42; i++)//Print de rest  van de nullen uit
	{
		maandArray[i] = 0;
		printf("Voegt: %d toe aan, [%d].\n", maandArray[i], i - 1);
	}
}

void main()
{
	//Opdracht 10
	int maandArray[42] = { 0 };
	vulMaandArray(4,2001, maandArray);

	//Opdracht9
	printf("februari 2024, december 2024. Verschil in dagen: %d\n", DatumVerschilInDagen(1, 1, 2000, 1, 1, 2023));
	//printf("1 januari   2023: %d\n", eersteWeekDagMaand(1, 1, 2023));  // 6 (zondag) 
	//printf("1 maart     2016: %d\n", eersteWeekDagMaand(1, 3, 2016));  // 1 (dinsdag)
	//printf("1 december  2002: %d\n", eersteWeekDagMaand(1, 12, 2002)); // 6 (zondag)
	//printf("1 juli      2004: %d\n", eersteWeekDagMaand(1, 7, 2004));  // 3 (donderdag)
	//printf("1 augustus  2019: %d\n", eersteWeekDagMaand(1, 8, 2019));  // 3 (donderdag)
	//printf("1 september 2023: %d\n", eersteWeekDagMaand(1, 9, 2023));  // 4 (maandag) Hier krreeg ik telkens 1 te weinig uit maar ik heb geen idee waarom.

	////Opdracht8
	//printf("%d\n", schrikkelDagen(1, 1, 2000, 1, 2, 2000)); // 0 
	//printf("%d\n",schrikkelDagen(1, 1, 2000, 3, 3, 2020)); // 6 
	//printf("%d\n", schrikkelDagen(1, 1, 2000, 28, 2, 2020)); // 5 (tel 2020 niet mee)
	//printf("%d\n", schrikkelDagen(1, 3, 2000, 28, 2, 2020)); // 4(tel 2000 en 2020 niet mee)
	//printf("%d\n", schrikkelDagen(1, 3, 2000, 29, 2, 2020)); // 5(tel 2000 niet mee)
	//printf("%d\n", schrikkelDagen(1, 3, 2000, 30, 1, 2020)); // 4 
	//printf("%d\n", schrikkelDagen(1, 3, 2000, 28, 1, 2020)); // 4
}