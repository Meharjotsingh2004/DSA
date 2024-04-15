// #include <iostream>
// using namespace std;

// void asscending(int *arr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 arr[i] = arr[j] + arr[i];
//                 arr[j] = arr[i] - arr[j];
//                 arr[i] = arr[i] - arr[j];
//             }
//         }
//     }
// }
// void print(int *arr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int binary(int *arr, int n, int k)
// {
//     int start = 0;
//     int end = n - 1;

//     int mid = start + ((end - start) / 2);

//     while (start <= end)
//     {
//         if (arr[mid] == k)
//         {
//             return mid;
//         }
//         if (k > arr[mid])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }

//         mid = start + ((end - start) / 2);
//     }
//     return -1;
// }
// int main()
// {
//     int arr[] = {33, 11, 4, 6, 7, 8};
//     int n = sizeof(arr) / sizeof(int);
//     int k;
//     cin >> k;

//     asscending(arr, n);
//     print(arr, n);
//     cout << endl;
//     int index = binary(arr, n, k);
//     cout << index;
//     return 0;
// }

// REWRITING CODE

#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int even[6] = {3, 5, 7, 8, 11, 13};
    int odd[5] = {1, 3, 4, 5, 6};

    int index = binarySearch(odd, 5,5);
    cout << index;

    return 0;
}