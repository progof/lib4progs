#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VECTOR_length 12
#define MATRIX_length 3

struct templateVector
{
    int v_cell[VECTOR_length];
    int point_k;
    int point_m;
};

struct templateMatrix
{
    int double_cell[MATRIX_length][MATRIX_length];
    int product;
};



int main(){

    // Vector A
    struct templateVector vector_A;
    vector_A.point_k = 3;
    vector_A.point_m = 8;

    // Matrix A
  
    struct templateMatrix matrixA = {
     .double_cell = {
        {2, 1, 1},
        {1, 3, 2},
        {2, 3, 1}
    }};
    matrixA.product = 1;
    //struct templateMatrix matrixA = { .product = 1 };
  
    // Menu list
    int menu_number;
    printf("\n<< The Library for programs in C >>\n\n");
    printf("1) ... wpisuje do kazdego elementu wektora o rozmiarze N wartosc rowna jego indeksowi.\n\n");
    printf("2) ... wpisuje do kazdego elementu wektora o rozmiarze N wartosc wieksza o jeden od jego indeksu.\n\n");
    printf("3) ... wpisuje do kazdego elementu wektora o rozmiarze N wartosc rowna indeksowi elementu o symetrycznej pozycji \nwzgledem 'srodka' wektora, to jest dla pierwszego elementu - indeks ostatniego, dla drugiego - indeks przedostatniego itd.\n\n");
    printf("4) ... w wektorze o rozmiarze N zamienia ze soba zawartosci elementow rowno odleglych od poczatku \n i konca wektora (czyli zamienia pierwszy elementu z ostatnim, drugi z przedostatnim itd).\n\n");
    printf("5) ... w wektorze o rozmiarze N zamienia ze soba zawartosci elementow rowno odleglych ... \nod jego pierwszego elementu i trzeciego od konca elementu wektora ... \n(czyli zamienia pierwszy elementu z trzecim od konca, drugi z czwartym od konca itd). \n\n");
    printf("6) ... w wektorze o rozmiarze N zamienia ze soba zawartosci elementow rowno odleglych od jego pierwszego elementu \ni k-ego od konca elementu wektora (czyli zamienia pierwszy element z k-tym od konca, drugi z (k+1)-szym od konca itd).  \n\n");
    printf("7) ... w wektorze o rozmiarze N zamienia ze soba zawartosci elementow o indeksach od k do m na podobnej zasadzie jak \nw zadaniach 4,5,6 czyli zamienia zawartosc k-tego z zawartoscia m-tego, (k+1)-szego z (m-1)-szego itd. \n\n");
    printf("8) ... oblicza iloczyn elementow polozonych na przekatnej glownej macierzy kwadratowej o rozmiarze N.\n\n");
    printf("\n\n");
    printf("\n\n");
    printf("\n\n");
    printf("\nTo start the program, select its number:\n");
    scanf("%d", &menu_number);

    switch (menu_number)
    {
    case 1: // Program #1
            for (int i = 0; i < VECTOR_length; i++)
            {
                 vector_A.v_cell[i] = i;
                 printf("Index vector [%d]: value %d\n", i, vector_A.v_cell[i]);
            }          
        break;

    case 2: // Program #2
            for (int i = 0; i < VECTOR_length; i++)
            {
                 vector_A.v_cell[i] = i + 1;
                 printf("Index vector [%d]: value %d\n", i, vector_A.v_cell[i]);
            }          
        break;

     case 3: // Program #3
            for (int i = 0; i < VECTOR_length; i++)
            {
                 vector_A.v_cell[i] = VECTOR_length - i - 1;
                 printf("Index vector [%d]: value %d\n", i, vector_A.v_cell[i]);
            }          
        break;

    case 4: // Program #4
            for (int i = 0; i < VECTOR_length; i++)
            {
                 vector_A.v_cell[i] = i;
            }

            for(int i = 0; i < VECTOR_length / 2; i++)
            {
                int swap = vector_A.v_cell[i];
                vector_A.v_cell[i] = vector_A.v_cell[VECTOR_length-i-1];
                vector_A.v_cell[VECTOR_length-i-1] = swap;
            }

            for(int i = 0; i < VECTOR_length; i++)
            {
                printf("Index vector [%d]: value %d\n", i, vector_A.v_cell[i]);

            }          
        break; 

    case 5: // Program #5
            for (int i = 0; i < VECTOR_length; i++)
            {
                 vector_A.v_cell[i] = i;
            }

            for(int i = 0; i < VECTOR_length / 3; i++)
            {
                int swap = vector_A.v_cell[i];
                vector_A.v_cell[i] = vector_A.v_cell[VECTOR_length-i-3];
                vector_A.v_cell[VECTOR_length-i-3] = swap;
            }

            for(int i = 0; i < VECTOR_length; i++)
            {
                printf("Index vector [%d]: value %d\n", i, vector_A.v_cell[i]);

            }          
        break; 

    case 6: // Program #6
            for (int i = 0; i < VECTOR_length; i++)
            {
                 vector_A.v_cell[i] = i;
            }

            for(int i = 0; i < VECTOR_length / 2; i++)
            {
                int swap = vector_A.v_cell[i];
                vector_A.v_cell[i] = vector_A.v_cell[vector_A.point_k];
                vector_A.v_cell[vector_A.point_k] = swap;
            }

            for(int i = 0; i < VECTOR_length; i++)
            {
                printf("Index vector [%d]: value %d\n", i, vector_A.v_cell[i]);

            }          
        break; 

    case 7: // Program #7
            for (int i = 0; i < VECTOR_length; i++)
            {
                 vector_A.v_cell[i] = i;
            }

            for(int i = 0; i < vector_A.point_m - vector_A.point_k; i++)
            {
                int swap = vector_A.v_cell[vector_A.point_k];
                vector_A.v_cell[vector_A.point_k] = vector_A.v_cell[vector_A.point_m];
                vector_A.v_cell[vector_A.point_m] = swap;
            }

            printf("Modecication: swap start index[%d] the end index[%d]\n\n", vector_A.point_k, vector_A.point_m);

            for(int i = 0; i < VECTOR_length; i++)
            {
                printf("Index vector [%d]: value %d\n", i, vector_A.v_cell[i]);

            }          
        break;

    case 8: // Program #8
            for (int i = 0; i < MATRIX_length; i++)
            {
                 matrixA.product *= matrixA.double_cell[i][i];
            }

            printf("Size of matrix A[%d][%d]\n\n", MATRIX_length, MATRIX_length);

             for(int i = 0; i < MATRIX_length; i++){
                printf("[");
                    for(int j = 0; j < MATRIX_length; j++){
                        printf("%d", matrixA.double_cell[i][j]);

                        if (j < 2) {
                        printf(", ");
                        }
                    }
                printf("]\n");
            }

            printf("\nProduct for array -> value: %d\n", matrixA.product);            
        break;            
    default:
        break;
    }

    return 0;
}