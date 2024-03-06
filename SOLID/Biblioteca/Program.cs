using Biblioteca.adaugare;
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
            Carte c4 = new Carte(4, "Neuroplasticitatea", "Leon Danaila");

            Cititor Teodor = new Cititor("Teodor");
            Cititor Ana = new Cititor("Ana");
            Cititor Tati = new Cititor("Tati");
            Cititor Mami = new Cititor("Mami");

            Adaugare carti = new Adaugare();
            carti.Adauga(c1, Teodor);
            carti.Adauga(c1, Ana);
            carti.Adauga(c4, Tati);
            carti.Adauga(c3, Mami);
            carti.Adauga(c1, Tati);
            carti.Adauga(c2, Teodor);
            carti.Adauga(c3, Ana);

            Imprumut imprumut1 = new Imprumut(carti);
            imprumut1.ImprumutaCarte(c1, Teodor);
            imprumut1.ImprumutaCarte(c1, Ana);
            imprumut1.ImprumutaCarte(c4, Tati);


            Console.WriteLine();
            AfiseazaCarti afisare = new AfiseazaCarti(imprumut1,carti);

            Console.WriteLine("STOCUL CARTILOR:");
            afisare.AfiseazaStoc();
            Console.WriteLine();


            Console.WriteLine("==========IMPRUMUTURI============= ");
            afisare.AfiseazaImprumuturi();
            

            Console.ReadKey();
        }
    }
}
