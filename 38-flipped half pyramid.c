#include<stdio.h>
#include"help.h"
																				
/**************************************************************/         
/**************************************************************/         
/********************  a program to draw **********************/
/*		    *
		   **
		  ***
		 ****
		***** /
/**************************************************************/			
/**************************************************************/							


int main ()
{

		/*variables to store rows , loops couters*/
		int rows , line , stars , spaces;
		
		
		/*taking the number of rows from the user*/
		printf("enter the number of rows : ");
		scanf("%d",&rows);
		
		
		/*check for the given number of rows*/
		if (IsPostive (rows) >0)
		{
			
			/*outer for loop to go to a new line*/
			for(line=1 ; line<= rows ; line++)
			{
				/*inner for loop 1 to print the spaces */
				for(spaces=1; spaces <=rows-line ; spaces++)
				{
						/*number of spaces in each row =needed rows- current row*/
						/*print space*/
						printf(" ");
				}
							
				/*inner for loop 2 to print the pattern */
				for(stars=1; stars <=line ; stars++)
				{
						/*print star*/
						printf("*");
				}
				
				printf("\n");
				
			}
			
		}
		else
		{
			printf("number of rows should be positive");
		}





	return 0;
}