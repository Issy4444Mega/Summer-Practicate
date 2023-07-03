#include "h.h" 

void zapis_before(int* mas, int size) {

    ofstream file("array_before_sort.txt"); // открытие файла для записи до сортировки
    if (file.is_open())
    {
        for (int i = 0; i < size; i++)
        {
            file << mas[i] << " "; // запись элементов массива в файл
        }
        file.close(); // закрытие файла
    }
}

void zapis_after(int* mas, int size) {

    ofstream file2("array_after_sort.txt"); // открытие файла для записи после сортировки
    if (file2.is_open())
    {
        for (int i = 0; i < size; i++)
        {
            file2 << mas[i] << " "; // запись элементов массива в файл
        }
        file2.close(); // закрытие файла
    }
}