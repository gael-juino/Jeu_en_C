#include <stdio.h>
#include <stdlib.h>

int allumette = 20;
int choixJ;
int choixIA;
int tour = 100;

int main()
{

	if (allumette==20)
	{
		printf("| | | | | | | | | | | | | | | | | | | |\n");
	}
	if (allumette==19)
	{
		printf("| | | | | | | | | | | | | | | | | | | \n");
	}
	if (allumette==18)
	{
		printf("| | | | | | | | | | | | | | | | | | \n");
	}
	if (allumette==17)
	{
		printf("| | | | | | | | | | | | | | | | | \n");
	}
	if (allumette==16)
	{
		printf("| | | | | | | | | | | | | | | |\n");
	}
	if (allumette==15)
	{
		printf("| | | | | | | | | | | | | | |\n");
	}
	if (allumette==14)
	{
		printf("| | | | | | | | | | | | | |\n");
	}
	if (allumette==13)
	{
		printf("| | | | | | | | | | | | |\n");
	}
	if (allumette==12)
	{
		printf("| | | | | | | | | | | |\n");
	}
	if (allumette==11)
	{
		printf("| | | | | | | | | | |\n");
	}
	if (allumette==10)
	{
		printf("| | | | | | | | | |\n");
	}
	if (allumette==9)
	{
		printf("| | | | | | | | | \n");
	}
	if (allumette==8)
	{
		printf("| | | | | | | | \n");
	}
	if (allumette==7)
	{
		printf("| | | | | | | \n");
	}
	if (allumette==6)
	{
		printf("| | | | | |\n");
	}
	if (allumette==5)
	{
		printf("| | | | |\n");
	}
	if (allumette==4)
	{
		printf("| | | |\n");
	}
	if (allumette==3)
	{
		printf("| | |\n");
	}
	if (allumette==2)
	{
		printf("| |\n");
	}
	if (allumette==1)
	{
		printf("|\n");
	}
	if (allumette==0)
	{
		printf("Vous avez perdu\n");
	}


	return 0;
}