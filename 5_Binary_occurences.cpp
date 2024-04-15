#include <iostream>
using namespace std;
int Firstocc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
         int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
       
    }
    return ans;
}
int Lastocc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
         int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid +1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
       
    }
    return ans;
}
int main()
{
    int even[6] = {1, 3, 3, 3, 3, 4};

cout << Lastocc(even,6,3);
    return 0;
}
