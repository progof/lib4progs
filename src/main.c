#include "programs.h"

int main(){
  
    // Menu list
    int menu_number;

     printf("\n<< The Library for programs in C >>\n\n");

     program_task_1();
     program_task_2();
     program_task_3();
     program_task_4();
     program_task_5();
     program_task_6();
     program_task_7();
     program_task_8();
     program_task_9();
     program_task_10();
     program_task_11();
     program_task_12();
     program_task_13();
     program_task_14();
     program_task_15();

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
