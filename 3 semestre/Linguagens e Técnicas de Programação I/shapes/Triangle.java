package shapes;

public class Triangle extends Shape
{
        // attributes
        private double side1;
        private double side2;
        private double side3;
        private double area;

        // methods
        public Triangle(String name, int arestas, int vertices, double side1, double side2, double side3)
        {
                super(name, arestas, vertices);
                this.side1 = side1;
                this.side2 = side2;
                this.side3 = side3;
                calculateArea();
        }

        private void calculateArea()
        {
                double sp = (this.side1 + this.side2 + this.side3) / 2;

                this.area = Math.sqrt(sp * (sp - this.side1) * (sp - this.side2) * (sp - this.side3));

        }

        public double getArea()
        {
                return this.area;
        }

        public void setSide(int side, double size)
        {
                switch (side) {
                case 1:
                        this.side1 = size;
                        break;
                case 2:
                        this.side2 = size;
                        break;
                case 3:
                        this.side3 = size;
                        break;
                default:
                        break;
                }

                calculateArea();
        }

        public String toString()
        {
                return "\nLado 1: " + this.side1 + "\nLado 2: " + this.side2 + "\nLado 3: " + this.side3 + "\nÁrea: " + this.area + "\n";
        }
}
