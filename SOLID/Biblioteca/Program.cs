using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Biblioteca
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Carte c1 = new Carte(1, "HARRY POTTER", "J.K ROWLLING");
            Carte c2 = new Carte(2, "Alba ca zapada", "Ion Creanga");
            Carte c3 = new Carte(3, "La scaldat", "Ion Creanga");
            Carte c4 = new Carte(3, "Neuroplasticitatea", "Leon Danaila");

            Cititor Teodor = new Cititor("Teodor");
            Cititor Ana = new Cititor("Ana");
            Cititor Tati = new Cititor("Tati");

            Imprumut imprumut1 = new Imprumut();
            imprumut1.ImprumutaCarte(c1, Teodor);
            imprumut1.ImprumutaCarte(c1, Ana);
            imprumut1.ImprumutaCarte(c4, Tati);

            AfiseazaCartiImprumutate afisare = new AfiseazaCartiImprumutate(imprumut1);
            afisare.Afiseaza();

            Console.ReadKey();
        }
    }
}
