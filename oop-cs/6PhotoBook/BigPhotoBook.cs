using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace _6PhotoBook
{
    public class BigPhotoBook: PhotoBook
    {
        public BigPhotoBook(): base()
        {
            this.NumPages = 64;
        }
    }
}