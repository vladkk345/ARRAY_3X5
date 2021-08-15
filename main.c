#include <stdio.h>

void copy_arr(double tar1[][5], int ROWS, int COLS, const double s[][5], int rows, int cols);
void show_array(const double s[][5], int rows, int cols, double tar1[][5], int ROWS, int COLS);

int main(void)
{
	int ROWS = 3;
	int COLS = 5;
	double source[3][5] =  { {1.2, 3.2, 3.3, 4.4, 5.5},
							 {3.1, 4.5, 8.3, 6.4, 9.3},
						 	 {7.1, 1.2, 10.3, 9.4, 12.1}};
	
	double target1[ROWS][COLS];
	
	copy_arr(target1,ROWS, COLS, source, 3, 5);
	show_array(source, 3, 5, target1, ROWS, COLS);
	return 0;
}

//------------------------------------------------------------

void copy_arr(double tar1[][5], int ROWS, int COLS, const double s[][5], int rows, int cols)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			tar1[i][j] = s[i][j];
		}
		putchar('\n');
	}
}

void show_array(const double s[][5], int rows, int cols, double tar1[][5], int ROWS, int COLS)
{
	printf("Array source:\n");
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%3.1f ", s[i][j]);
		}
		putchar('\n');
	}
	
	printf("Array target1:\n");
	
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("%3.1f ", tar1[i][j]);
		}
		putchar('\n');
	}
}
