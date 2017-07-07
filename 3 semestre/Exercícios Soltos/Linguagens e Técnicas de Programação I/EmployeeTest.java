public class EmployeeTest
{
    public static void main(String[] args)
    {
        Employee employee1 = new Employee("Tácio", "Costa", 900.00);
        Employee employee2 = new Employee("Martin", "Mariano", 900.00);

        System.out.println("Nome: " + employee1.getFirstName() + " " + employee1.getLastName());
        System.out.println("Salário: R$" + employee1.getSalary());

        System.out.println("Nome: " + employee2.getFirstName() + " " + employee2.getLastName());
        System.out.println("Salário: R$" + employee2.getSalary());
    }
}
