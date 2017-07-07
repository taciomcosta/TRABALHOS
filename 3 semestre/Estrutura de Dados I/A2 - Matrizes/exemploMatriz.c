#include <stdio.h>

main()
{
	int m[3][4], i, j,
		k = 1;
	
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++) 
			m[i][j] = k++;
			
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++)
			printf("%4d", m[i][j]);
		printf("\n\n");
	}
		
}
