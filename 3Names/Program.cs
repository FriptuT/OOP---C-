namespace _3Names;

// Create a C# program that requests three names of people
// from the user and stores them in an array of objects of type Person. 
// To do this, first create a Person class that has a Name property 
// of type string and override the ToString() method.

class Program
{
    static void Main(string[] args)
    {
        int numNames =  Convert.ToInt32(Console.ReadLine());
        
        Person[] person = new Person[numNames];

        for (int i = 0; i < numNames; i++)
        {
            person[i] = new Person(){
                Name = Console.ReadLine()
            };
        }

        for (int i = 0; i < numNames; i++)
        {
            Console.WriteLine(person[i]);
        }
    }
}
