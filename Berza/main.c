#include <stdio.h>

int main() {

int brojac50 = 0;
int brojac20 = 0;
int brojac10 = 0;
int brojac5 = 0;
int brojac2 = 0;
int brojac1 = 0;

int n;

printf ("Unesite iznos: ");
scanf ("%d", &n);

for (;;)
	{
		if (n == 0)
			break;
			
		if (n >= 50)
		{
			n = n - 50;
			brojac50++;
		}
		
		if (n < 50 && n >= 20)
		{
			n = n - 20;
			brojac20++;
		}
		
		if (n < 20 && n >= 10)
		{
			n = n - 10;
			brojac10++;
		}
		
		if (n < 10 && n >= 5)
		{
			n = n - 5;
			brojac5++;
		}
		
		if (n < 5 && n >= 2)
		{
			n = n - 2;
			brojac2++;
		}
		
		if (n < 2 && n >= 1)
		{
			n--;
			brojac1++;
		}
	}
	
printf ("%d novcanica od 50 KM\n", brojac50);
printf ("%d novcanica od 20 KM\n", brojac20);
printf ("%d novcanica od 10 KM\n", brojac10);
printf ("%d novcanica od 5 KM\n", brojac5);
printf ("%d novcanica od 2 KM\n", brojac2);
printf ("%d novcanica od 1 KM\n", brojac1);

return 0;
}