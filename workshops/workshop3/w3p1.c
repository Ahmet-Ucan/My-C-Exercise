/*
*****************************************************************************
                          Workshop - #3 (P1)
*****************************************************************************
*/

#include <stdio.h>

int main(void)
{
    // You must use this variable in #3 data analysis section!
    const double test_value = 330.99;
	
	const int product1_id = 111; 
	const double product1_price = 111.49;
	const char product1_tax = 'Y';
	
	const int product2_id = 222;
	const double product2_price = 222.99;
	const char product2_tax = 'N';
	
	const int product3_id = 111;
	const double product3_price = 334.49;
	const char product3_tax = 'N';
	
	const double average_price = ( product1_price + product2_price + product3_price) / 3;
	
	printf("Product Information \n");
	printf("=================== \n");
	printf("Product-1 (ID:%d)\n", product1_id);
	printf("  Taxed: %c\n", product1_tax);
	printf("  Price: $%.4f\n\n", product1_price);
	
	printf("Product-2 (ID:%d)\n", product2_id);
	printf("  Taxed: %c\n", product2_tax);
	printf("  Price: $%.4f\n\n", product2_price);
	
	printf("Product-3 (ID:%d)\n", product3_id);
	printf("  Taxed: %c\n", product3_tax);
	printf("  Price: $%.4f\n\n", product3_price);
	
	printf("The average of all prices is: $%.4f\n\n", average_price);
	
	printf("About Relational and Logical Expressions!\n");
    printf("========================================\n");
  	printf("1. These expressions evaluate to TRUE or FALSE\n");
  	printf("2. FALSE: is always represented by integer value 0\n");
 	printf("3. TRUE: is represented by any integer value other than 0\n\n");
    
  	printf("Some Data Analysis...\n");
  	printf("=====================\n");	
	printf("1. Is product 1 taxable? -> %d\n\n", product1_tax == 'Y');
  	printf("2. Are products 2 and 3 both NOT taxable (N)? -> %d\n\n",
			((product2_tax == 'N') && (product3_tax == 'N')));
  	printf("3. Is product 3 less than test_value ($%.2f)? -> %d\n\n",
			test_value, (product3_price < test_value) );
  	printf("4. Is the price of product 3 more than both product 1 and 2 combined? -> %d\n\n",
			product3_price > (product1_price + product2_price));
  	printf("5. Is the price of product 1 equal to or more than the price difference\n");
  	printf("   of product 3 LESS product 2? -> %d (price difference: $%.2f)\n\n",
			(product1_price >= (product3_price - product2_price)),
			(product3_price - product2_price));    
  	printf("6. Is the price of product 2 equal to or more than the average price? -> %d\n\n",
			product2_price >= average_price);
	printf("7. Based on product ID, product 1 is unique -> %d\n\n",
			(product1_id != product2_id) && (product1_id != product3_id));
  	printf("8. Based on product ID, product 2 is unique -> %d\n\n",
			(product1_id != product2_id) && (product2_id != product3_id));
	printf("9. Based on product ID, product 3 is unique -> %d\n\n",
			(product3_id != product2_id) && (product1_id != product3_id));		
    
    return 0;
}
