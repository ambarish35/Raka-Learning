#include <iostream>
using namespace std;

int linearSearch(int array[], int size, int key)
{
    // Your code goes here
    for (int i = 0; i < size; i++)
    {
        if (key == array[i])
        {
            return 1;
        }
    }

    return 0;
}

int main()
{ // Initialization + Declaration korle arr[] erokom dileo hoy, size compiler nije bujhe ney, koto gulo element ache seta dekhe
    int arr[] = {2, 4, 7, 1, 12, 30, 33, 50, 21, 40, 32, 25};

    int key = 21; // key mane jeta search korte hobe array te

    int flag = linearSearch(arr, 12, 21);

    if (flag == 0)
    {
        cout << "Key not present";
    }
    else
    {
        cout << "Key is present";
    }
}