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
            // CITIREA CARTILOR
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
                Carte c = new Carte(id, titlu, autor);
                carti.Add(c);
            }

            // AFISAREA CARTILOR
            foreach (var carte in carti)
            {
                Console.Write("Titlu:");
                Console.WriteLine(carte.getTitlu());
                Console.Write("Autor:");
                Console.WriteLine(carte.getAutor());

            }

            // ADAUGAREA CITITORILOR

            Console.WriteLine("::::::::::::::::::::::::::::::::::::::::::");
            Console.WriteLine("Enter number of readers:");
            int nrCititori = Convert.ToInt32(Console.ReadLine());
            List<Cititor> cititori = new List<Cititor>();
            for (int i = 0; i < nrCititori; i++)
            {
                string nume;
                Console.WriteLine("Enter name:");
                nume = Console.ReadLine();
                Cititor cititor = new Cititor(nume);
                cititori.Add(cititor);
            }
            Console.WriteLine("::::::::::::::::::::::::::::::::::::");

            // ADAUGAREA CARTILOR IN STOC
            Adaugare cartiAdaugate = new Adaugare();

            foreach (var carte in carti)
            {
                cartiAdaugate.Adauga(carte);
            }

            //IMPRUMUTUL CARTILOR
            Imprumut imprumutare = new Imprumut(cartiAdaugate);
            foreach (var cititor in cititori)
            {
                Console.WriteLine($"Reader: {cititor.getNume()}");
                Console.WriteLine("Enter number of books to borrow:");
                int nrCartiImprumutate = Convert.ToInt32(Console.ReadLine());

                for (int i = 0; i < nrCartiImprumutate; i++)
                {
                    Console.WriteLine($"Enter the ID of book {i+1} to borrow:");
                    int idCarte = Convert.ToInt32(Console.ReadLine());

                    //cautam cartea dupa ID in lista de carti disponibile
                    Carte carteImprumutata = carti.FirstOrDefault(c => c.getId() == idCarte);

                    if (carteImprumutata != null)
                    {
                        // realizam imprumutul
                        imprumutare.ImprumutaCarte(carteImprumutata, cititor);
                        Console.WriteLine($"Book '{carteImprumutata.getTitlu()}' borrowed successfully.");
                    }
                    else
                    {
                        Console.WriteLine("Book not found in stock.");
                    }
                }
            }


            Console.WriteLine();
            AfiseazaCarti afisare = new AfiseazaCarti(imprumutare, cartiAdaugate);

            Console.WriteLine("==========STOCUL CARTILOR=============:");
            afisare.AfiseazaStoc();
            Console.WriteLine();


            Console.WriteLine("==========IMPRUMUTURI============= ");
            afisare.AfiseazaImprumuturi();



            Console.ReadKey();
        }
    }
}
