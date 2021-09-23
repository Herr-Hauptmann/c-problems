#include <stdio.h>
#include <math.h>

#define EPSILON 0.0001

int main() {
	
double matrix [100][100];
double suma = 0;
double srednja_vrijednost;
int M,N;
int i, j;

for(i = 0; i < 100; i++) // PUNJENJE MATRICE SVIM I SVACIM, JER MOGU I ZELIM.
	{
		for (j = 0; j < 100; j++)
			{
			
			matrix[i][j] = 1;
			
			}
	}

//UNOS BROJA CLANOVA MATRICE
do {
	
	printf ("Unesite vrijednosti M i N: ");
	scanf ("%d %d", &M, &N);
	
	if (M < 1 || M > 100 || N < 1 || N > 100 )
		printf ("Vrijednosti su van opsega!\n");
}

while (M < 1 || M > 100 || N < 1 || N > 100 );

// UNOS CLANOVA MATRICE

printf ("Unesite clanove matrice: \n");

for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
			{
				scanf ("%lf", &matrix[i][j]);
				suma += matrix [i][j];
			}
	}

//RACUNANJE SREDNJE VRIJEDNOSTI MATRICE

srednja_vrijednost = suma / (double) (M*N);

// IZBACIVANJE REDOVA MATRICE

double red = 0;
double vrijednost_reda = 0;
int k;


for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
			{
		
				red += matrix [i][j];
				
			}	
		vrijednost_reda = red / N;
		
		if (vrijednost_reda > srednja_vrijednost && fabs(vrijednost_reda - srednja_vrijednost) > EPSILON)
			{
			
				for (k = i; k < M; k++)
					{	
						for(j = 0; j < N; j++)
							matrix [k][j] = matrix [k+1][j];
					}
				M--;
				i--;
			}
	red = 0;		
	}

// IZBACIVANJE KOLONA IZ MATRICE

double kolona = 0;
double vrijednost_kolone = 0;


for (i = 0; i < N; i++)
	{
		for(j = 0; j < M; j++)
			{
				kolona += matrix [j][i];
			}
			
		vrijednost_kolone = kolona / (double) M;
		
		if (vrijednost_kolone > srednja_vrijednost && fabs(vrijednost_kolone - srednja_vrijednost) > EPSILON  )
			{
			
				for (k = i; k < N; k++)
				{
					for (j = 0; j < M; j++)
						matrix [j][k] = matrix [j][k+1];
				}
				
				i--;
				N--;
			
			
			}
		
		kolona = 0;
	
	
	}



// PRINTANJE MATRICE

printf ("Nakon izbacivanja matrica glasi:\n");
for (i = 0; i < M; i++)
	{

	for (j = 0; j < N;j++)
		{
			printf ("%6.1lf", matrix [i][j]);
		}
	
	printf ("\n");	
	
	}	
return 0;
	
}
