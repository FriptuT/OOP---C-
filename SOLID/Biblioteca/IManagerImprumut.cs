using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Biblioteca
{
    public interface IManagerImprumut
    {
        Dictionary<string, List<Carte>> getCartiImprumutate();
        void ImprumutaCarte(Carte carte, Cititor cititor);
    }
}
