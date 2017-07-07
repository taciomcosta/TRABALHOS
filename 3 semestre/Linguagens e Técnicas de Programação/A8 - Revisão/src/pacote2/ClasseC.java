package pacote2;

import pacote1.ClasseB;

public class ClasseC extends ClasseB
{
	public void metodo()
	{
		//permite alteração, pois o atributo2 é protected
		this.atributo2 = "2";
		
		//SEM ACESSO 
//		ClasseB clsB = new ClasseB();
//		clsB.atributo2 = "Texto";
//		clsB.metodo2();
	}
}
