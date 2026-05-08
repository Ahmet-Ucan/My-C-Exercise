/*
*****************************************************************************
                          Workshop - #2 (P2)
*****************************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    const double TAX = 0.13;
    const char patSize = 'S', salSize = 'M', tomSize = 'L';

    double dSmall, dMedium, dLarge;
    int sPrice, mPrice, lPrice;    
    int qPatty, qSally, qTommy;

    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf", &dSmall);
    sPrice = (int)(dSmall * 100 + 0.5);

    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &dMedium);
    mPrice = (int)(dMedium * 100 + 0.5);

    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &dLarge);
    lPrice = (int)(dLarge * 100 + 0.5);

    // 2. Müşteri Siparişlerini Al
    printf("\nPatty's shirt size is '%c'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &qPatty);

    printf("\nTommy's shirt size is '%c'\n", tomSize);
    printf("Number of shirts Tommy is buying: ");
    scanf("%d", &qTommy);

    printf("\nSally's shirt size is '%c'\n", salSize);
    printf("Number of shirts Sally is buying: ");
    scanf("%d", &qSally);

    int pSub = sPrice * qPatty;
    int pTax = (int)(pSub * TAX + 0.5);
    int pTotal = pSub + pTax;

    int sSub = mPrice * qSally;
    int sTax = (int)(sSub * TAX + 0.5);
    int sTotal = sSub + sTax;

    int tSub = lPrice * qTommy;
    int tTax = (int)(tSub * TAX + 0.5);
    int tTotal = tSub + tTax;

    int totalSub = pSub + sSub + tSub;
    int totalTax = pTax + sTax + tTax;
    int totalAll = pTotal + sTotal + tTotal;

    printf("\nCustomer Size Price    Qty Sub-Total     Tax     Total\n");
    printf("-------- ---- -------- --- ---------- -------- --------\n");
    printf("Patty    %-4c %8.2lf %3d %10.4lf %8.4lf %8.4lf\n", patSize, (double)sPrice/100, qPatty, (double)pSub/100, (double)pTax/100, (double)pTotal/100);
    printf("Sally    %-4c %8.2lf %3d %10.4lf %8.4lf %8.4lf\n", salSize, (double)mPrice/100, qSally, (double)sSub/100, (double)sTax/100, (double)sTotal/100);
    printf("Tommy    %-4c %8.2lf %3d %10.4lf %8.4lf %8.4lf\n", tomSize, (double)lPrice/100, qTommy, (double)tSub/100, (double)tTax/100, (double)tTotal/100);
    printf("-------- ---- -------- --- ---------- -------- --------\n");
    printf("%33.4lf %8.4lf %8.4lf\n\n", (double)totalSub/100, (double)totalTax/100, (double)totalAll/100);

    int balance, qty;

    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n");
    printf("Sales EXCLUDING tax\n");
    printf("Coin         Qty   Balance\n");
    printf("-------- -------- --------\n");
    balance = totalSub; 
    printf("%22.4lf\n", (double)balance/100);

    qty = balance / 200; balance %= 200; printf("Toonies  %8d %8.4lf\n", qty, (double)balance/100);
    qty = balance / 100; balance %= 100; printf("Loonies  %8d %8.4lf\n", qty, (double)balance/100);
    qty = balance / 25;  balance %= 25;  printf("Quarters %8d %8.4lf\n", qty, (double)balance/100);
    qty = balance / 10;  balance %= 10;  printf("Dimes    %8d %8.4lf\n", qty, (double)balance/100);
    qty = balance / 5;   balance %= 5;   printf("Nickels  %8d %8.4lf\n", qty, (double)balance/100);
    qty = balance / 1;   balance %= 1;   printf("Pennies  %8d %8.4lf\n", qty, (double)balance/100);
    printf("Average cost/shirt: $%.4lf\n\n", (double)totalSub / (qPatty + qSally + qTommy) / 100);

    printf("Sales INCLUDING tax\n");
    printf("Coin         Qty   Balance\n");
    printf("-------- -------- --------\n");
    balance = totalAll;
    printf("%22.4lf\n", (double)balance/100);

    qty = balance / 200; balance %= 200; printf("Toonies  %8d %8.4lf\n", qty, (double)balance/100);
    qty = balance / 100; balance %= 100; printf("Loonies  %8d %8.4lf\n", qty, (double)balance/100);
    qty = balance / 25;  balance %= 25;  printf("Quarters %8d %8.4lf\n", qty, (double)balance/100);
    qty = balance / 10;  balance %= 10;  printf("Dimes    %8d %8.4lf\n", qty, (double)balance/100);
    qty = balance / 5;   balance %= 5;   printf("Nickels  %8d %8.4lf\n", qty, (double)balance/100);
    qty = balance / 1;   balance %= 1;   printf("Pennies  %8d %8.4lf\n", qty, (double)balance/100);
    printf("Average cost/shirt: $%.4lf\n", (double)totalAll / (qPatty + qSally + qTommy) / 100);

    return 0;
}
