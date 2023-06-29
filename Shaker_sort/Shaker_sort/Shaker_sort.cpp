#include <iostream>
using namespace std;

void shaker_sort(int* mas, int left, int right)
{
    int hod = 1;

    while ((left < right) && hod > 0) 
    {
        hod = 0;
        for (int i = left; i < right; i++) 
        {
            if (mas[i] > mas[i+1])
            {
                int zam = mas[i];
                mas[i] = mas[i + 1];
                mas[i + 1] = zam;
                hod = 1;
            }
        }
        right--;
        for (int i = right; i > left; i--)
        {
            if (mas[i - 1] > mas[i]) 
            {
                int zam = mas[i];
                mas[i] = mas[i - 1];
                mas[i - 1] = zam;
                hod = 1;
            }
        }
        left++;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian"); //русификация

    srand(time(NULL));
    int size;
    cout << "Введите размер массива : " << endl;
    do
    {
        cout << "Размер = ";
        cin >> size;
        if ((!(cin.good())) || (size < 0))
        {
            cout << "Неверно введен размер массива size " << endl;
            cin.clear();
            cin.get();
        }
    } while ((!(cin.good())) || (size < 0));

    int* mas = new int[size];

    for (int i = 0; i < size; i++) // генерация чисел 
    {
        mas[i] = (rand() % 2001) - 1000;
    }
    //
    //здесь запись в файл
    
    /*for (int i = 0; i < size; i++) // генерация чисел 
    {
        cout << mas[i]<<" ";
    }
    cout << endl;
    */
    time_t start = clock(); //время до сортировки
    shaker_sort(mas, 0, (size - 1)); //вызов функции сортировки
    time_t stop = clock(); //время после сортировки
    double time = (stop - start) / 1000.0; //время сортировки

    /*for (int i = 0; i < size; i++) // генерация чисел 
    {
        cout << mas[i] << " ";
    }*/
    
    cout << endl << "Время выполнения сортировки – " << time << " секунд " << endl;

    getchar(); getchar();
}

