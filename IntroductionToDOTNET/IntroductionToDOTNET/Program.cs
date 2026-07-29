//IntroductionToDOTNET
//#define CONSOLE

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace IntroductionToDOTNET
{
    class Program
    {
        static void Main(string[] args)
        {
#if CONSOLE
            Console.Title = "Introduction to .NET";
            Console.WriteLine("ПРивет");
            Console.BackgroundColor = ConsoleColor.Blue;
            Console.ForegroundColor = ConsoleColor.Green;
            Console.WriteLine("ПРивет");
            Console.CursorLeft = 25;
            Console.CursorTop = 5;
            Console.WriteLine("Установим позицию курсора");
            //Console.Beep(50, 2000);
            Console.SetCursorPosition(22, 8);
            Console.WriteLine("Другая позиция");
            Console.ResetColor(); 
#endif
            Console.Write("Введите ваше имя: ");
            string ferstName = Console.ReadLine();
            Console.Write("Введите вашу фамилию: ");
            string lastName = Console.ReadLine();
            Console.Write("Введите ваш возраст: ");
            int age = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine(lastName + " " + ferstName + " " + age + " " + age);
            Console.WriteLine($"{lastName} {ferstName}");
        }
    }
}
