using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace _5EducationalArea
{
    public class Student: Person
    {
        public void Study()
        {
            System.Console.WriteLine("I'm studying");
        }

        public void ShowAge()
        {
            System.Console.WriteLine($"My age is {this.Age} years old");
        }
    }
}