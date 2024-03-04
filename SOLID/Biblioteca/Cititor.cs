using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Biblioteca
{
    public class Cititor
    {
        private string nume;
        private List<int> cartiImprumutate;

        public Cititor( string nume)
        {
            this.nume = nume;
            cartiImprumutate = new List<int>();
        }
        public string getNume() {  return nume; }
        public List<int> getCartiCititor() {  return cartiImprumutate; }

    }
}
