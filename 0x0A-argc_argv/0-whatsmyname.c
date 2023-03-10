<<<<<<< HEAD
#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
=======
#include <stdio.h>                                                                                                                   
#include "main.h"                                                                                                                                                                                                                                                         
/**                                                                                                                                  
 * main - Print the name of the program                                                                                              
 * @argc: Count arguments                                                                                                            
 * @argv: Arguments                                                                                                                  
 *                                                                                                                                   
 * Return: Always 0 (Success)                                                                                                        
 */                                                                                                                                                                                                                                                                      
int main(int argc, char *argv[])                                                                                                     
{                                                                                                                                    
(void) argc;                                                                                                                         
printf("%s\n", argv[0]);                                                                                                                                                                                                                                               
return (0);                                                                                                                          
>>>>>>> 556c136cc96f9521f7d6589a60af979fcaea570b
}
