//#define DATA_TYPES
//#define CONSTANTS
#define TYPE_CONVERSIONS

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataTypes
{
    class Program
    {
        const string delimiter = "\n----------------\n";
        static void Main(string[] args)
        {
#if DATA_TYPES
            Console.WriteLine($"bool занимает {sizeof(bool)} Байт памяти, класс-обвертка Boolean;");
            Console.WriteLine(bool.FalseString);
            Console.WriteLine(bool.TrueString);
            Console.WriteLine(typeof(bool));
            Console.WriteLine(delimiter);


            ///////////////////////////////////////////////////////

            Console.WriteLine($@"Тип данных char занимает {sizeof(char)} Байт памяти,
и принимает значение в диапазоне от {(int)char.MinValue} до {(int)char.MaxValue}. 
Класс обвертка - {typeof(char)} ");
            Console.WriteLine(delimiter);

            Console.WriteLine(@"RAW-строка - игнорирует все специальные символы 
и Esc-последовательности \t\n, то есть принимаются как есть");
            Console.WriteLine(delimiter);

            //////////////////////////////////////////////////////

            //Числовые типы
            Console.WriteLine($@"byte занимает {sizeof(byte)} Байт памяти, и принимает
значение в диапазоне от {byte.MinValue} до {byte.MaxValue}, класс-обвертка {typeof(byte)}");
            Console.WriteLine(delimiter);

            //////////////////////////////////////////////////////

            Console.WriteLine($@"sbyte занимает {sizeof(sbyte)} Байт памяти, и принимает
значение в диапазоне от {sbyte.MinValue} до {sbyte.MaxValue}, класс-обвертка {typeof(sbyte)}");
            Console.WriteLine(delimiter);

            //////////////////////////////////////////////////////

            Console.WriteLine($@"short занимает {sizeof(short)} Байт памяти, и принимает
значение в диапазоне от {short.MinValue} до {short.MaxValue}, класс-обвертка {typeof(short)}");
            Console.WriteLine(delimiter);

            //////////////////////////////////////////////////////

            Console.WriteLine($@"int занимает {sizeof(int)} Байт памяти, и принимает
значение в диапазоне от {int.MinValue} до {int.MaxValue}, класс-обвертка {typeof(int)}");
            Console.WriteLine(delimiter);

            //////////////////////////////////////////////////////

            Console.WriteLine($@"long занимает {sizeof(long)} Байт памяти, и принимает
значение в диапазоне от {long.MinValue} до {long.MaxValue}, класс-обвертка {typeof(long)}");
            Console.WriteLine(delimiter);

            //////////////////////////////////////////////////////

            //Вещественные типы

            Console.WriteLine($@"float занимает {sizeof(float)} Байт памяти, и принимает
значение в диапазоне от {float.MinValue} до {float.MaxValue}, класс-обвертка {typeof(float)}");
            Console.WriteLine(delimiter);

            /////////////////////////////////////////////////////////

            Console.WriteLine($@"double занимает {sizeof(double)} Байт памяти, и принимает
значение в диапазоне от {double.MinValue} до {double.MaxValue}, класс-обвертка {typeof(double)}");
            Console.WriteLine(delimiter);


            /////////////////////////////////////////////////////////

            Console.WriteLine($@"decimal занимает {sizeof(decimal)} Байт памяти, и принимает
значение в диапазоне от {decimal.MinValue} до {decimal.MaxValue}, класс-обвертка {typeof(decimal)}");
            Console.WriteLine(delimiter);

            double a = 1;
            a /= 3;
            Console.WriteLine(a);
            a *= 3;
            Console.WriteLine(a);
            //////////////////////////////////////////////////////
#endif


#if CONSTANTS
            Console.WriteLine("Hello".GetType());
            Console.WriteLine(5.GetType());
            Console.WriteLine(5.0.GetType());
#endif

#if TYPE_CONVERSIONS
            //////////////////////////////////////////////////

            //Преобразования данных

            int n = 5;
            while (n-- > 0)
            {
                Console.WriteLine(n);
            }

            Console.WriteLine(delimiter);
            //ushort b = 2;
            //Console.WriteLine(b); 
            int a = 2;
            short b = (short)a;
            double s = 2.2;
            short t = (short)s;   //Не явные преобразования не работают, но явные могут с потерей данных
            Console.WriteLine(t);
            //C-Like notation (type)value ---на аппаратном уровне
            //bool rain = (bool)"True"; - ошибка
            //когда требуются алгометрические преобразования, применяется Convert.
            bool rain = Convert.ToBoolean("True");
            Console.WriteLine(rain);
            // или Parse
            bool rain2 = bool.Parse("True");
            Console.WriteLine(rain2);
         
#endif
        }
    }
}
