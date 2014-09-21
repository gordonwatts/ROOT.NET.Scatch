using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CPPBaseLibraryConsumer
{
    class Program
    {
        /// <summary>
        ///  Call the routine in the wrapper, which calls the routine in the C++ DLL.
        ///  All this is pulled in via nuget.
        /// </summary>
        /// <param name="args"></param>
        static void Main(string[] args)
        {
            var c = new CPPBaseLibraryWrapper.ClassWrapper();
            Console.WriteLine(c.GetValue());
        }
    }
}
