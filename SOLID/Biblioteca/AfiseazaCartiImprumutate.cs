using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Biblioteca
{
    public class AfiseazaCartiImprumutate: IDisplay
    {
        // private Imprumut imprumut { get; set; }
        private IManagerImprumut managerImprumut;

        public AfiseazaCartiImprumutate(IManagerImprumut managerImprumut)
        {
            this.managerImprumut = managerImprumut;
        }

        public void Afiseaza()
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
    }
}
