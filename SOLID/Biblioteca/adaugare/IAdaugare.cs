using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Biblioteca.adaugare
{
    public interface IAdaugare
    {
        Dictionary<string, List<Carte>> getCartiAdaugate();
        void Adauga(Carte carte, Cititor cititor);
    }
}
