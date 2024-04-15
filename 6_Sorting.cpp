#include <iostream>
using namespace std;
void bubble_sort(int arr[], int size)
{
    bool swapped;
    for (int i = 0; i < size; i++)
    {
        swapped = false;
        for (int j = 0; j < size; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}
void insertion(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev = prev - 1;
        }
        arr[prev + 1] = curr;
    }
}
void PrintARRAY(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
  insertion(arr, size);
    cout << endl;
    PrintARRAY(arr, size);

    return 0;
}