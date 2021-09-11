#include <stdio.h>
#include <stdbool.h> 

int main() {

int total_sarajevo = 0;
int total_mostar = 0;
int total_bihac = 0;

bool anja_sarajevo = 0;
bool anja_mostar = 0;
bool anja_bihac = 0;

bool elma_sarajevo = 0;
bool elma_mostar = 0;
bool elma_bihac = 0;

bool una_sarajevo = 0;
bool una_mostar = 0;
bool una_bihac = 0;
 
int temperatura_sarajevo;
int temperatura_mostar;
int temperatura_bihac;

char padavine_sarajevo;
char padavine_mostar;
char padavine_bihac;

printf ("Unesite prognozu za Sarajevo: \nTemperatura: ");
scanf ("%d", &temperatura_sarajevo);

for(;;)
{	
	printf ("Padavine (D/N): ");
	scanf (" %c", &padavine_sarajevo);
	if (padavine_sarajevo == 'd' || padavine_sarajevo == 'D' || padavine_sarajevo == 'n' || padavine_sarajevo == 'N')
		break;
	printf ("Pogresan unos.\n");
}

printf ("Unesite prognozu za Mostar: \nTemperatura: ");
scanf ("%d", &temperatura_mostar);

for(;;)
{	
	printf ("Padavine (D/N): ");
	scanf (" %c", &padavine_mostar);
	if (padavine_mostar == 'd' || padavine_mostar == 'D' || padavine_mostar == 'n' || padavine_mostar == 'N')
		break;
	printf ("Pogresan unos.\n");
}

printf ("Unesite prognozu za Bihac: \nTemperatura: ");
scanf ("%d", &temperatura_bihac);

for(;;)
{	
	printf ("Padavine (D/N): ");
	scanf (" %c", &padavine_bihac);
	if (padavine_bihac == 'd' || padavine_bihac == 'D' || padavine_bihac == 'n' || padavine_bihac == 'N')
		break;
	printf ("Pogresan unos.\n");
}

if ((padavine_sarajevo == 'N' || padavine_sarajevo == 'n') || ((padavine_sarajevo == 'D' || padavine_sarajevo == 'd') && temperatura_sarajevo <= 0))
	anja_sarajevo = true;
	
if ((padavine_mostar == 'N' || padavine_mostar == 'n') || ((padavine_mostar == 'D' || padavine_mostar == 'd') && temperatura_mostar <= 0))
	anja_mostar = true;

if ((padavine_bihac == 'N' || padavine_bihac == 'n') || ((padavine_bihac == 'D' || padavine_bihac == 'd') && temperatura_bihac <= 0))
	anja_bihac = true;

if (temperatura_sarajevo > -5 && temperatura_sarajevo < 30)
	elma_sarajevo = true;
	
if (temperatura_mostar > -5 && temperatura_mostar < 30)
	elma_mostar = true;

if (temperatura_bihac > -5 && temperatura_bihac < 30)
	elma_bihac = true;

if ((temperatura_sarajevo > 20 || temperatura_sarajevo < 5) && (padavine_sarajevo == 'n' || padavine_sarajevo == 'N'))
	una_sarajevo = true;
	
if ((temperatura_mostar > 20 || temperatura_mostar < 5) && (padavine_mostar == 'n' || padavine_mostar == 'N'))
	una_mostar = true;
	
if ((temperatura_bihac > 20 || temperatura_bihac < 5) && (padavine_bihac == 'n' || padavine_bihac == 'N'))
	una_bihac = true;

total_sarajevo = anja_sarajevo + elma_sarajevo + una_sarajevo;
total_mostar = anja_mostar + elma_mostar + una_mostar;
total_bihac = anja_bihac + elma_bihac + una_bihac;

if (total_sarajevo == 3)
	{
		printf ("Drugarice idu u Sarajevo.");
		return 0;
	}
	
if (total_mostar == 3)
	{
		printf ("Drugarice idu u Mostar.");
		return 0;
	}
	
if (total_bihac == 3)
	{
		printf ("Drugarice idu u Bihac.");
		return 0;
	}
	
if (total_bihac < 2 && total_sarajevo < 2 && total_mostar < 2)
	{
		printf ("Ne odgovara niti jedan grad.");
		return 0;
	}

if (total_sarajevo == 2)
	{
		if (anja_sarajevo == true && elma_sarajevo == true)
			printf ("Anja i Elma mogu u Sarajevo.");
		else if (anja_sarajevo == true && una_sarajevo == true)
			printf ("Anja i Una mogu u Sarajevo.");
		else
			printf ("Elma i Una mogu u Sarajevo.");
		return 0;
	}
	
if (total_mostar == 2)
	{
		if (anja_mostar == true && elma_mostar == true)
			printf ("Anja i Elma mogu u Mostar.");
		else if (anja_mostar == true && una_mostar == true)
			printf ("Anja i Una mogu u Mostar.");
		else
			printf ("Elma i Una mogu u Mostar.");
		return 0;
	}

if (total_bihac == 2)
	{
		if (anja_bihac == true && elma_bihac == true)
			printf ("Anja i Elma mogu u Bihac.");
		else if (anja_bihac == true && una_bihac == true)
			printf ("Anja i Una mogu u Bihac.");
		else
			printf ("Elma i Una mogu u Bihac.");
		return 0;
	}

}
