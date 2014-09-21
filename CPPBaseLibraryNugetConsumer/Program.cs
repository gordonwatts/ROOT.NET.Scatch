using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CPPBaseLibraryNugetConsumer
{
    class Program
    {
        static void Main(string[] args)
        {
            var c = new CPPBaseLibraryWrapper.ClassWrapper();
            Console.WriteLine(c.GetValue());
        }
    }
}
