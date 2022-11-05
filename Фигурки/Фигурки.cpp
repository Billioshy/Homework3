// Фигурки.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <cstdlib>
#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
/*void main()*/ // Для задания 7 и 10
int main() //Для остальных
{
    setlocale(0, "");
    setlocale(LC_ALL, "rus");
    //Задание 1
       /*int s;
       int R;
       do
       {
           int R = 9;
           cout << "Выбирите число от 1 до 10 для построения фигуры" << endl;
           cin >> s;

           for (int i = 1; i <= R; i++)
           {
               for (int j = 1; j <= R; j++)
               {
                   switch (s)
                   {
                   case 0: return 0;
                       break;
                   case 1: if (j >= i) cout << "*"; else cout << " ";
                       break;
                   case 2: if (j <= i) cout << "*"; else cout << " ";
                       break;
                   case 3: if (j >= i && i + j <= R + 1) cout << "*"; else cout << " ";
                       break;
                   case 4: if (j <= i && i + j >= R + 1) cout << "*"; else cout << " ";
                       break;
                   case 5: if (j >= i && i + j <= R + 1 || j <= i && i + j >= R + 1) cout << "*"; else cout << " ";
                       break;
                   case 6: if (j <= i && i + j <= R + 1 || j >= i && i + j >= R + 1) cout << "*"; else cout << " ";
                       break;
                   case 7: if (j <= i && i + j <= R + 1) cout << "*"; else cout << " ";
                       break;
                   case 8: if (j >= i && i + j >= R + 1) cout << "*"; else cout << " ";
                       break;
                   case 9: if (j + i > R + 1) cout << " "; else cout << "*";
                       break;
                   case 10: if (j + i < R + 1) cout << " "; else cout << "*";
                       break;
                   default: cout << "Неправильный выбор! Прекращение работы программы!!!" << endl;
                       return 0;
                       break;
                   }
               }
               cout << endl;
           }


       } while (s);

       return 0;*/



       //Задание 2    
       /* int result = 0, num1, num2, num3;
        int i = 100, j = 999;
        for (; i <= j; i++)
        {

            for (; i <= j; j--)
            {
                num1 = j / 100;
                num3 = (j % 100) / 10;
                num2 = j % 10;
                if (num1 == num2 || num2 == num3 || num3 == num1)
                    result++;
            }
        }
        cout << "Количество целых чисел в диапазоне от 100 до 999 у которых две одинаковые цифры = " << result << endl;
        return 0;*/

        //Задание 3

        /*int a = 0, b = 0, c = 0;

        int result = 0;
        for (int i = 100; i <= 999; i++)
        {
            a = i / 100;
            b = (i / 10) % 10;
            c = i % 10;

            if (a != b && b != c && a != c)
            {
                result++;
            }
        }
        cout <<"Количество целых чисел в диапазоне от 100 до 999 у которых все цифры разные: "<< result << endl;
        return 0;*/

        // Задание 4
        /*int a, b = 1, c = 0;
        cout << "Программа убирает числа 3 и 6 из любого числа" << endl;
        cout << "Введите число: ";
        cin >> a;
        while (a > 0)
        {
            if ((a % 10) + '0' != '3' && (a % 10) % 6 != 0)
            {
                c += (a % 10) * b;
                b *= 10;
            }
            a /= 10;
        }
        a = c;
        cout << a << "\n";

        return 0;*/

        //Задание 5 и 6 не понял, как выполнять
    //Задание 7
    /*int num;
    cout << "Введите число" << endl;
    cin >> num;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
            cout << i << endl;
    }*/
    //Задание 8
    /*cout << "Введите два числа: " << endl;
    int a, b, l;
    cin >> a >> b;
    if (a > b)
    l = a;
    else
        l = b;
    for (int i = 1; i <= l; i++)
    if (a % i == 0 && b % i == 0)
    cout << i << endl;
    return 0;*/
    //Задание 9
//int a, cp, n = 0, sum = 0, c = 0;
////c - кол-во нулей
//
//cout << "Number:";
//cin >> a;
//cp = a;
//
////Кол-во нулей
//while (a)
//{
//    if (a % 10 == 0)
//        c++;
//    a /= 10;
//}
//cout << "\nКол-во нулей: " << c;
//
////Среднее арифметическое
//for (n = 0; cp > 0; n++)
//{
//    sum += cp % 10;
//    cp /= 10;
//}
//cout << "\nКол-во цифр = " << n << " \nSum = " << sum << "\nSredn arif = " << (double)sum / n << "\n";
//
//return 0;
    // Задание 10
//int a, b, c;
//cout << "Введите высоту доски." << endl;
//cin >> a;
//cout << "Введите ширину доски." << endl;
//cin >> b;
//cout << "Введите размер клеточки." << endl;
//cin >> c;
//
//for (int i = 0; i < a; i++)
//{
//    for (int jj = 0; jj < b; jj++)
//    {
//        for (int j = 0; j < c; j++)
//        {
//            for (int ii = 0; ii < a; ii++)
//            {
//                ((i + j) % 2) ? (cout << '-') : (cout << '*');
//            }
//        }
//        cout << endl;
//    }
//    
//}
//cout << endl;
} 
