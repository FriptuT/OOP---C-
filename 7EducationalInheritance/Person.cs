using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Threading.Tasks;

namespace _7EducationalInheritance
{
    public class Person
    {
        private readonly string name;
        public string Name { get; set; }

        public Person(string nume)
        {
            this.Name = nume;
        }

        public override string ToString()
        {
            return $"I'm {this.Name}";
        }
    }
}