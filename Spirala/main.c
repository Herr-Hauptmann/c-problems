#include <stdio.h>

int main() {

int N = 8;
int i, j, k;

char c = '*'; 

char matrica[1000][1000];

for(;;) // UNOS BROJA N I PROVJERA ZADOVOLJAVANJA ZADANOG USLOVA
	{

		printf ("Unesite broj N: ");
		scanf ("%d", &N);

		if( (N-1) % 4 == 0 && N > 0)
			break;
		else
			printf ("N nije ispravno!\n");
	
	}

int red = N;
int kolona = N;
printf ("\n");

for(i = 0; i < N; i++) // PUNJENJE MATRICE PRAZNIM MJESTIMA
	{
		for (j = 0; j < N; j++)
			{
			
			matrica[i][j] = ' ';
			
			}
	}

for (k = 0; k < N; k++) // ADEKVATNO ISPUNJAVANJE MATRICE
	{
		if (k%2 == 0) // PROVJERAVA U KOM KVADRATU ISPUNJAVAM
			c = '*';
		else 
			c = ' ';
			
			
		j = k;
		
		while (j < kolona - k) // PRVI RED
		{
			matrica[k][j] = c;
			j++;
		}
		
		i = k+1;
		
		while (i < red - k) // DESNA KOLONA
		{
			matrica[i][red - 1 - k] = c;
			i++;
		}
		
		j = kolona - k - 2;
		
		while (j >= k) // ZADNJI RED
		{
			matrica [kolona - k ][j] = c;
			j--;
		}
		
		while (i > k) // LIJEVA KOLONA
		{/*
			if ((i == k+1) && c == '*')
				c = ' ';
			else if ((i == k+1) && c == ' ')
				c = '*';*/
			matrica [i][k] = c;
			i --;
		}
		
	}
	
for (i = 0; i <= (N-1)/2; i++)
	{
		if (matrica[i+1][i] == ' ')
			matrica [i+1][i] = '*';
		else if (matrica[i+1][i] == '*')
			matrica [i+1][i] = ' ';
	}


for(i = 0; i <= N; i++) // PRINTANJE MATRICE
	{
		if (N-i == (N/2) - 1)
			continue;
			
		for (j = 0; j < N; j++)
			{
			
			printf ("%c", matrica[i][j]);
			
			}
			printf ("\n");
	}


return 0;



}
