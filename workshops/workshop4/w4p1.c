/*
*****************************************************************************
                          Workshop - #4 (P1)
Full Name  :	Ahmet UCAN 
Email      :	aucan2022@gmail.com 

*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS     // for visual studio code errors

#include <stdio.h>

int main(void)
{
	int count, i;
	char loop_type;
	
	printf("+----------------------+\n");
	printf("Loop application STARTED\n");
	printf("+----------------------+\n\n");
	
	do {
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loop_type, &count);
        
        if (!(((loop_type == 'D') || (loop_type == 'W')) || ((loop_type == 'F') || (loop_type == 'Q')))){
			printf("ERROR: Invalid entered value(s)!\n\n");
		}			 
		else if ((loop_type != 'Q') && ( count < 3 || count > 20 )) {
            printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");
		}
		else if (loop_type != 'Q'){
            
            if (loop_type == 'D') {
                printf("DO-WHILE: ");
                i = 0;
                do {
                    printf("D");
                    i++;
                } while (i < count);
                printf("\n\n");
            }
            
            else if (loop_type == 'W') {
                printf("WHILE   : ");
                i = 0;
                while (i < count) {
                    printf("W");
                    i++;
                }
                printf("\n\n");
            }
            
            else if (loop_type == 'F') {
                printf("FOR     : ");
                for (i = 0; i < count; i++) {
                    printf("F");
                }
                printf("\n\n");
            }
        }
    
    } while ( loop_type != 'Q' || count != 0 );

    printf("\n+--------------------+\n");
    printf("Loop application ENDED\n");
    printf("+--------------------+\n");

    return 0;
}
