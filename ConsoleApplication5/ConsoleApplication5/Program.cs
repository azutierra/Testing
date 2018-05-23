using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication5
{
    class Program
    {
        [DllImport("dll_test.dll", EntryPoint = "sum", CallingConvention = CallingConvention.StdCall)]
        static extern int Add(int a, int b);

        static void Main(string[] args)
        {
            int result = Add(27, 28);
            Console.WriteLine(result);
            Console.ReadKey();
        }

    }
}
