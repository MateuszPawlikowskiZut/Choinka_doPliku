#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	FILE *file;
	
	int n, i, j = 0;

	printf("Podaj numer wierszy: "); scanf("%d", &n);

	if ((file = fopen("tekst.txt", "w")) == NULL)
	{
		printf("Nie dzia³a"); return 1;
	}

    for(i = 1; i <= n; i++)
    {
    	
		//Spacje
		for(j = 0; j < (n - i); j++)
		{
			fprintf(file, "%s", " ");
		}
		
		//Gwiazdki
		for(j = 0; j < (2*i) - 1; j++)
			fprintf(file, "%s", "*");
		
		fprintf(file, "%s", "\n");
    }
    
    fclose(file);
    
	return 0;
}

