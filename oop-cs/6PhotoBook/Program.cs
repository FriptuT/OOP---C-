namespace _6PhotoBook;
class Program
{
    static void Main(string[] args)
    {
        PhotoBook book = new();
        System.Console.WriteLine(book.NumPages);
        //---

        PhotoBook book2 = new(24);
        System.Console.WriteLine(book2.NumPages);
        //---

        BigPhotoBook BigPhoto = new();
        System.Console.WriteLine(BigPhoto.NumPages);
    }
}