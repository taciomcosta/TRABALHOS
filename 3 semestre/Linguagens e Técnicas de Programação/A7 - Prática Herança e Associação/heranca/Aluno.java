package heranca;

import associacao.Pessoa;

public class Aluno extends Pessoa
{
	//atributos
	private String rgm;
	private double notas;
	private String curso;
	private int faltas;
	
	//métodos especiais	
	public String getRgm()
	{
		return rgm;
	}
	
	public void setRgm(String rgm)
	{
		this.rgm = rgm;
	}
	
	public double getNotas()
	{
		return notas;
	}
	
	public void setNotas(double notas)
	{
		this.notas = notas;
	}
	
	public String getCurso()
	{
		return curso;
	}
	
	public void setCurso(String curso)
	{
		this.curso = curso;
	}
	
	public int getFaltas()
	{
		return faltas;
	}
	
	public void setFaltas(int faltas)
	{
		this.faltas = faltas;
	}
	
	public String toString()
	{
		String dados = 
				"\n\nRGM: " + this.rgm +
				"\nNotas: " + this.notas +
				"\nCurso: " + this.curso +
				"\nFaltas: " + this.faltas;
		
		return super.toString() + dados;
	}
	
}
