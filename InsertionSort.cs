/////////////////////////////////////////////////////////////
// Program Name: Insertion Sort (C# Program)               //
// Author Name : Ganesh Thiagarajan                        //
/////////////////////////////////////////////////////////////


using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InsertionSort
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(" Insertion Sort");
            Console.WriteLine("================");
            int[] a = new int[25];
            int j,key;
            Console.WriteLine("\nInput Sequence\n");
            for (int i = 0; i < args.Length; i++)
            {
                a[i] = int.Parse(args[i]);
                Console.Write(a[i]);
                Console.Write(" ");
            }
            
            for (int i = 0; i < args.Length; i++)
            {
                j = i;
                key = a[j];
                while (j > 0 && key < a[j - 1])
                {
                    a[j] = a[j - 1];
                    j--;
                }
                a[j] = key;
            }

            Console.WriteLine("\n\nSorted Sequence\n");
            for (int i = 0; i < args.Length; i++)
            {
                Console.Write(a[i]);
                Console.Write(" ");
            }
        }
    }
}
