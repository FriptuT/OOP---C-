using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

// Sa se implementeze tipul abstract Triunghi. Clasa va contine:
//  Constructor
//  O functie membru statica care verifica daca lungimile laturilor pot forma un triunghi.
//  Functii pentru calculul ariei si perimetrului
//  O functie care verifica daca triunghiul este sau nu dreptunghic.
namespace problema1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Triunghi triunghi1 = new Triunghi(3,4,5);

            Console.WriteLine("Aflati perimetrul: ");
            Console.WriteLine(triunghi1.perimetrul());

            Console.WriteLine("Demonstrati ca triunghiul este dreptunghic: ");
            triunghi1.esteDreptunghic();

            Console.ReadLine();
        }
    }

    public class Triunghi
    {
        int a, b, c;

        public Triunghi(int a, int b, int c)
        {
            this.a = a;
            this.b = b;
            this.c = c;
        }

        public int perimetrul()
        {
            var perimetru = a + b + c;
            return perimetru;
        }

        public double Aria()
        {
            var p = (a + b + c) / 2;
            var S = Math.Sqrt(p * (p - a) * (p - b) * (p - c));
            return S;
        }

        public static bool esteTriunghi(int a, int b, int c)
        {
            Console.WriteLine("Demonstram ca este triunghi prin inegalitatea triunghiului:");
            Console.WriteLine("Suma oricăror două laturi ale unui triunghi trebuie să fie mai mare" +
                " decât lungimea celei de-a treia laturi și invers");

            bool rezultat = a + b > c && a + c > b && c + b > a;

            return rezultat;
        }

        public bool esteDreptunghic()
        {
            Console.WriteLine("Demonstram prin teorema lui Pitagora: ");
            if (Math.Pow(a, 2) + Math.Pow(b, 2) == Math.Pow(c,2))
            {
                Console.WriteLine("Este dreptunghic");
                return true;
            }
            else
            {
                Console.WriteLine("Nu este dreptunghic");
                return false;
            }
        }
    }
}
