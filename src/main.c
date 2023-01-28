#include "programs.h"

int main(){
  
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
    printf("9) ... oblicza sume kwadratow elementow na tej przekatnej macierzy kwadratowej , ktora znajduje sie bezposrednio nad przekatna glowna.\n\n");
    printf("10) ... oblicza sume kwadratow elementow macierzy trojkatnej gornej o rozmiarze N (tj. elementow powyzej przekatnej glownej).\n\n");
    printf("11)	... oblicza sume kwadratow elementow macierzy trojkatnej dolnej o rozmiarze N (tj. elementow ponizej przekatnej glownej).\n\n");
    printf("12)	... oblicza sume elementow macierzy o rozmiarze N z pominieciam elementow na przekatnej glownej.\n\n");
    printf("13)	... wylicza elementy macierzy powstalej przez pomnozenie macierzy kwadratowej [A] o rozmiarze N przez wektor (macierz jednowymiarowa) o rozmiarze N.\n\n");
    printf("14)	... wylicza elementy macierzy powstalej przez pomnozenie macierzy kwadratowej o rozmiarze N przez sama siebie ([C] = [A] * [A]).\n\n");
    printf("15)	... wylicza elementy macierzy powstalej przez pomnozenie dwoch macierzy kwadratowych [A] i [D] o rozmiarze N przez sama siebie ([C] = [A] * [D]).\n\n");
    
    printf("\n\nTo start the program, select its number:");
    scanf("%d", &menu_number);

    switch (menu_number)
    {
    case 1: // Program #1
            program_1();       
        break;

    case 2: // Program #2
           program_2();         
        break;

     case 3: // Program #3
            program_3();     
        break;

    case 4: // Program #4
            program_4();          
        break; 

    case 5: // Program #5
            program_5();          
        break; 

    case 6: // Program #6
           program_6();          
        break; 

    case 7: // Program #7
            program_7();          
        break;

    case 8: // Program #8
            program_8();           
        break;

    case 9: // Program #9
            program_9();            
        break; 

    case 10: // Program #10
           program_10();           
        break;

    case 11: // Program #11
            program_11();          
        break; 
    
    case 12: // Program #12
            program_12();            
        break;

    case 13: // Program #13
           program_13();
        break;    

    case 14: // Program #14
            program_14();
        break; 

    case 15: // Program #15
            program_15();
        break;  

    default:
        break;
    }

    return 0;
}
