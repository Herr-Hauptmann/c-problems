#include <stdio.h>
void prva_polovina (double* erste);
void druga_polovina (double* first);

double max_prvi;
double max_drugi;

double max (double a, double b){
	if (a >= b)
		return a;
	else 
		return b;
}


double parallel_max (double* prvi, double* drugi){
	


static int sredina;
static int brojac = 0;
	
	
	if (brojac == 0)
	{
		if (drugi == prvi + 1)
			return *prvi;
		
		sredina = (drugi-prvi)/2;
		brojac++;
		max_prvi = *prvi;
		max_drugi = *(prvi+sredina);
	}
	
	if (prvi < drugi - sredina-1)
		prva_polovina(prvi);
	
	else
		druga_polovina(prvi);
		
	prvi++;
	
	if (prvi == drugi)
		return max (max_prvi, max_drugi);
	
	parallel_max (prvi, drugi);
	
}

void prva_polovina (double* erste){
	if (*erste > max_prvi)
			max_prvi = (*erste);

}

void druga_polovina (double* first){
		if (*first > max_drugi)
			max_drugi = (*first);

}



int main() {
	double niz[] = {4.3, 15.1, 2.2, -3.4, 18.1, 1.1, 3.0};
	printf("%g", parallel_max(niz, niz+7));
	return 0;
}
