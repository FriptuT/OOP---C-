using Biblioteca.adaugare;
using System;
using System.Collections.Generic;

namespace Biblioteca
{
    public class Imprumut: IManagerImprumut
    {
        private Dictionary<string, List<Carte>> cartiImprumutate;
        private IAdaugare cartiAdaugate;

        public Imprumut(IAdaugare cartiAdaugate)
        {
            this.cartiAdaugate = cartiAdaugate;
            this.cartiImprumutate = new Dictionary<string, List<Carte>>();
        }

        public Dictionary<string, List<Carte>> getCartiImprumutate()
        {
            return cartiImprumutate;
        }

        public void ImprumutaCarte(Carte carte, Cititor cititor)
        {
            if (!cartiAdaugate.getCartiAdaugate().Contains(carte))
            {
                Console.WriteLine("Cartea nu este in stoc, deci nu poate fi imprumutata!");
            }
            else
            {
                cartiImprumutate[cititor.getNume()] = new List<Carte>();
                cititor.getCartiCititor().Add(carte.getTitlu());
            }
            cartiImprumutate[cititor.getNume()].Add(carte);
        }
    }
}
