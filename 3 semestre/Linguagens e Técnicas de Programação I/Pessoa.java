public class Pessoa {

    // ATTRIBUTES
    private int age;
    private int weight;
    private int height;
    private boolean alive;

    // METHODS

    // setters and getters
    public Pessoa()
    {
        alive = true ;
    }

    void setAge(int a)
    {
        age = a;
    }

    int getAge()
    {
        return age;
    }

    void setWeight(int w)
    {
        weight = w;
    }

    int getWeight()
    {
        return weight;
    }

    void setHeight(int h)
    {
        height = h;
    }

    int getHeight()
    {
        return height;
    }

    void setAlive(boolean al)
    {
        alive = al;
    }

    boolean getAlive()
    {
        return alive;
    }
}
