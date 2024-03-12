using Biblioteca.adaugare;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Biblioteca
{
    public class AfiseazaCarti: IDisplay
    {
        private IManagerImprumut managerImprumut;
        private IAdaugare cartiStoc;

        public AfiseazaCarti(IManagerImprumut managerImprumut, IAdaugare cartiStoc)
        {
            this.managerImprumut = managerImprumut;
            this.cartiStoc = cartiStoc;
        }

        public void AfiseazaImprumuturi()
        {
            foreach (var item in managerImprumut.getCartiImprumutate())
            {
                Console.Write("Cititor: ");
                Console.WriteLine(item.Key);
                foreach (var carte in item.Value)
                {
                    Console.Write("Carte: ");
                    Console.WriteLine(carte.getTitlu());
                    Console.Write("Autor: ");
                    Console.WriteLine(carte.getAutor());
                }
                Console.WriteLine();
            }
        }

        public void AfiseazaStoc()
        {
            int nr = 0;
            foreach (var carte in cartiStoc.getCartiAdaugate())
            {
                Console.WriteLine(":::Carte:::");
                Console.WriteLine($"Titlu: {carte.getTitlu()}");
                Console.WriteLine($"Autor: {carte.getAutor()}");
                nr++;
            }
            Console.WriteLine($"Sunt in total : {nr} carti!");
        }
    }
}
