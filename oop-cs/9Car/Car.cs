using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace _9Car
{
    public class Car: IVehiculo
    {
        private readonly int amountGas;
        public int AmountGas {get; set;}

        public Car(int amountGas)
        {
            this.AmountGas = amountGas;
        }

        public void Drive()
        {
            if (AmountGas > 0)
            {
                System.Console.WriteLine("The car is driving");
            }
            else
            {
                System.Console.WriteLine("No fuel, go to gas station");
            }
        }

        public bool Refuel(int gasAmount){
            this.AmountGas += gasAmount;
            System.Console.WriteLine("The amount of gas has reached : " + AmountGas);
            return true;
        }
    }
}