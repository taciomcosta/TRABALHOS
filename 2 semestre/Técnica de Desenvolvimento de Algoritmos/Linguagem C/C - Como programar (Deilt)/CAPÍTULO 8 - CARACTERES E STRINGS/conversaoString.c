#include <stdio.h>
#include <stdlib.h>

int main(){

	//***** FUNÇÃO atoi() *****
	int i;
	i = atoi("2593");
	printf("%i\n",i);



	//***** FUNÇÃO atof() *****
	double j;
	j = atoi("2593.23");
	printf("%.2f\n",j);



	//***** FUNÇÃO atol() *****
	long k;
	k = atoi("259231233");
	printf("%li\n",k);



	//*****	FUNCÃO strtod()	*****
	char stringD[] = "51.2 eh um numero";
	char *strDPtr;
	double d;

	d = strtod(stringD,&strDPtr); //--> converte a string para long double
	// d recebe 5101293812		
	//strDPtr recebe " eh um numero", é possível usar o 2° arg como NULL

	printf("%.2f\n",d);
	printf("%s\n",strDPtr);



	//*****	FUNCÃO strtol()	*****
	char stringL[] = "5101293812 eh um numero";
	char *strLPtr;
	long ls;

	ls = strtol(stringL,&strLPtr,0); //--> converte a string para long int
	//  ls recebe 5101293812	
	// 	strLPtr recebe " eh um numero"
	// 0 indica a base, i.e., base 10

	printf("%li\n",ls);
	printf("%s",strLPtr);



	//*****	FUNCÃO strtoul()	*****
	char stringUL[] = "2345 eh um numero";
	char *strULPtr;
	unsigned long uls;

	uls = strtol(stringUL,&strULPtr,0); 
	//  semelhante à função anterior, mas converte a string para unsigned long int	

	printf("%li\n",ls);
	printf("%s",strLPtr);







	return 0;
}