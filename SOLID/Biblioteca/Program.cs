using Biblioteca.adaugare;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Biblioteca
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter number of books:");
            int nr = Convert.ToInt32(Console.ReadLine());
            List<Carte> carti = new List<Carte>();
            for (int i = 0; i < nr; i++)
            {
                int id;
                Console.Write("Enter id:");
                id = Convert.ToInt32(Console.ReadLine());
                string titlu;
                Console.WriteLine("Enter title:");
                titlu = Console.ReadLine();
                string autor;
                Console.WriteLine("Enter author:");
                autor = Console.ReadLine();
                Carte c = new Carte(id, titlu,autor);
                carti.Add(c);
            }

            foreach (var carte in carti)
            {
                Console.WriteLine(carte.getTitlu());
            }

            //Cititor Teodor = new Cititor("Teodor");
            //Cititor Ana = new Cititor("Ana");
            //Cititor Tati = new Cititor("Tati");
            //Cititor Mami = new Cititor("Mami");

            //Adaugare carti = new Adaugare();
            //carti.Adauga(c1);
            //carti.Adauga(c1);
            //carti.Adauga(c4);
            //carti.Adauga(c3);
            //carti.Adauga(c1);
            //carti.Adauga(c2);
            //carti.Adauga(c3);

            //Imprumut imprumut1 = new Imprumut(carti);
            //imprumut1.ImprumutaCarte(c1, Teodor);
            //imprumut1.ImprumutaCarte(c1, Ana);
            //imprumut1.ImprumutaCarte(c4, Tati);
            //imprumut1.ImprumutaCarte(c1, Mami);


            //Console.WriteLine();
            //AfiseazaCarti afisare = new AfiseazaCarti(imprumut1,carti);

            //Console.WriteLine("STOCUL CARTILOR:");
            //afisare.AfiseazaStoc();
            //Console.WriteLine();


            //Console.WriteLine("==========IMPRUMUTURI============= ");
            //afisare.AfiseazaImprumuturi();


            Console.ReadKey();
        }
    }
}
