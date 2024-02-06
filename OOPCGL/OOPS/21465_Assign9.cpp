/*
Author : Chaitanya Paraskar
Roll No.: 21465
Lab : OOPCGL Lab
Practical No.: 9
Aim :
Write a function template for selection and insertion sort that inputs, sorts and outputs
an integer array and a float array.
*/
#include <iostream>
using namespace std;

template <class T>
void selection(T a[], int n)
{
    int min_ind;
    for (int i = 0; i < n; i++)
    {
        min_ind = i;
        for (int j = i; j < n; j++)
        {
            if (a[j] < a[i])
            {
                min_ind = j;
            }
        }

        float c = a[i];
        a[i] = a[min_ind];
        a[min_ind] = c;
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}

template <class T>
void insertion(T arr[], int n)
{
    int i = 0;
    while (i < n - 1)
    {
        if (arr[i] > arr[i + 1])
        {
            T temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;

            int j = i;

            while (j > 0)
            {
                if (arr[j] < arr[j - 1])
                {
                    T temp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = temp;

                    j = j - 1;
                }
                else
                    break;
            }
        }
        i = i + 1;
    }
}

int main()
{
    int a[5] = {10, 50, 30, 40, 20};
    int n = sizeof(a) / sizeof(a[0]);

    insertion<int>(a, n);

    cout << " Sorted array : ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    float b[5] = {9.34, 7.23, 4.123, 2.425, 0.356};
    int size = sizeof(b) / sizeof(b[0]);
    insertion<float>(b, size);

    cout << " Sorted array : ";
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";
    cout << endl;

    return 0;
}

/*
OUTPUT:-

$ g++ 21465_Assign9.cpp -o Assign9 && ./Assign9
Sorted array : 10 20 30 40 50
Sorted array : 0.356 2.425 4.123 7.23 9.34

*/