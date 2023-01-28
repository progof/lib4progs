#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VECTOR_length 10
#define MATRIX_length 3

struct templateVector
{
	int v_cell[VECTOR_length];
};

struct templateMatrix
{
	int double_cell[MATRIX_length][MATRIX_length];
};

void menu_task()
{
	 void program_task_1();
     void program_task_2();
     void program_task_3();
     void program_task_4();
     void program_task_5();
     void program_task_6();
     void program_task_7();
     void program_task_8();
     void program_task_9();
     void program_task_10();
     void program_task_11();
     void program_task_12();
     void program_task_13();
     void program_task_14();
     void program_task_15();
}

    
/* ---------------------------------------------------------------------------------------------------------*/
// Program code #1
void program_task_1()
{
	printf("1) ... wpisuje do kazdego elementu wektora o rozmiarze N wartosc rowna jego indeksowi.\n\n");
}

void program_1()
{
	printf("\nProgram #1\n\n");
	struct templateVector vector_A;

	for (int i = 0; i < VECTOR_length; i++)
	{
		vector_A.v_cell[i] = i;
		printf("Index vector [%d]: value %d\n", i, vector_A.v_cell[i]);
	}
}
/* ---------------------------------------------------------------------------------------------------------*/
// Program code #2
void program_task_2()
{
	printf("2) ... wpisuje do kazdego elementu wektora o rozmiarze N wartosc wieksza o jeden od jego indeksu.\n\n");
}

void program_2()
{
	printf("\nProgram #2\n\n");
	struct templateVector vector_A;

	for (int i = 0; i < VECTOR_length; i++)
	{
		vector_A.v_cell[i] = i + 1;
		printf("Index vector [%d]: value %d\n", i, vector_A.v_cell[i]);
	}
}
/* ---------------------------------------------------------------------------------------------------------*/
// Program code #3
void program_task_3()
{
	printf("3) ... wpisuje do kazdego elementu wektora o rozmiarze N wartosc rowna indeksowi elementu o symetrycznej pozycji \nwzgledem 'srodka' wektora, to jest dla pierwszego elementu - indeks ostatniego, dla drugiego - indeks przedostatniego itd.\n\n");
}

void program_3()
{
	printf("\nProgram #3\n\n");
	struct templateVector vector_A;

	for (int i = 0; i < VECTOR_length; i++)
	{
		vector_A.v_cell[i] = VECTOR_length - i - 1;
		printf("Index vector [%d]: value %d\n", i, vector_A.v_cell[i]);
	}
}
/* ---------------------------------------------------------------------------------------------------------*/
// Program code #4
void program_task_4()
{
	printf("4) ... w wektorze o rozmiarze N zamienia ze soba zawartosci elementow rowno odleglych od poczatku \n i konca wektora (czyli zamienia pierwszy elementu z ostatnim, drugi z przedostatnim itd).\n\n");
}

void program_4()
{
	printf("\nProgram #4\n\n");
	struct templateVector vector_A;

	for (int i = 0; i < VECTOR_length; i++)
	{
		vector_A.v_cell[i] = i;
	}

	for (int i = 0; i < VECTOR_length / 2; i++)
	{
		int swap = vector_A.v_cell[i];
		vector_A.v_cell[i] = vector_A.v_cell[VECTOR_length - i - 1];
		vector_A.v_cell[VECTOR_length - i - 1] = swap;
	}

	for (int i = 0; i < VECTOR_length; i++)
	{
		printf("Index vector [%d]: value %d\n", i, vector_A.v_cell[i]);
	}
}
/* ---------------------------------------------------------------------------------------------------------*/
// Program code #5
void program_task_5()
{
	printf("5) ... w wektorze o rozmiarze N zamienia ze soba zawartosci elementow rowno odleglych ... \nod jego pierwszego elementu i trzeciego od konca elementu wektora ... \n(czyli zamienia pierwszy elementu z trzecim od konca, drugi z czwartym od konca itd). \n\n");
}

void program_5()
{
	printf("\nProgram #5\n\n");
	struct templateVector vector_A;

	for (int i = 0; i < VECTOR_length; i++)
	{
		vector_A.v_cell[i] = i;
	}

	for (int i = 0; i < VECTOR_length / 3; i++)
	{
		int swap = vector_A.v_cell[i];
		vector_A.v_cell[i] = vector_A.v_cell[VECTOR_length - i - 3];
		vector_A.v_cell[VECTOR_length - i - 3] = swap;
	}

	for (int i = 0; i < VECTOR_length; i++)
	{
		printf("Index vector [%d]: value %d\n", i, vector_A.v_cell[i]);
	}
}
/* ---------------------------------------------------------------------------------------------------------*/
// Program code #6
void program_task_6()
{
	printf("6) ... w wektorze o rozmiarze N zamienia ze soba zawartosci elementow rowno odleglych od jego pierwszego elementu \ni k-ego od konca elementu wektora (czyli zamienia pierwszy element z k-tym od konca, drugi z (k+1)-szym od konca itd).  \n\n");
}

void program_6()
{
	printf("\nProgram #6\n\n");
	struct templateVector vector_A;
	int point_k = 4;

	for (int i = 0; i < VECTOR_length; i++)
	{
		vector_A.v_cell[i] = i;
	}

	for (int i = 0; i < VECTOR_length / 2; i++)
	{
		int swap = vector_A.v_cell[i];
		vector_A.v_cell[i] = vector_A.v_cell[point_k];
		vector_A.v_cell[point_k] = swap;
	}

	for (int i = 0; i < VECTOR_length; i++)
	{
		printf("Index vector [%d]: value %d\n", i, vector_A.v_cell[i]);
	}
}
/* ---------------------------------------------------------------------------------------------------------*/
// Program code #7
void program_task_7()
{
	printf("7) ... w wektorze o rozmiarze N zamienia ze soba zawartosci elementow o indeksach od k do m na podobnej zasadzie jak \nw zadaniach 4,5,6 czyli zamienia zawartosc k-tego z zawartoscia m-tego, (k+1)-szego z (m-1)-szego itd. \n\n");
}

void program_7()
{
	printf("\nProgram #7\n\n");
	struct templateVector vector_A = {
			.v_cell = {1, 2, 3, 4, 5, 6, 7, 8, 9}};

	int point_k = 4;
	int point_m = 7;

	for (int i = 0; i < VECTOR_length; i++)
	{
		vector_A.v_cell[i] = i;
	}

	for (int i = 0; i < point_m - point_k; i++)
	{
		int swap = vector_A.v_cell[point_k];
		vector_A.v_cell[point_k] = vector_A.v_cell[point_m];
		vector_A.v_cell[point_m] = swap;
	}

	printf("Modecication: swap start index[%d] the end index[%d]\n\n", point_k, point_m);

	for (int i = 0; i < VECTOR_length; i++)
	{
		printf("Index vector [%d]: value %d\n", i, vector_A.v_cell[i]);
	}
}
/* ---------------------------------------------------------------------------------------------------------*/
// Program code #8
void program_task_8()
{
	printf("8) ... oblicza iloczyn elementow polozonych na przekatnej glownej macierzy kwadratowej o rozmiarze N.\n\n");
}

void program_8()
{
	printf("\nProgram #8\n\n");
	struct templateMatrix matrixA = {
			.double_cell = {
					{2, 1, 1},
					{1, 3, 2},
					{2, 2, 1}}};
	int product = 1;

	for (int i = 0; i < MATRIX_length; i++)
	{
		product *= matrixA.double_cell[i][i];
	}

	printf("Size of matrix A[%d][%d]\n\n", MATRIX_length, MATRIX_length);

	for (int i = 0; i < MATRIX_length; i++)
	{
		printf("[");
		for (int j = 0; j < MATRIX_length; j++)
		{
			printf("%d", matrixA.double_cell[i][j]);

			if (j < 2)
			{
				printf(", ");
			}
		}
		printf("]\n");
	}

	printf("\nProduct for matrix -> value: %d\n", product);
}
/* ---------------------------------------------------------------------------------------------------------*/
// Program code #9
void program_task_9()
{
	printf("9) ... oblicza sume kwadratow elementow na tej przekatnej macierzy kwadratowej , ktora znajduje sie bezposrednio nad przekatna glowna.\n\n");
}

void program_9()
{
	printf("\nProgram #9\n\n");
	struct templateMatrix matrixA = {
			.double_cell = {
					{2, 1, 1},
					{1, 3, 2},
					{2, 2, 1}}};
	int sum_squares = 1;

	for (int i = 0; i < MATRIX_length; i++)
	{
		sum_squares *= matrixA.double_cell[i][i] * matrixA.double_cell[i][i];
	}

	printf("Size of matrix A[%d][%d]\n\n", MATRIX_length, MATRIX_length);

	for (int i = 0; i < MATRIX_length; i++)
	{
		printf("[");
		for (int j = 0; j < MATRIX_length; j++)
		{
			printf("%d", matrixA.double_cell[i][j]);

			if (j < 2)
			{
				printf(", ");
			}
		}
		printf("]\n");
	}

	printf("\nSum of squares for matrix -> value: %d\n", sum_squares);
}
/* ---------------------------------------------------------------------------------------------------------*/
// Program code #10
void program_task_10()
{
	printf("10) ... oblicza sume kwadratow elementow macierzy trojkatnej gornej o rozmiarze N (tj. elementow powyzej przekatnej glownej).\n\n");
}

void program_10()
{
	printf("\nProgram #10\n\n");
	struct templateMatrix matrixA = {
			.double_cell = {
					{2, 1, 1},
					{1, 3, 2},
					{2, 2, 1}}};
	int sum_squares = 1;

	for (int i = 0; i < MATRIX_length; i++)
	{
		sum_squares *= matrixA.double_cell[0][i] * matrixA.double_cell[0][i];
	}

	printf("Size of matrix A[%d][%d]\n\n", MATRIX_length, MATRIX_length);

	for (int i = 0; i < MATRIX_length; i++)
	{
		printf("[");
		for (int j = 0; j < MATRIX_length; j++)
		{
			printf("%d", matrixA.double_cell[i][j]);

			if (j < 2)
			{
				printf(", ");
			}
		}
		printf("]\n");
	}

	printf("\nSum of squares for matrix -> value: %d\n", sum_squares);
}
/* ---------------------------------------------------------------------------------------------------------*/
// Program code #11
void program_task_11()
{
	printf("11)	... oblicza sume kwadratow elementow macierzy trojkatnej dolnej o rozmiarze N (tj. elementow ponizej przekatnej glownej).\n\n");
}

void program_11()
{
	printf("\nProgram #11\n\n");
	struct templateMatrix matrixA = {
			.double_cell = {
					{2, 1, 1},
					{1, 3, 2},
					{2, 2, 1}}};
	int sum_squares = 1;

	for (int i = 0; i < MATRIX_length; i++)
	{
		sum_squares *= matrixA.double_cell[2][i] * matrixA.double_cell[2][i];
	}

	printf("Size of matrix A[%d][%d]\n\n", MATRIX_length, MATRIX_length);

	for (int i = 0; i < MATRIX_length; i++)
	{
		printf("[");
		for (int j = 0; j < MATRIX_length; j++)
		{
			printf("%d", matrixA.double_cell[i][j]);

			if (j < 2)
			{
				printf(", ");
			}
		}
		printf("]\n");
	}

	printf("\nSum of squares for matrix -> value: %d\n", sum_squares);
}
/* ---------------------------------------------------------------------------------------------------------*/
// Program code #12
void program_task_12()
{
	printf("12)	... oblicza sume elementow macierzy o rozmiarze N z pominieciam elementow na przekatnej glownej.\n\n");
}

void program_12()
{
	printf("\nProgram #12\n\n");
	struct templateMatrix matrixA = {
			.double_cell = {
					{2, 1, 1},
					{1, 3, 2},
					{2, 2, 1}}};
	int sum = 1;

	sum = (matrixA.double_cell[0][1] + matrixA.double_cell[0][2]) + (matrixA.double_cell[1][0] + matrixA.double_cell[1][2]) + (matrixA.double_cell[2][0] + matrixA.double_cell[2][1]);

	printf("Size of matrix A[%d][%d]\n\n", MATRIX_length, MATRIX_length);

	for (int i = 0; i < MATRIX_length; i++)
	{
		printf("[");
		for (int j = 0; j < MATRIX_length; j++)
		{
			printf("%d", matrixA.double_cell[i][j]);

			if (j < 2)
			{
				printf(", ");
			}
		}
		printf("]\n");
	}

	printf("\nSum matrix -> value: %d\n", sum);
}
/* ---------------------------------------------------------------------------------------------------------*/
// Program code #13
void program_task_13()
{
	printf("13)	... wylicza elementy macierzy powstalej przez pomnozenie macierzy kwadratowej [A] o rozmiarze N przez wektor (macierz jednowymiarowa) o rozmiarze N.\n\n");
}

void program_13()
{
	printf("\nProgram #13\n\n");
	struct templateMatrix matrixA = {
			.double_cell = {
					{2, 1, 1},
					{1, 3, 2},
					{2, 2, 1}}};

	struct templateVector vector_A = {
			.v_cell = {1, 2, 3}};

	struct templateMatrix matrixB = {
			.double_cell = {
					{1, 1, 1},
					{1, 1, 1},
					{1, 1, 1}}};

	for (int i = 0; i < MATRIX_length; i++)
	{
		for (int j = 0; j < MATRIX_length; j++)
		{
			matrixB.double_cell[i][i] += matrixA.double_cell[i][j] * vector_A.v_cell[j];
		}
		printf("Index the matrix B[%d] -> value[%d]\n", i, matrixB.double_cell[i][i]);
	}
}
/* ---------------------------------------------------------------------------------------------------------*/
// Program code #14
void program_task_14()
{
	printf("14)	... wylicza elementy macierzy powstalej przez pomnozenie macierzy kwadratowej o rozmiarze N przez sama siebie ([C] = [A] * [A]).\n\n");
}

void program_14()
{
	printf("\nProgram #14\n\n");
	struct templateMatrix matrixA = {
			.double_cell = {
					{2, 1, 1},
					{1, 3, 2},
					{2, 2, 1}}};

	struct templateMatrix matrixC = {
			.double_cell = {
					{0, 0, 0},
					{0, 0, 0},
					{0, 0, 0}}};

	for (int i = 0; i < MATRIX_length; i++)
	{
		for (int j = 0; j < MATRIX_length; j++)
		{
			matrixC.double_cell[i][j] = 0;
			for (int k = 0; k < MATRIX_length; k++)
			{
				matrixC.double_cell[i][j] += matrixA.double_cell[i][k] * matrixA.double_cell[k][j];
			}
		}
	}

	printf("Matrix[A]\n\n");

	for (int i = 0; i < MATRIX_length; i++)
	{
		printf("[");
		for (int j = 0; j < MATRIX_length; j++)
		{
			printf("%d", matrixA.double_cell[i][j]);
			if (j < 2)
			{
				printf(", ");
			}
		}
		printf("]\n");
	}

	printf("\nMatrix[C] = Matrix[A] * Matrix[A]\n\n");
	for (int i = 0; i < MATRIX_length; i++)
	{
		printf("[");
		for (int j = 0; j < MATRIX_length; j++)
		{
			printf("%d", matrixC.double_cell[i][j]);
			if (j < 2)
			{
				printf(", ");
			}
		}
		printf("]\n");
	}
}
/* ---------------------------------------------------------------------------------------------------------*/
// Program code #15
void program_task_15()
{
	printf("15)	... wylicza elementy macierzy powstalej przez pomnozenie dwoch macierzy kwadratowych [A] i [D] o rozmiarze N przez sama siebie ([C] = [A] * [D]).\n\n");
}

void program_15()
{
	printf("\nProgram #15\n\n");
	struct templateMatrix matrixA = {
			.double_cell = {
					{2, 1, 1},
					{1, 3, 2},
					{2, 2, 1}}};

	struct templateMatrix matrixC = {
			.double_cell = {
					{0, 0, 0},
					{0, 0, 0},
					{0, 0, 0}}};

	struct templateMatrix matrixD = {
			.double_cell = {
					{1, -2, 4},
					{2, -1, 3},
					{3, -1, 2}}};

	for (int i = 0; i < MATRIX_length; i++)
	{
		for (int j = 0; j < MATRIX_length; j++)
		{
			matrixC.double_cell[i][j] = 0;
			for (int k = 0; k < MATRIX_length; k++)
			{
				matrixC.double_cell[i][j] += matrixA.double_cell[i][k] * matrixD.double_cell[k][j];
			}
		}
	}

	printf("\nMatrix[A]\n\n");

	for (int i = 0; i < MATRIX_length; i++)
	{
		printf("[");
		for (int j = 0; j < MATRIX_length; j++)
		{
			printf("%d", matrixA.double_cell[i][j]);
			if (j < 2)
			{
				printf(", ");
			}
		}
		printf("]\n");
	}

	printf("\nMatrix[D]\n\n");

	for (int i = 0; i < MATRIX_length; i++)
	{
		printf("[");
		for (int j = 0; j < MATRIX_length; j++)
		{
			printf("%d", matrixD.double_cell[i][j]);
			if (j < 2)
			{
				printf(", ");
			}
		}
		printf("]\n");
	}

	printf("\nMatrix[C] = Matrix[A] * Matrix[D]\n\n");

	for (int i = 0; i < MATRIX_length; i++)
	{
		printf("[");
		for (int j = 0; j < MATRIX_length; j++)
		{
			printf("%d", matrixC.double_cell[i][j]);
			if (j < 2)
			{
				printf(", ");
			}
		}
		printf("]\n");
	}
}