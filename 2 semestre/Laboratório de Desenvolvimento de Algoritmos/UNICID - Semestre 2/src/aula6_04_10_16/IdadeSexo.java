//Importando Scanner
import java.util.Scanner;

public class IdadeSexo {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Idade m�dia do grupo, dos homens e das mulheres\n\n");
		
		//vars
		int qtMulher=0, qtHomem=0,idade, sexo, i;
		double mediaMulher=0, mediaHomem=0, mediaGrupo=0;
		
		//Entrada
		for (i=1; i<=7; i++)
		{
			//Lendo o sexo
			System.out.println("1 - Menina");
			System.out.println("2 - Menino");
			System.out.printf("Pessoa %d, insira a op��o correspondente ao seu sexo:", i);
			sexo = ent.nextInt();
			
			//Lendo a idade
			System.out.printf("Pessoa %d, insira a sua idade:", i);
			idade = ent.nextInt();
			
			mediaGrupo += idade;
			if( sexo == 1 )
			{
				mediaMulher += idade;
				qtMulher++;
			}
			else
			{
				mediaHomem += idade;
				qtHomem++;
			}
		}
		
		//Processamento e Sa�da
		
		//Se existir mulheres
		if( qtMulher != 0 )
		{
			mediaMulher = mediaMulher / qtMulher;
			System.out.println("M�dia de idade das mulheres: " + mediaMulher);
		}
		else
			System.out.println("N�o h� mulheres");
		
		//Se existir homens
		if( qtHomem != 0 )
		{
			mediaHomem = mediaHomem / qtHomem;
			System.out.println("M�dia de idade dos homens: " + mediaHomem);
		}
		else
			System.out.println("N�o h� homens");
		
		//M�dia do grupo
		mediaGrupo = mediaGrupo/7;
		System.out.println("M�dia de idade do grupo: " + mediaGrupo);
		
	}
}
