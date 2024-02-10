namespace _7EducationalInheritance;
class Program
{
    static void Main(string[] args)
    {
        int numberNames = 3;
        Person[] persons = new Person[numberNames];

        for (int i = 0; i < numberNames; i++)
        {
            if (i == 0)
            {
                persons[i] = new Teacher(Console.ReadLine());
            }
            else
            {
                persons[i] = new Student(Console.ReadLine());
            }
        }

        for (int i = 0; i < numberNames; i++)
        {
            if (i == 0)
            {
                ((Teacher)persons[i]).Explain();
            }
            else
            {
                ((Student)persons[i]).Study();
            }
        }
    }
}
