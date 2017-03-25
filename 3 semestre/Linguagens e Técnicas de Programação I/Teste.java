import java.util.Scanner;

public class Teste {
    public static void main(String[] args)
    {
        // vars
        Aluno tacio = new Aluno();

        tacio.setCurso("Ciência da computação");
        tacio.setAge(19);
        tacio.setHeight(1);
        tacio.setHeight(1);

        System.out.println("Is alive: " + tacio.getAlive());
        System.out.println("Your course: " + tacio.getCurso());
        System.out.println("Your age: " + tacio.getAge());


    }
}
