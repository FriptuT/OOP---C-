using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace _10abstractAnimals
{
    abstract public class Animal
    {
        private string Name;

        public void SetName(string name)
        {
            this.Name = name;
        }

        public string GetName()
        {
            return this.Name;
        }

       abstract public void Eat();
    }
}