package aula1_23_08_16;//indica que o programa está na pasta aula_23_08_16

import java.util.Scanner;//importa a classe Scanner do pacote java.util

//Letra maiúscula para a classe
public class MeuPrimeiroPrograma {

	public static void main(String[] args) {

		//Instancia um objeto Scanner com nome ent, para ler dados
		//System é uma classe já importada automaticamente
		Scanner ent = new Scanner(System.in);
		
		int num1,num2,soma;
		String nome;
		double altura;
		
		System.out.println("Soma de Dois Números");
		
		//ENTRADA
		System.out.println("Digite o 1º nº: ");
		num1 = ent.nextInt();
		
		System.out.println("Digite o 2º nº: ");
		num2 = ent.nextInt();
		
		//PROCESSAMENTO
		soma = num1 + num2;
		
		//SAÍDA
		System.out.println("A soma vale: " + soma);
		System.out.println(num1 + " + " + num2 + " = " + soma) ;
		System.out.printf("Soma = %i", soma);
		
		
	}//main

}//class MeuPrimeiroPrograma
