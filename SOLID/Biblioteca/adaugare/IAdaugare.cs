using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Biblioteca.adaugare
{
    public interface IAdaugare
    {
        List<Carte> getCartiAdaugate();
        void Adauga(Carte carte);
    }
}
