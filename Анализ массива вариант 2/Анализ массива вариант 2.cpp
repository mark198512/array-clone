// Анализ массива вариант 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    /* Анализ массива и сумммирование чисел вариант 2*/
    setlocale(LC_ALL, "Russian");

    srand(time(NULL));   /* Генератор случайных чисел */

    int m = 0; /*метка первого положительного числа */
    int summ = 0; /* сумма значений элементов массива посчитанных после первого положительного элемента*/
    int kings[20]; /*Массив из 20 случайных чисел*/

    for (int i = 0; i < 20; i++)
    {
        kings[i] = rand() % 40 - 30;

        cout << kings[i] << endl;

        if (m == 0)
        {
 
            if (kings[i] > 0)
            {
                m = 1;
                cout << " положительное число" << endl;

            }
            else 
            {
                summ = summ + kings[i];
            }
           
        }
    }
    cout << "сумма равна = " << summ << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
