#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

#define T 100

void ex81();
void ex82();
void ex85();
void ex86();
void ex87();
void ex88();
void ex89();
void ex811();



int main(){
	//ex81(); //EXERCÍCIO 8.1

	//ex82(); //EXERCÍCIO 8.2
	//ex85(); //EXERCÍCIO 8.5
	//ex86(); //EXERCÍCIO 8.6
	//ex87(); //EXERCÍCIO 8.7
	//ex88(); //EXERCÍCIO 8.8
	//ex89(); //EXERCÍCIO 8.9
	ex811(); //EXERCÍCIO 8.11
	
	return 0;
}


void ex81(){
	char c;
	int x, y, z;
	float d, e, f;
	char *ptr;
	char s1[T], s2[T] = "astrings2naotemnada";


	//a
		 c = getchar();
		 c = toupper(c);
		 printf("%c\n",c);

	//b
		 printf("%c %s\n", c, isdigit(c)?"é um digito":"nao eh um digito");

	//c

		printf("%li\n",atol("1234567"));

	//d
	 	printf("%c %s %s\n", c, iscntrl(c)?"é um":"nao eh um", "char de controle");

	//e
	 	scanf("%99s",s1);

	 //f
	 	puts(s1);

	 //g
	 	ptr = strchr(s1,c);
	 	printf("%p\n",ptr);

	 //h
	 	putchar(c);

	 //i
	 	printf("%f\n",atof("8.63582"));

	 //j
		printf("%c %s %s\n", c, isalpha(c)?"é uma":"nao eh uma", "letra");

	//k
		

	//l
		ptr = strstr(s1,s2);

	//m
		printf("%c %s %s\n", c, isprint(c)?"é um":"nao eh um", "char imprimivel");

	//n
		sscanf("1.27 10.3 9.342","%f%f%f",&d,&e,&f);
		printf("%.3f\n%.3f\n%.3f\n",d,e,f);

	//o
		strcpy(s1,s2);

	//p
		ptr = strpbrk(s1,s2);
		printf("%p\n",ptr);

	//q
		printf("%i\n",strcmp(s1,s2));

	//r
		ptr = strchr(s1,c);
		printf("%p\n",ptr);

	//s
		sprintf(s1,"%i%i%i",x,y,z);
		puts(s1);

	//t
		strncat(s1,s2,10);
		puts(s1);

	//u
		printf("%li\n",strlen(s1));

	//v
		printf("%i\n",atoi("-21"));

	//w
		ptr = strtok(s2,",");
		printf("%c",*ptr);

}


void ex82(){

	char vogal[] = {'A','E','I','O','U'};
	//char vogal[] = {"AEIOU"};
	//char *vogal = "AEIOU";

	puts(vogal);

}

void ex85(){

	char c = getchar();

	printf("1.isdigit(c) = %i\n",isdigit(c));
	printf("2.isalpha(c) = %i\n",isalpha(c));
	printf("3.isalnum(c) = %i\n",isalnum(c));
	printf("4.isxdigit(c) = %i\n",isxdigit(c));
	printf("5.islower(c) = %i\n",islower(c));
	printf("6.isupper(c) = %i\n",isupper(c));
	printf("7.tolower(c) = %c\n",tolower(c));
	printf("8.toupper(c) = %c\n",toupper(c));
	printf("9.ispunct(c) = %i\n",ispunct(c));
	printf("8.isprint(c) = %i\n",isprint(c));
	printf("8.isspace(c) = %i\n",isspace(c));
	printf("8.iscntrl(c) = %i\n",iscntrl(c));
	printf("8.isgraph(c) = %i\n",isgraph(c));

}

void ex86(){

	char s1[100];
	int i;

	fgets(s1,100,stdin);
	
	for(i=0;s1[i] != '\0'; i++)
		putchar(tolower(s1[i]));
	
	for(i=0;s1[i] != '\0'; i++)
		putchar(toupper(s1[i]));
	
}

void ex87(){

	char s1[4] = "32";
	char s2[4] = "32";
	char s3[4] = "32";
	char s4[4] = "32";

	long sum = 0;

	sum += strtol(s1,NULL,0);
	sum += strtol(s2,NULL,0);
	sum += strtol(s3,NULL,0);
	sum += strtol(s4,NULL,0);
	
	printf("SOMA = %li\n",sum);

}

void ex88(){

	char s1[] = "12.3";
	char s2[] = "12.3";
	char s3[] = "12.3";
	char s4[] = "12.3";

	double sum = 0;

	sum += strtod(s1,NULL);
	sum += strtod(s2,NULL);
	sum += strtod(s3,NULL);
	sum += strtod(s4,NULL);

	printf("SOMA = %.2f\n",sum);

}

void ex89(){

	char s1[100],s2[100];

	fgets(s1,T,stdin);
	fgets(s2,T,stdin);

	if(strcmp(s1,s2) > 0)
		puts("s1 é maior que s2");
	else if (strcmp(s1,s2) == 0)
		puts("s1 eh igual a s2");
	else
		puts("s1 eh menor que s2");
		
}

void ex811(){

	char *a[5] = {"o ","um ", "algum ", "todo " ,"qualquer "};
	char *s[5] = {"menino ","homem ", "cachorro ", "carro ", "gato " };
	char *v[5] = {"passou ","pulou ", "correu ", "saltos ", "andou "};
	char *p[5] = {"sobre ", "sob ","ante ", "ate ","com "};
	char frase[100];

	srand(time(NULL));

	int i = 0,j;

	for(i=0;i<=20;i++){
		for(j=0;frase[j] != '\0'; j++)
			frase[j] = '\0';

		j = rand() % 4;
		strcat(frase,s[j]);

		j = rand() % 4;
		strcat(frase,v[j]);

		j = rand() % 4;
		strcat(frase,p[j]);

		j = rand() % 4;
		strcat(frase,a[j]);
		
		j = rand() % 4;
		strcat(frase,s[j]);

		printf("%s\n",frase);

	}



}