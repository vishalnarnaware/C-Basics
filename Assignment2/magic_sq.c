#include<stdio.h>
#include<string.h>

void magicSquare(int);

int main()
{
	int size;
	printf("Enter size of square (only odd): ");
	scanf("%d", &size);
	magicSquare(size);
	return 0;
}

void magicSquare(int n)
{
	int magicSquare[n][n];
    int i, j;
    int num;

	for(i=0; i<n; i++)  {
        for(j=0; j<n; j++)  {
            magicSquare[i][j] = 0;
        }
	}

	i = n/2;
	j = n-1;

	for(num=1; num<=n*n; ) {
		if(i==-1 && j==n)  {
			j = n-2;
			i = 0;
		}
		else    {
			if(j == n)
				j = 0;
			if(i < 0)
				i = n-1;
		}
		if (magicSquare[i][j]) {
			j -= 2;
			i++;
			continue;
		}
		else
			magicSquare[i][j] = num++;

		j++;
		i--;
	}

	printf("The Magic Square of size %d:\n", n);
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			printf("%d ", magicSquare[i][j]);
		}
		printf("\n");
	}
}

