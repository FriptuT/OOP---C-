namespace _4Names_;

//Create a C# program that prompts the user for three names of people and stores
//them in an array of Person-type objects. 
//To do this, first create a Person class that 
//has a Name property of type string, a constructor 
//that receives the name as a parameter, a destructor that 
//assigns the name to empty and overwrites the ToString () method.

class Program
{
    static void Main(string[] args)
    {
        int numberOfNames = Convert.ToInt32(Console.ReadLine());
        Person[] person = new Person[numberOfNames];

        for (int i = 0; i < numberOfNames; i++)
        {
            person[i] = new Person(Console.ReadLine());
        }

        for (int i = 0; i < numberOfNames; i++)
        {
            Console.WriteLine(person[i]);
        }
    }
}
