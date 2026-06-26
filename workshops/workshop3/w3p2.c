/*
*****************************************************************************
                          Workshop - #3 (P2)

*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;
    
    char type1, type2, type3;
    char grind1, grind2, grind3;
    char cream1, cream2, cream3;
    int weight1, weight2, weight3;
    double temp1, temp2, temp3;
    
    printf("Take a Break - Coffee Shop\n");
    printf("==========================\n\n");
    printf("Enter the coffee product information being sold today...\n\n");
   
    printf("COFFEE-1...\n"); 
    printf("Type ([L]ight, [B]lend): ");
    scanf(" %c", &type1);
    printf("Grind size ([C]ourse, [F]ine): ");
    scanf(" %c", &grind1);
    printf("Bag weight (g): ");
    scanf("%d", &weight1);
    printf("Best served with cream ([Y]es, [N]o): ");
    scanf(" %c", &cream1);
    printf("Ideal serving temperature (Celsius): ");
    scanf("%lf", &temp1);
	
	printf("\nCOFFEE-2...\n");    
    printf("Type ([L]ight, [B]lend): ");
    scanf(" %c", &type2);
    printf("Grind size ([C]ourse, [F]ine): ");
    scanf(" %c", &grind2);
    printf("Bag weight (g): ");
    scanf("%d", &weight2);
    printf("Best served with cream ([Y]es, [N]o): ");
    scanf(" %c", &cream2);
    printf("Ideal serving temperature (Celsius): ");
    scanf("%lf", &temp2);

    printf("\nCOFFEE-3...\n");
    printf("Type ([L]ight, [B]lend): ");
    scanf(" %c", &type3);
    printf("Grind size ([C]ourse, [F]ine): ");
    scanf(" %c", &grind3);
    printf("Bag weight (g): ");
    scanf("%d", &weight3);
    printf("Best served with cream ([Y]es, [N]o): ");
    scanf(" %c", &cream3);
    printf("Ideal serving temperature (Celsius): ");
    scanf("%lf", &temp3);
    
    printf("\n");
    printf("---+---------------+---------------+---------------+-------+--------------\n");
    printf("   |    Coffee     |	Coffee     |   Packaged    | Best  |   Serving    \n");
    printf("   |     Type      |  Grind Size   |  Bag Weight   | Served| Temperature  \n");
    printf("   +-------+-------+--------+------+------+--------+ With  +--------------\n");
    printf("ID | Light | Blend | Course | Fine |  (G) | Lbs    | Cream |   (C) |  (F) \n");
    printf("---+-------+-------+--------+------+------+--------+-------+-------+------\n");
    printf(" 1 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n",
		  (type1 == 'L' || type1 == 'l'), (type1 == 'B' || type1 == 'b'), (grind1 == 'C' || grind1 == 'c'),
	      (grind1 == 'F' || grind1 == 'f'), weight1, (weight1 / GRAMS_IN_LBS), (cream1 == 'Y' || cream1 == 'y'),
	      temp1, ((temp1 * 1.8) + 32.0));   	
   printf(" 2 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n",
		  (type2 == 'L' || type2 == 'l'), (type2 == 'B' || type2 == 'b'), (grind2 == 'C' || grind2 == 'c'),
	      (grind2 == 'F' || grind2 == 'f'), weight2, (weight2 / GRAMS_IN_LBS), (cream2 == 'Y' || cream2 == 'y'),
	      temp2, ((temp2 * 1.8) + 32.0));   
   printf(" 3 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n",
		  (type3 == 'L' || type3 == 'l'), (type3 == 'B' || type3 == 'b'), (grind3 == 'C' || grind3 == 'c'),
	      (grind3 == 'F' || grind3 == 'f'), weight3, (weight3 / GRAMS_IN_LBS), (cream3 == 'Y' || cream3 == 'y'),
	      temp3, ((temp3 * 1.8) + 32.0));
	
	 printf("\nEnter how you like your coffee and the coffee maker equipment you use...\n");
	
	char pref_strength;
	char pref_cream;
	char maker;
	int num_serving;
	 
	printf("Coffee strength ([M]ild, [R]ich): "); 
	scanf(" %c", &pref_strength);
	printf("Do you like your coffee with cream ([Y]es, [N]o): "); 
	scanf(" %c", &pref_cream);
	printf("Typical number of daily servings: "); 
	scanf("%d", &num_serving);
	printf("Maker ([R]esidential, [C]ommercial): "); 
	scanf(" %c", &maker);
	
	printf("\nThe below table shows how your preferences align to the available products:\n\n");
	
	printf("--------------------+--------------------+-------------+-------+--------------\n");
	printf("  |     Coffee      |        Coffee      |   Packaged  | With  |   Serving    \n");
	printf("ID|      Type       |      Grind Size    |  Bag Weight | Cream | Temperature  \n");
	printf("--+-----------------+--------------------+-------------+-------+--------------\n");
	
	printf(" 1|       %d         |      %d      |   %d   |      %d\n", 
        (((pref_strength == 'M' || pref_strength == 'm') && (type1 == 'L' || type1 == 'l')) || ((pref_strength == 'R' || pref_strength == 'r') && (type1 == 'B' || type1 == 'b'))),
        (((num_serving >= 1 && num_serving <= 4) && (weight1 >= 0 && weight1 <= 250)) || ((num_serving >= 5 && num_serving <= 9) && (weight1 == 500)) || ((num_serving >= 10) && (weight1 == 1000))),
        (((pref_cream == 'Y' || pref_cream == 'y') && (cream1 == 'Y' || cream1 == 'y')) || ((pref_cream == 'N' || pref_cream == 'n') && (cream1 == 'N' || cream1 == 'n'))),
        (((maker == 'R' || maker == 'r') && (temp1 >= 60.0 && temp1 <= 69.9)) || ((maker == 'C' || maker == 'c') && (temp1 >= 70.0))));

    printf(" 2|       %d         |      %d      |   %d   |      %d\n", 
        (((pref_strength == 'M' || pref_strength == 'm') && (type2 == 'L' || type2 == 'l')) || ((pref_strength == 'R' || pref_strength == 'r') && (type2 == 'B' || type2 == 'b'))),
        (((num_serving >= 1 && num_serving <= 4) && (weight2 >= 0 && weight2 <= 250)) || ((num_serving >= 5 && num_serving <= 9) && (weight2 == 500)) || ((num_serving >= 10) && (weight2 == 1000))),
        (((pref_cream == 'Y' || pref_cream == 'y') && (cream2 == 'Y' || cream2 == 'y')) || ((pref_cream == 'N' || pref_cream == 'n') && (cream2 == 'N' || cream2 == 'n'))),
        (((maker == 'R' || maker == 'r') && (temp2 >= 60.0 && temp2 <= 69.9)) || ((maker == 'C' || maker == 'c') && (temp2 >= 70.0))));

    printf(" 3|       %d         |      %d      |   %d   |      %d\n", 
        (((pref_strength == 'M' || pref_strength == 'm') && (type3 == 'L' || type3 == 'l')) || ((pref_strength == 'R' || pref_strength == 'r') && (type3 == 'B' || type3 == 'b'))),
        (((num_serving >= 1 && num_serving <= 4) && (weight3 >= 0 && weight3 <= 250)) || ((num_serving >= 5 && num_serving <= 9) && (weight3 == 500)) || ((num_serving >= 10) && (weight3 == 1000))),
        (((pref_cream == 'Y' || pref_cream == 'y') && (cream3 == 'Y' || cream3 == 'y')) || ((pref_cream == 'N' || pref_cream == 'n') && (cream3 == 'N' || cream3 == 'n'))),
        (((maker == 'R' || maker == 'r') && (temp3 >= 60.0 && temp3 <= 69.9)) || ((maker == 'C' || maker == 'c') && (temp3 >= 70.0))));

    printf("\nEnter how you like your coffee and the coffee maker equipment you use...\n\n");
    
    printf("Coffee strength ([M]ild, [R]ich): ");
    scanf(" %c", &pref_strength);
    
    printf("Do you like your coffee with cream ([Y]es, [N]o): ");
    scanf(" %c", &pref_cream);
    
    printf("Typical number of daily servings: ");
    scanf("%d", &num_serving);
    
    printf("Maker ([R]esidential, [C]ommercial): ");
    scanf(" %c", &maker);

    printf("\nThe below table shows how your preferences align to the available products:\n\n");
    printf("--------------------+-------------+-------+--------------\n");
    printf("  |     Coffee      |  Packaged   | With  |   Serving\n");
    printf("ID|      Type       | Bag Weight  | Cream | Temperature\n");
    printf("--+-----------------+-------------+-------+--------------\n");

    printf(" 1|       %d         |      %d      |   %d   |      %d\n", 
        (((pref_strength == 'M' || pref_strength == 'm') && (type1 == 'L' || type1 == 'l')) || ((pref_strength == 'R' || pref_strength == 'r') && (type1 == 'B' || type1 == 'b'))),
        (((num_serving >= 1 && num_serving <= 4) && (weight1 >= 0 && weight1 <= 250)) || ((num_serving >= 5 && num_serving <= 9) && (weight1 == 500)) || ((num_serving >= 10) && (weight1 == 1000))),
        (((pref_cream == 'Y' || pref_cream == 'y') && (cream1 == 'Y' || cream1 == 'y')) || ((pref_cream == 'N' || pref_cream == 'n') && (cream1 == 'N' || cream1 == 'n'))),
        (((maker == 'R' || maker == 'r') && (temp1 >= 60.0 && temp1 <= 69.9)) || ((maker == 'C' || maker == 'c') && (temp1 >= 70.0))));

    printf(" 2|       %d         |      %d      |   %d   |      %d\n", 
        (((pref_strength == 'M' || pref_strength == 'm') && (type2 == 'L' || type2 == 'l')) || ((pref_strength == 'R' || pref_strength == 'r') && (type2 == 'B' || type2 == 'b'))),
        (((num_serving >= 1 && num_serving <= 4) && (weight2 >= 0 && weight2 <= 250)) || ((num_serving >= 5 && num_serving <= 9) && (weight2 == 500)) || ((num_serving >= 10) && (weight2 == 1000))),
        (((pref_cream == 'Y' || pref_cream == 'y') && (cream2 == 'Y' || cream2 == 'y')) || ((pref_cream == 'N' || pref_cream == 'n') && (cream2 == 'N' || cream2 == 'n'))),
        (((maker == 'R' || maker == 'r') && (temp2 >= 60.0 && temp2 <= 69.9)) || ((maker == 'C' || maker == 'c') && (temp2 >= 70.0))));

    printf(" 3|       %d         |      %d      |   %d   |      %d\n\n", 
        (((pref_strength == 'M' || pref_strength == 'm') && (type3 == 'L' || type3 == 'l')) || ((pref_strength == 'R' || pref_strength == 'r') && (type3 == 'B' || type3 == 'b'))),
        (((num_serving >= 1 && num_serving <= 4) && (weight3 >= 0 && weight3 <= 250)) || ((num_serving >= 5 && num_serving <= 9) && (weight3 == 500)) || ((num_serving >= 10) && (weight3 == 1000))),
        (((pref_cream == 'Y' || pref_cream == 'y') && (cream3 == 'Y' || cream3 == 'y')) || ((pref_cream == 'N' || pref_cream == 'n') && (cream3 == 'N' || cream3 == 'n'))),
        (((maker == 'R' || maker == 'r') && (temp3 >= 60.0 && temp3 <= 69.9)) || ((maker == 'C' || maker == 'c') && (temp3 >= 70.0))));

    printf("Hope you found a product that suits your likes!\n");
		    
		  	      
        // Note:
        // Convert the Celsius to Fahrenheit given the following formula:
        // fahrenheit = (celsius * 1.8) + 32.0);

    return 0;
}
