using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace _6PhotoBook
{
    public class PhotoBook
    {
        private readonly int numPages;
        public int NumPages { get; set; }

        public PhotoBook()
        {
            this.NumPages = 16;
        }

        public PhotoBook(int NumPages)
        {
            this.NumPages = NumPages;
        }
    }
}