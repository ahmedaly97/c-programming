#include <stdio.h>
#include<math.h>


/*******************************************************************
**	Power function :  A function that                             **
**		takes:                                                    **
**			1-base 2-exponent as an arguments                     **
**		returns:                                                  **
**			the power                                             **
********************************************************************/
float power( float base , float exp)
{
	
	float result = 1;
	
	/* for loop begins with the exp and decrements till reaching before zero*/
	for(exp ; exp>0 ;exp--)
	{
		/*eaxh iteration the result is updated aas it is multimplied by the base 1 time */
		result =result*base;
		
	}
	return result; 
	
}

/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------------------*/


/**************************************************************************
** 	Swap function :  function that                                       **
** 		takes:                                                           **
** 			1-pointer to num1 2-pointer to num2 as an arguments          **
** 		returns:                                                         **
** 			void                                                         **
** 																		 **
** -we must pass the pointers to return 2 values from one function       **
** -if no pointers are used the function will swap its local variables   **
**  that will be destroyed after the functiom terminatesand no swapping  **
**  will be in main funcion 			                                 **
**************************************************************************/
void swap (int* x , int* y)
{
	/* temp variable */
	int temp=0; 
	
	/*dereferencing (getting) the content of x and storing it in temp */
	temp=*x;
	
	/*getting the content of y and storing it after dereferencing(accessing) x */
	*x=*y;
	
	/*dereferencing y and assigning temp inside it */
	*y=temp;
}



/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/*******************************************************************
**	IsPostive function :  A function that                         **
**		takes:                                                    **
**			1-an integer number                   				  **
**		returns:                                                  **
**			int (state:1 pos  0zero  -1 neg)                      **
********************************************************************/

int IsPostive (int x)
{
	
	if(x>0) 
	{
		return 1;
	}
    else if(x<0)
	{
		return -1;
	}
	else
	{
		return 0;
	}
	
}

/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/*******************************************************************
**	factorial function :  A function that                         **
**		takes:                                                    **
**			1-an integer number                   				  **
**		returns:                                                  **
**			the factorial of the given number                     **
********************************************************************/

int factorial (int x)
{
	int i , fact=1;
	
	for(i=x; i>0 ; i--)
	{
		fact=fact*i;
	}
	
	return fact;
}

/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/*******************************************************************
**	perfect square function :  A function that                    **
**		takes:                                                    **
**			1-an integer number                   				  **
**		returns:                                                  **
**			state ( 1 perfect sqr    0not a perfect sqr  )        **
********************************************************************/

int IsPerfectSquare (int x)
{
	/*getting the square root of the number then
	casting it into integer as the square root function
	returns float then multiply the sqrt * sqrt to get the original value and check */
	if ((int)sqrt(x) * (int)sqrt(x) == x )
	{
		return 1;
	}
	else
	{
		return 0;
	}

}


/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/*******************************************************************
**	Simple Calculator function :  A function that                 **
**		takes:                                                    **
**			1-two integer numbers  2- char operator            	  **
**		returns:                                                  **
**			the result of the operation					          **
********************************************************************/

int SimpleCalculator (int x ,char op, int y)
{
	switch(op)
	{
		case '+':
		   return x+y;
		   break;
		case '-':
		     return x-y;
		   break;
		case '*':
		     return x*y;
		   break;
	    case '/':
		     return x/y;
		   break;
	    default:
           printf("the entered op is not allowed"); 		
	}
}








