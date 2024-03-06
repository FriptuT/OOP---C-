using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Biblioteca.adaugare
{
    public class Adaugare: IAdaugare
    {
        private Dictionary<string, List<Carte>> cartiAdaugate;

        public Adaugare()
        {
            this.cartiAdaugate = new Dictionary<string, List<Carte>>();
        }

        public Dictionary<string, List<Carte>> getCartiAdaugate()
        {
            return cartiAdaugate;
        }

        public void Adauga(Carte carte, Cititor cititor)
        {
            if (!cartiAdaugate.ContainsKey(cititor.getNume()))
            {
                cartiAdaugate[cititor.getNume()] = new List<Carte>();
                cititor.getCartiCititor().Add(carte.getId());
            }
            cartiAdaugate[cititor.getNume()].Add(carte);
        }
    }
}
