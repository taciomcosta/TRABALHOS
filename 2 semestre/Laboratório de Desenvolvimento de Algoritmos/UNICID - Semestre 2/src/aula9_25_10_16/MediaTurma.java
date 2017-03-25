package aula9_25_10_16;

//Importando Scanner
import java.util.Scanner;

public class MediaTurma{
	
	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		System.out.println("Média da Turma\n\n");
		
		//vars
		int alunos=0;
		double mediaAluno,maiorMedia,menorMedia,mediaTurma=0;
		
		//Entrada
		System.out.print("Digite a media do aluno, ou um número negativo para finalizar: ");
		mediaAluno = input.nextDouble();
		
		//Processamento
		maiorMedia = mediaAluno;
		menorMedia = mediaAluno;
		
		while( mediaAluno >= 0 )
		{
			alunos++;
			mediaTurma += mediaAluno;
			
			if( mediaAluno > maiorMedia )
				maiorMedia = mediaAluno;
			else if ( mediaAluno < menorMedia )
				menorMedia = mediaAluno;
			
			
			System.out.print("Digite a media do aluno, ou um número negativo para finalizar: ");
			mediaAluno = input.nextDouble();	
		}
		if( alunos != 0 )
			mediaTurma /= alunos;
		
		//Saída
		System.out.println("\nMaior Média: " + maiorMedia);
		System.out.println("Menor Média: " + menorMedia);
		System.out.println("Média da Turma: " + mediaTurma);
			
		
	}
}