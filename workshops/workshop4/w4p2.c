/*
*****************************************************************************
                          Workshop - #4 (P2)
Full Name  : Ahmet UCAN
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS         // for visual studio code errors

#include <stdio.h>

int main(void)
{
    // Urunlerin ihtiyac miktarlarini tutacak degiskenler
    int req_apples, req_oranges, req_pears, req_tomatoes, req_cabbages;
    // Urunleri sepete eklerken alinacak miktar
    int picked;
    // Alisverisi tekrar etme karari icin degisken
    int keep_shopping;

    do {
        printf("Grocery Shopping\n");
        printf("================\n");
        
        // IHTIYAC SORMA DONGUSU
        do{  
            printf("How many APPLES do you need? :");
            scanf("%d", &req_apples);

            if(req_apples < 0){
                printf("ERROR: Value must be 0 or more.\n");
            }
        } while (req_apples < 0);
        
        printf("\n");

        do{
            printf("How many ORANGES do you need? :");
            scanf("%d", &req_oranges);

            if(req_oranges < 0){
                printf("ERROR: Value must be 0 or more.\n");
            }
        } while (req_oranges < 0);

        printf("\n");

        do{
            printf("How many PEARS do you need? :");
            scanf("%d", &req_pears);

            if(req_pears < 0){
                printf("ERROR: Value must be 0 or more.\n");
            }
        } while (req_pears < 0);

        printf("\n");

        do{
            printf("How many TOMATOES do you need? :");
            scanf("%d", &req_tomatoes);

            if(req_tomatoes < 0){
                printf("ERROR: Value must be 0 or more.\n");
            }
        } while (req_tomatoes < 0);

        printf("\n");

        do{
            printf("How many CABBAGES do you need? :");
            scanf("%d", &req_cabbages);

            if(req_cabbages < 0){
                printf("ERROR: Value must be 0 or more.\n");
            }
        } while (req_cabbages < 0);

        printf("\n--------------------------\n");
        printf("Time to pick the products!\n"); 
        printf("--------------------------\n");

        // Ürünleri Toplama
        if (req_apples > 0) {
            do {
                printf("Pick some APPLES... how many did you pick?: ");
                scanf("%d", &picked);

                if (picked <= 0) {
                    printf("ERROR: You must pick at least 1!\n");
                } else if (picked > req_apples) {
                    printf("You picked too many... only %d more APPLE(S) are needed.\n", req_apples);
                } else {
                    req_apples -= picked;
                    if (req_apples > 0) {
                        printf("Looks like we still need some APPLES...\n");
                    }
                    else {
                        printf("Great, that's the apples done!\n\n");
                    }
                }
            } while (req_apples > 0);
        }

        if (req_oranges > 0) {
            do {
                printf("Pick some ORANGES... how many did you pick?: ");
                scanf("%d", &picked);

                if (picked <= 0) {
                    printf("ERROR: You must pick at least 1!\n");
                } else if (picked > req_oranges) {
                    printf("You picked too many... only %d more ORANGE(S) are needed.\n", req_oranges);
                } else {
                    req_oranges -= picked;
                    if (req_oranges > 0) {
                        printf("Looks like we still need some ORANGES...\n");
                    }
                    else {
                        printf("Great, that's the oranges done!\n\n");
                    }
                }
            } while (req_oranges > 0);
        }

        if (req_pears > 0) {
            do {
                printf("Pick some PEARS... how many did you pick?: ");
                scanf("%d", &picked);

                if (picked <= 0) {
                    printf("ERROR: You must pick at least 1!\n");
                } else if (picked > req_pears) {
                    printf("You picked too many... only %d more PEAR(S) are needed.\n", req_pears);
                } else {
                    req_pears -= picked;
                    if (req_pears > 0) {
                        printf("Looks like we still need some PEARS...\n");
                    }
                    else {
                        printf("Great, that's the pears done!\n\n");
                    }
                }
            } while (req_pears > 0);
        }

        if (req_tomatoes > 0) {
            do {
                printf("Pick some TOMATOES... how many did you pick?: ");
                scanf("%d", &picked);

                if (picked <= 0) {
                    printf("ERROR: You must pick at least 1!\n");
                } else if (picked > req_tomatoes) {
                    printf("You picked too many... only %d more TOMATO(S) are needed.\n", req_tomatoes);
                } else {
                    req_tomatoes -= picked;
                    if (req_tomatoes > 0) {
                        printf("Looks like we still need some TOMATOES...\n");
                    }
                    else {
                        printf("Great, that's the tomatoes done!\n\n");
                    }
                }
            } while (req_tomatoes > 0);
        }

        if (req_cabbages > 0) {
            do {
                printf("Pick some CABBAGES... how many did you pick?: ");
                scanf("%d", &picked);

                if (picked <= 0) {
                    printf("ERROR: You must pick at least 1!\n");
                } else if (picked > req_cabbages) {
                    printf("You picked too many... only %d more CABBAGE(S) are needed.\n", req_cabbages);
                } else {
                    req_cabbages -= picked;
                    if (req_cabbages > 0) {
                        printf("Looks like we still need some CABBAGES...\n");
                    }
                    else {
                        printf("Great, that's the cabbages done!\n\n");
                    }
                }
            } while (req_cabbages > 0);
        }

    printf("All the items are picked!\n\n");
        
        // Alisveris sonu devam karari
        printf("Do another shopping? (0=NO): ");
        scanf("%d", &keep_shopping);
        printf("\n");

    } while (keep_shopping != 0);
    printf("Your tasks are done for today - enjoy your free time!\n");
    
    return 0;
}
