namespace _5EducationalArea;
class Program
{
    static void Main(string[] args)
    {
        Person person = new();
        person.Greet();
        //---
        Student student = new();
        student.Age = 28;
        student.Greet();
        student.ShowAge();
        //---

        Teacher teacher = new();
        teacher.Age = 34;
        teacher.Greet();
        teacher.Explain();
    }
}
