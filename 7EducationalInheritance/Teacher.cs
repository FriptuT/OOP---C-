using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace _7EducationalInheritance
{
    public class Teacher: Person
    {
        public Teacher(string Name): base(Name)
        {
            this.Name = Name;
        }
        
        public void Explain()
        {
            System.Console.WriteLine("Explain");
        }
    }
}