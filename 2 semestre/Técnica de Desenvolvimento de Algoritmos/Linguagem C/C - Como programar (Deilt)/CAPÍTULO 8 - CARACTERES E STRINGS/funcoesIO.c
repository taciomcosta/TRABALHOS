/* Usando gets e putchar */
#include <stdio.h>
int main(){

/*IMPRIMINDO UMA FRASE NA ORDEM INVERSA*/
	char sentence[80];
	void reverse(char *);
	printf("Digite uma linha de texto:\n");
	fgets(sentence,80,stdin);
	printf("\nA linha impressa em ordem inversa e:\n");
	reverse(sentence);
	puts("\n");

/*USANDO GETCHAR*/
	char x, xsentence[80];
	int i = 0;
	puts("Digite uma linha de texto:");
	while (( x = getchar())!='\n')
	sentence[i++] = x;
	sentence[i] = '\0'; /* insere NULL no final da string */
	puts("\nA linha digitada foi:");
	puts(sentence);//put string

/* USANDO SPRINTF */
	char s[80];
	int w;
	float y;
	printf("Digite um valor inteiro e um valor float:\n");
	scanf("%d%f", &w, &y);
	sprintf(s,"Inteiro:%6d\nFloat:%8.2f", w, y);//A sáida é armazenada na var s
	printf ("%s\n%s\n",
		"A saida formatada armazenada no array s e:", s);

/* USANDO SSCANF */
	char s[] = "31298 87.375";
	int x;
	float y;
	sscanf(s,"%d%f", &x, &y); // a entrada é feita a partir da string, em vez do teclado
	printf("%s\n%s%6d\n%s%8.3f\n","Os valores armazenados no array de caracteres s sao:",
	"Inteiro:", x, "Float:", y);

	return 0;

}

void reverse (char *s){
	
	if (s[0] == '\0')
		return;
	else {
		reverse(&s[1]);
		putchar(s[0]);
	}

}


