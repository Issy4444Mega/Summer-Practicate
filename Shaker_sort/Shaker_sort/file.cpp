#include "h.h" 

void zapis_before(int* mas, int size) {

    ofstream file("array_before_sort.txt"); // �������� ����� ��� ������ �� ����������
    if (file.is_open())
    {
        for (int i = 0; i < size; i++)
        {
            file << mas[i] << " "; // ������ ��������� ������� � ����
        }
        file.close(); // �������� �����
    }
}

void zapis_after(int* mas, int size) {

    ofstream file2("array_after_sort.txt"); // �������� ����� ��� ������ ����� ����������
    if (file2.is_open())
    {
        for (int i = 0; i < size; i++)
        {
            file2 << mas[i] << " "; // ������ ��������� ������� � ����
        }
        file2.close(); // �������� �����
    }
}