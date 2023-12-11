using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace _7EducationalInheritance
{
    public class Student: Person
    {
        public Student(string Name): base(Name)
        {
            this.Name = Name;
        }
        public void Study(){
            System.Console.WriteLine("Study");
        }
    }
}