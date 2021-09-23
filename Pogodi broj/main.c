#include <stdio.h>

int daj_sljedeci_broj (int x) {
	
	static int prosli = 50;
	static int pocetak = 0;
	static int kraj = 100;
	
	if (x == -1)
	    {
	        kraj = prosli;
	        prosli = pocetak + ((kraj - pocetak) /2);
	        return prosli;
	    }

    else if (x == 1)
        {
            pocetak = prosli;
            prosli = pocetak + ((kraj - pocetak) /2);
            return prosli;
    	}

	else
	    {
	      return prosli;
	    }
}

int main(){
    
	char provjera;
	
	printf ("Zamislite neki broj...\n");
	printf ("Da li je taj broj %d? ", daj_sljedeci_broj(0));
	
	for (;;)
	    {
	    
	        scanf (" %c", &provjera);
	        
	       if (provjera == 'M')
	         printf ("Da li je taj broj %d? ", daj_sljedeci_broj(-1));
	       else if (provjera == 'V')
	         printf ("Da li je taj broj %d? ", daj_sljedeci_broj(1));
	       else if (provjera == 'J')
	            {
	                printf ("Pogodio sam!");
	                break;
	            }
	       else 
	       {
	       		printf ("Pogresan unos, probajte ponovo.\n");
	    		printf ("Da li je taj broj %d? ", daj_sljedeci_broj(0));
	       }
	    
	    }
return 0;
	
}
