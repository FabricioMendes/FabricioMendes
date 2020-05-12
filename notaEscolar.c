/*
Fabricio Mendes
12/05/2020
*/
#include <stdio.h> /* Include<stdio. h> is a statement which tells the compiler to insert 
the contents of stdio at that particular place. stdio. h is the header file for standard input and output.*/

float n1, n2, media; // Declarate variables 
int main(){ // Main Function
	printf("Digite a primeira nota: "); // show the mensage for user
	scanf("%f",&n1); // save in local memory a float and name the variable n1
	printf("Digite a segunda nota: "); // show the mensage for user
	scanf("%f",&n2); // save in local memory a float and name the variable n2
	media = (n1 + n2) / 2; // result of expression media
	printf("A media eh: %.2f", media); // save in local memory a float and name the variable media
		
	if (media == 0){ // intial condition
		printf(","" Aproveitamento F");	 // if condition is True save in local memory a float and name the variable n1
	}
		else{ // else is condition that to do a test case the if is valse
			
		if (media >= 1 && media < 2){ // second condition
			printf(","" Aproveitamento E"); // if condition is True save in local memory a float and name the variable n1
		}
		else{ // else is condition that to do a test case the previous if is valse
			
		if (media >= 3 && media < 4){ // third condition
			printf(","" Aproveitamento D"); // if condition is True save in local memory a float and name the variable n1
		}
		else;{ // else is condition that to do a test case the previous if is valse
			
		if (media >= 5 && media < 6){ // fourth condition
			printf(","" Aproveitamento C"); // if condition is True save in local memory a float and name the variable n1
		}
		else;{ // else is condition that to do a test case the previous if is valse
			
		if (media >= 7 && media < 8){ // fifth condition
			printf(","" Aproveitamento B"); // if condition is True save in local memory a float and name the variable n1
		}
		else{ // else is condition that to do a test case the previous if is valse
			
	    if (media >= 9){ // six condition
			printf(","" Aproveitamento A"); // if condition is True save in local memory a float and name the variable n1
		}
		else{ // else is condition that to do a test case the previous if is valse
			
	    	printf("média inválida"); // if condition is True save in local memory a float and name the variable n1		
							}		
						    }
						}
					}
				}
			}
		}

