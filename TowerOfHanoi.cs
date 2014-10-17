///////////////////////////////////////////////////////////////////
// Program Name: TowerOfHanoi.cs                                 //
// Language    : C# .Net Framework                               //
// Platform    : Toshiba Satellite Windows 8                     //
// Application : Towers Of Hanoi Problem                         //
// Author      : Ganesh Thiagarajan,                             //
//               ganesh_vjy@yahoo.com                            //
///////////////////////////////////////////////////////////////////

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TOH
{
    class Program
    {
        static void Main(string[] args)
        {
            if (args.Length != 1)
            {
                System.Console.WriteLine("usage: hanoi <number>");
                System.Environment.Exit(1);
            }

            int num = System.Convert.ToInt32(args[0]);

            towers(num, 'A', 'C', 'B');
            System.Environment.Exit(0);

        }
        public static void towers(int num,char from,char to,char aux){
            if (num <= 1)
            {
                Console.WriteLine("Move disk 1 from ");
                Console.Write(from);
                Console.Write("to ");
                Console.Write(to);
                return;
            }
                
            towers(num - 1, from, aux, to);
            Console.WriteLine("Move disk from ");
            Console.Write(from);
            Console.Write("to ");
            Console.Write(to);
            towers(num - 1, aux, to, from);
        }
    }
}
