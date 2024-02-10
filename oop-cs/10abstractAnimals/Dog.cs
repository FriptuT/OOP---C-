using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace _10abstractAnimals
{
    public class Dog: Animal
    {
        public override void Eat()
        {
            System.Console.WriteLine("The dog is eating");
        }
    }
}