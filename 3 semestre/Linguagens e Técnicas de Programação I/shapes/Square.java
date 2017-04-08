package shapes;

public class Square extends Shape
{
        // attributes
        private double side;
        private double area;

        // methods
        public Square(String name, int arestas, int vertices, double side)
        {
                // calls the constructor of superclass
                super(name, arestas, vertices);
                this.side = side;
                this.area = Math.pow(this.side, 2);
        }

        public void setSide(double side)
        {
                this.side = side;
                this.area = Math.pow(this.side, 2);
        }

        public double getSide()
        {
                return this.side;
        }

        public double getArea()
        {
                return this.area;
        }

        public String toString()
        {
                String dados =
                        "\nlado: " + this.side +
                        "\nárea: " + this.area;

                return super.toString() + dados;
        }
}
