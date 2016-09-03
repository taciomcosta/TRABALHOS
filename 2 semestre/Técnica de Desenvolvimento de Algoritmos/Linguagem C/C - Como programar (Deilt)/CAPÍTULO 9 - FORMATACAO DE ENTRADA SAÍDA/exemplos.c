//	ESPECIFICADORES	
	/* DE INTEIROS */
	#include <stdio.h>
	int main() {

	printf("%d\n", 455);
	printf("%i\n", 455); /* i faz o mesmo que d em printf */
	printf("%d\n", +455);
	printf("%d\n", -455);
	printf("%hd\n", 32CkO0);
	printf("%ld\n", 2000000000);
	printf("%o\n", 455);
	printf("%d\n" , 455);
	printf("%u\n", -455);
	printf("%x\n", 455);
	printf("%X\n", 455);
	return 0;
	}


	/* DE PONTO FLUTUANTE*/
	#include <stdio.h>
	int main() {
		printf("%e\n", 1234567.89);
		printf("%e\n", +1234567.89);
		printf("%e\n", -1234567.89);
		printf("%E\n", 1234567.89);
		printf("%f\n", 1234567.89);
		printf("%g\n", 1234567.89);
		printf("%G\n", 1234567.89);
		return 0;
	}


	/* DE STRINGS E CHAR*/
	#include <stdio.h>
	int main() {
		char character = 'A';
		char string[] = "Isto e uma string";
		char *stringPtr = "Isto também e uma string";
		printf("%c\n", character);
		printf("%s\n", "Isto e uma string");
		printf("%s\n", string);
		printf("%s\n", stringPtr);
		return 0;
	}


	/* OUTROS*/
	#include <stdio.h>
	main() {
		int *ptr;
		int x = 12345, y;
		ptr = &x; 3
		printf("O valor de ptr e %p\n", ptr);
		printf("O endereço de x e %p\n\n", &x);
		printf("O total de caracteres impresso nesta linha e:%n", &y);
		printf(" %d\n\n", y) ;
		y = printf("Esta linha tem 28 caracteres\n");
		printf("%d caracteres foram impressos\n\n", y);
		printf("Imprimindo um %% em um formato de string de controle\n");
		return 0;
		}


// IMPRIMINDO INTEIROS ALINHADOS PELA DIREITA 
	#include <stdio.h>
	int main() {
		printf("%4d\n", 1);
		printf("%4d\n", 12);
		printf("%4d\n", 123);
		printf("%4d\n", 1234);
		printf("%4d\n\n", 12345);
		printf("%4d\n", -1);
		printf("%4d\n", -12);
		printf("%4d\n", -123);
		printf("%4d\n", -1234);
		printf("%4d\n", -12345);
		return 0;
	}


//	SINALIZADORES (FLAGS) NA STRING DE CONTROLE

	/* Alinhando valores pela esquerda e pela direita */
		#include <stdio.h>
		main(){
		printf("%10s%10d%10c%10f\n\n", "hello", 7, 'a', 1.23);
		printf("%-10s%-10d%-10c%-10f\n", "hello", 7, 'a', 1.23);
		return 0;


		}


	/* Imprimindo números com e sem o sinalizador + */
		#include <stdio.h>
		main() {
		printf("%d\n%d\n", 786, -786);
		printf("%+d\n%+d\n", 786, -786);
		return 0;



		}


	/* Usando o sinalizador # com os especificadores de conversão*/
		#include <stdio.h>
		main() {
		int c = 1427;
		float p = 1427.0;
		printf("%#o\n", c);
		printf("%#x\n", c);
		printf("%#X\n", c);
		printf("\n%g\n", p);
		printf("%#g\n", p);
		return 0;
		
		}

	/* Imprimir com o sinalizador 0 (zero) insere zeros iniciais */
		#include <stdio.h>
		maín(){
			printf("%+09d", 452);
			printf("%09d", 452);
			return 0;
		
		}



//SCANF

		
	/* Usando um conjunto de varredura */
		#include <stdio.h>
		int main (){
			char z [9];
			printf("Digite String: ");
			scanf("%[aeiou]", z); //para inverter a varredura coloque dessa maneira [^aeiou]
			printf("A entrada foi \"%s\"\n", z);
			return 0;
		}


	/* Lendo e ignorando caracteres do fluxo de entrada */
		#include <stdio.h>
		int main() {
			int mesl, dial, anol, mes2, dia2, ano2;
			printf("Digite uma data na forma mm-dd-aa: ");
			scanf("%d%*c%d%c%d", &mesl, &dial, &anol);
			printf("mes = %d dia = %d ano = %d\n\n",mesl, dial, anol);
			printf("Digite uma data na forma mm/dd/aa: ");
			scanf("%d%*c%d%*c%d", &mes2, &dia2, &ano2);
			printf("mes = %d dia = %d ano = %d\n",mes2, dia2, ano2);
			return 0;
		}