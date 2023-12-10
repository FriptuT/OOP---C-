using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

//Sa se implementeze tipul abstract Coada ale carei elemenete sunt numele unor persoane. Clasa va 
//trebui sa contina:
// Constructor 
// Metode pentru adaugarea, eliminarea unei persone, pentru a testa daca coada este vida sau nu.



namespace problema2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            CoadaConcreta coada = new CoadaConcreta();

            coada.Adauga("Teodor");
            coada.Adauga("Vasile");
            coada.Adauga("Stelu");

            coada.Afiseaza();

            coada.Elimina();
            coada.Elimina();
            coada.Elimina();

            coada.esteVida();


            Console.ReadKey();
        }
    }

    public abstract class Coada
    {
        private Queue<string> coadaPersoane;

        public Coada()
        {
            this.coadaPersoane = new Queue<string>();
        }

        public void Adauga(string persoana)
        {
            coadaPersoane.Enqueue(persoana);
        }

        public void Elimina()
        {
            if (coadaPersoane.Count > 0)
            {
                coadaPersoane.Dequeue();
            }
        }

        public void Afiseaza()
        {
            string rezultat = "";

            while (coadaPersoane.Count > 0)
            {
                rezultat = rezultat + coadaPersoane.Dequeue();

                if (coadaPersoane.Count > 0)
                {
                    rezultat += ", ";
                }
                else
                {
                    rezultat += ".";
                }
            }
            Console.WriteLine(rezultat);
        }

        public bool esteVida()
        {
            if (coadaPersoane.Count == 0)
            {
                Console.WriteLine("Coada este vida");
                return true;
            }
            else
            {
                Console.WriteLine("Coada nu este vida");
                return false;
            }
        }
    }

    public class CoadaConcreta: Coada
    {
        public CoadaConcreta() : base()
        {
            
        }
    }

}
