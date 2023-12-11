using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace _4Names_
{
    public class Person
    {
        private string name;
        public string Name { get; set; }

        public Person(string name)
        {
            this.Name = name;
        }

        public override string ToString()
        {
            return $"Hello! My name is {this.Name}";
        }
        ~Person(){
            this.Name = string.Empty;
        }
    }
}