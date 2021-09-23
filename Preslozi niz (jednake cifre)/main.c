#include <stdio.h>
#include <math.h>
//POCETAK PROMJENA
int main() {

int niz[100];
int i, j;
int zbroj = 0;

int posljednji_istocifren_clan = 0;
int cifra = 0; // POSLJEDNJA CIFRA BROJA
int broj = 0; // BROJ IZ NIZA IZVADJEN RADI PROVJERE
int provjera = 0; // ZBIR CIFARA BROJA U NIZU
int brojac_cifara = 0; // SPEAKS FOR ITSELF
int smjena = 0;

//UNOS BROJEVA

printf ("Unesite brojeve:\n");

for (i = 0; i < 100; i++)
	{	
		
		scanf ("%d", &niz[i]);
		
		zbroj++;
		
		if (niz[i] == -1)
			break;
		
	}	
	
for (i = 0; i < zbroj; i++)
	{
		
		// RJESAVANJE POSLJEDNJEG CLANA
		if (niz [i] == -1)
			continue;
		
		//RESTARTOVANJE BROJNIH VRIJEDNOSTI
		cifra = 0;
		broj = 0;
		provjera = 0;
		brojac_cifara = 0;
		
		// PROVJERA DA LI JE BROJ JEDNOCIFREN
		if (niz[i]<10 && niz[i]>= 0) 
			{
				if (i == posljednji_istocifren_clan) //AKO JE BROJ JEDNOCIFREN I PRIJE NJEGA SU SVI BROJEVI ISTOCIFRENI -> NE DIRAJ NISTA!
					{
						posljednji_istocifren_clan++;
						continue;	
					}
				else //EH AKO NIJE, TEK TAD NASTAJU BELAJI!
					{	
						smjena = niz[i];
						for (j = i; j > posljednji_istocifren_clan; j--)
							{
								niz [j] = niz [j-1];
							}
						niz [posljednji_istocifren_clan] = smjena;
						posljednji_istocifren_clan++;
					}
			}
			
		// ALGORITAM ZA PROVJERU DA LI SU CIFRE BROJA ISTE
		broj = niz[i];
		
		broj *= (broj<0) ? -1 : 1;	// chIRI BU chIRI BA, AKO JE BROJ NEGATIVAN NEK POSTANE POZITIVAN, PA DA ME NE ZEZAJU AUTOTESTOVI
		
		cifra = broj % 10;
		
		while (broj>0)
			{
				provjera += broj % 10;
				broj /= 10;
				brojac_cifara++;
			}
		
		
		
		if (provjera == cifra * brojac_cifara) // CIFRE BROJA SU UISTINU JEDNAKE
			{
				if (i == posljednji_istocifren_clan) // AKO NEMA BROJEVA S RAZLICITIM CIFRAMA, OPET NISTA NE DIRAJ!!
					{
						posljednji_istocifren_clan++;
						continue;
					}
				else // EH SAD SE SITUACIJA ZAKUHAVAAAA
					{
						// Salim se, samo cu kopirat kod odozgo.
						
						smjena = niz[i];
						for (j = i; j > posljednji_istocifren_clan; j--)
							{
								niz [j] = niz [j-1];
							}
						niz [posljednji_istocifren_clan] = smjena;
						posljednji_istocifren_clan++;
						
					}
			}
		
// TACNO MI SE OSLADILO OVO PISANJE KOMENTARA.

	}

// ISPIS NIZA
printf ("Nakon preslaganja niz glasi:\n");

for (i = 0; i < zbroj; i++)
	{	
		if (i == 0)
			printf ("%d", niz[0]);
		else if (niz [i] != -1)
			printf (",%d", niz [i]);
		
	}

printf (".");
// KRAJ PROGRAMA

return 0;

	
}