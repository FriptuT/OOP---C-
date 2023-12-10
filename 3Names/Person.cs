using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;


namespace _3Names
{
    public class Person
    {
        private string name = string.Empty;

        public string Name{

            get => name;

            set => name = value;
        }


        public override string ToString()
        {
            return $"Hello! My name is {Name}";
        }
    }
}