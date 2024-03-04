using System;
using System.Collections.Generic;

namespace Biblioteca
{
    public class Imprumut: IManagerImprumut
    {
        private Dictionary<string, List<Carte>> cartiImprumutate;

        public Imprumut()
        {
            this.cartiImprumutate = new Dictionary<string, List<Carte>>();
        }

        public Dictionary<string, List<Carte>> getCartiImprumutate()
        {
            return cartiImprumutate;
        }

        public void ImprumutaCarte(Carte carte, Cititor cititor)
        {
            if (!cartiImprumutate.ContainsKey(cititor.getNume()))
            {
                cartiImprumutate[cititor.getNume()] = new List<Carte>();
                cititor.getCartiCititor().Add(carte.getId());
            }

            cartiImprumutate[cititor.getNume()].Add(carte);
        }
    }
}
