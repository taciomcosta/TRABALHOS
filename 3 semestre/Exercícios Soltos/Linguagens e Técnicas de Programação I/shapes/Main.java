package shapes;

public class Main
{
        public static void main(String[] args)
        {
                Square square[] = new Square[5];

                for (int i = 0; i < 5; i++) {
                        square[i] = new Square("Quadrado", 4, 4, i);
                        System.out.println(square[i]);

                }

                Triangle triangulo1 = new Triangle("triângulo", 3, 3, 3, 4, 5);

                System.out.println(triangulo1);

        }
}
