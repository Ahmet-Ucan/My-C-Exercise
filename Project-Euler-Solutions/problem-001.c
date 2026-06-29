#include <stdio.h>

int main()
{
	int sub = 0;
	int i;
	int j = 1;
	
	for(i = 0; i < 1001; i++){
		if((i % 3 == 0) || (i % 5 == 0)){
			printf("%dst multiple = %d\n", j , i);
			sub = sub + i;
			j++;	
			}
			
		}
	printf("\nthe num of all the multiples of 3 or 5 below 1000 = %d", j-1);	
	printf("\nthe sum of all the multiples of 3 or 5 below 1000 = %d", sub);
	return 0;
}


