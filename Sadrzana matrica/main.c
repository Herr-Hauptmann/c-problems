#include <stdio.h>

int matrica_sadrzana (int matrica_1 [100][100],int x1, int y1,  int matrica_2 [100][100], int x2, int y2){
	
	int i, j, k1, k2;
	int brojac = 0;
	
	for (i = 0; i <= x1-x2; i++)
		{
			for (j = 0; j <= y1 - y2; j++)
				{
					for (k1 = 0; k1 < x2; k1++)
						{
							for (k2 = 0; k2 < y2; k2++)
								{
									if (matrica_1[i+k1][j+k2] == matrica_2[k1][k2])
										brojac++;
								}								
							
						}
							
					
					if (brojac == x2*y2)
						return 1;
					else
						brojac = 0;
				}
				
			
			
		}
	
	return 0;
}




int main() {
	
	int A[100][100];
    int B[100][100];
    
    A[0][0] = B[0][0] = 100;
    A[0][1] = 200;
    B[1][0] = 200;

    printf("%d ", matrica_sadrzana(A, 1, 2, B, 2, 1));
    printf("%d ", matrica_sadrzana(A, 1, 1, B, 2, 1));
    printf("%d ", matrica_sadrzana(A, 1, 2, B, 1, 1));
    printf("%d ", matrica_sadrzana(A, 1, 1, B, 1, 1));
}
