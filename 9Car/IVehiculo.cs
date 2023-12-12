using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace _9Car
{
    public interface IVehiculo
    {
        public void Drive();
        public bool Refuel(int gasAmount);
    }
}