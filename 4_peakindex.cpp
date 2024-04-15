#include <vector>
#include <iostream>
using namespace std;
class solution
{
public:
    int peakindex(vector<int> &arr)
    {
        int s = 0;
        int e = arr.size() - 1;

        int mid = s + (e - s) / 2;

        while (s < e)
        {
            if (arr[mid] < arr[mid + 1])
            {
                s = mid + 1;
            }
            else if (arr[mid] > arr[mid - 1])
            {
                e = mid;
            }

            mid = s + (e - s) / 2;
        }
        return s;
    }
};

int main()
{
    // Create a vector of integers
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(7);
    arr.push_back(8);
    arr.push_back(4);
    arr.push_back(2);
  
    // Create an instance of the solution class
    solution sol;

    // Call the peakindex function and print the result
    cout << "Peak index: " << sol.peakindex(arr) << endl;

    return 0;
}