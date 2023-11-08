#include <iostream>
using namespace std ;


int findunique(int *arr , int size){
    int ans = 0;
    for (int i=0 ; i<size ; i++){
        ans = ans^arr[i];
    }
    return ans;

}
int main (){
    
    int arr1[]= {1,1,2,4,4,3,2,5,5,7,8,7,8};

    int *ptr = arr1;

    cout << findunique( ptr , sizeof(arr1)/4);
    

}
