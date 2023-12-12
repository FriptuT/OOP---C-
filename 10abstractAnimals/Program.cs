namespace _10abstractAnimals;

class Program
{
    static void Main(string[] args)
    {
        var dogName = Console.ReadLine();

        Dog dog = new();

        dog.SetName(dogName);

        System.Console.WriteLine(dog.GetName());
        dog.Eat();
    }
}
