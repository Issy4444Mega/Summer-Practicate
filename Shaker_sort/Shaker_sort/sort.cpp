#include "h.h"

void shaker_sort(int* mas, int left, int right)
{
    int hod = 1;

    while ((left < right) && hod > 0)
    {
        hod = 0;
        for (int i = left; i < right; i++)
        {
            if (mas[i] > mas[i + 1])
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