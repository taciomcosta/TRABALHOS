package pacote2;

import pacote1.ClasseB;

public class ClasseC extends ClasseB
{
	public void metodo()
	{
		//permite altera��o, pois o atributo2 � protected
		this.atributo2 = "2";
		
		//SEM ACESSO 
//		ClasseB clsB = new ClasseB();
//		clsB.atributo2 = "Texto";
//		clsB.metodo2();
	}
}
