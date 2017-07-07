package shapes;

public class Shape
{
        // attributes
        private int arestas;
        private int vertices;
        private String name;

        // methods
        // constructor
        public Shape(String name, int arestas, int vertices)
        {
                this.name = name;
                this.arestas = arestas;
                this.vertices = vertices;
        }

        // setters and getters
        public void setName(String name)
        {
                this.name = name;
        }

        public String getName()
        {
                return this.name;
        }

        public void setArestas(int arestas)
        {
                this.arestas = arestas;
        }

        public int getArestas()
        {
                return this.arestas;
        }

        public void setVertices(int vertices)
        {
                this.vertices = vertices;
        }

        public int getVertices()
        {
                return this.vertices;
        }

        public String toString()
        {
                String dados =
                        "\nNome: " + this.name +
                        "\nArestas: " + this.arestas +
                        "\nVertices: " + this.vertices;

                return dados;
        }
}
