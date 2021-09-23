#include <stdio.h>

void oduzmi_cifre (int niz[], int size){

	int i;
	int novi_broj = 0; // NOVA VRIJEDNOST CLANA NIZA
	int cifra1; // PRVA CIFRA BROJA S DESNO
	int cifra2; // DRUGA CIFRA BROJA S DESNO
	int nova_cifra; // RAZLIKA DVIJU CIFARA
	int k = 1; 
	
	for (i = 0; i < size; i++)
		{
			if (niz[i] < 0) // UZIMA APSOLUTNU VRIJEDNOST BROJA
				{
					niz[i] *= -1;
				}
			
			if (niz[i] >=0 && niz[i] < 10) // PROVJERAVA DA LI JE BROJ JEDNOCIFREN
				{
					niz[i] = 0;
					continue;
				}
			
			while (niz[i]>=10) // PRONALAZI NOVU VRIJEDNOST CLANA NIZA
				{
					
					cifra1 = niz[i]%10;
					cifra2 = (niz[i]/10)%10;
					
					nova_cifra = cifra1-cifra2;
					nova_cifra *= (nova_cifra<0) ? -1 : 1;
					
					novi_broj += nova_cifra * k;
					k*=10;
					niz[i]/=10;
				
				}
			// RESTART POCETNIH VRIJEDNOSTI
			niz [i] = novi_broj;
			k = 1;
			novi_broj = 0;
			
			
		}
	

	
}


int main() {
int niz[] = {101, 3002, 70008, 900001}, i;
oduzmi_cifre(niz, 4);
for (i=0; i<4; i++)
	printf("%d ", niz[i]);
}
