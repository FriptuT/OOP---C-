namespace Biblioteca
{
    public class Carte
    {
        private int id;
        private string titlu;
        private string autor;

        public Carte(int id, string titlu, string autor)
        {
            this.id = id;
            this.titlu = titlu;
            this.autor = autor;
        }

        public int getId() { return id; }
        public string getTitlu() { return titlu; }
        public string getAutor() { return autor; }
    }
}
