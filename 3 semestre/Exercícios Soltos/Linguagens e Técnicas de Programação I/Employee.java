public class Employee
{
    // Attributes
    private String firstName;
    private String lastName;
    private double salary;

    // Methods
    public Employee(String fName, String lName, double s)
    {
        firstName = fName;
        lastName = lName;
        salary = s;
    }


    public String getFirstName()
    {
        return firstName;
    }

    public void setFirstName(String fName)
    {
        firstName = fName;
    }


    public String getLastName()
    {
        return lastName;
    }

    public void setLastName(String lName)
    {
        lastName = lName;
    }

    public double getSalary()
    {
        return salary;
    }

    public void setSalary(double s)
    {
        if (s > 0)
            salary = s;
    }

    public void printData()
    {
        System.out.println("Name: " + firstName + " " + lastName);
        System.out.println("Salary: R$" + salary);

    }

}
