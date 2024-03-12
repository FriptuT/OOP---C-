using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Biblioteca.adaugare
{
    public class Adaugare: IAdaugare
    {
        private List<Carte> cartiAdaugate;

        public Adaugare()
        {
            this.cartiAdaugate = new List<Carte>();
        }

        public List<Carte> getCartiAdaugate()
        {
            return cartiAdaugate;
        }
        int nr = 0;

        public void Adauga(Carte carte)
        {

            if (!cartiAdaugate.Contains(carte))
            {
                cartiAdaugate.Add(carte);
            }
            nr++;
            Console.WriteLine($"Numarul cartilor din stoc este: {nr}");
        }
    }
}
