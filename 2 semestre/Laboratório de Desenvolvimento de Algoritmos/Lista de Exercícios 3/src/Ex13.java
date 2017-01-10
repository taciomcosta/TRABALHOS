//Importando Scanner
import java.util.Scanner;

public class Ex13 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("M�dias\n\n");
		
		//vars
		double media, menorMedia, maiorMedia, mediaTurma=0, alunos=0;
		
		//Entrada
		System.out.print("Digite a m�dia do aluno: ");
		media = ent.nextDouble();
		
		menorMedia = media;
		maiorMedia = media;
		
		while ( media >= 0)
		{
			//Processamento
			alunos++;
			mediaTurma += media;
			
			if( media < menorMedia )
				menorMedia = media;
			else if ( media > maiorMedia)
				maiorMedia = media;
			
			//Entrada
			System.out.print("Digite a m�dia do aluno: ");
			media = ent.nextDouble();
				
		}
		
		mediaTurma /= alunos;
		
		//Sa�da
		System.out.println("Menor m�dia: " + menorMedia);
		System.out.println("Maior m�dia: " + maiorMedia);
		System.out.println("M�dia da turma: " + mediaTurma);
		
		
		
	}
}
