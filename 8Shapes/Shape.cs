using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace _8Shapes
{
    public class Shape
    {
        protected Location c;

        public override string ToString()
        {
            return string.Empty;
        }

        public double Area(){
            return 2.1;
        }

        public double Perimeter(){
            return 2.5;
        }
    }
}