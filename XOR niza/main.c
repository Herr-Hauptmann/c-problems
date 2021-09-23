#include <stdio.h>



int main() {

int N;
int niz[100];
int pomocni_niz [100];
int i,j;

// UNOS BROJA N
printf ("Unesite N: ");
scanf ("%d", &N);

// PUNJENJE NIZA
for(i = 0; i < N; i++)
	{
	    scanf("%d", &niz[i]);
    }

for (i = 0; i < 1000; i++ )
    {
        // PUNJENJE DRUGOG NIZA VRIJEDNOSTIMA NAKON IZVRSAVANJA XOR OPERACIJE
        
        for (j = 0; j < N; j++)
            pomocni_niz[j] = niz[j]^i;
        
        // PROVJERA DA LI JE NIZ RASTUCI
        
        for (j = 0; j < N; j++)
            {
                if (j == N-1)
                    {
                        printf ("X=%d", i);
                        return 0;
                    }
                else if (pomocni_niz[j] > pomocni_niz[j+1])
                    break;
                
            }
    }

printf ("X=-1");
return 0;


}
