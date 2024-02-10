namespace _9Car;

class Program
{
    static void Main(string[] args)
    {
        Car audi = new(0);

        int amountFuel = Convert.ToInt32(Console.ReadLine());

        audi.Refuel(amountFuel);
        audi.Drive();

    }
}
