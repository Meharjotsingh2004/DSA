#include<iostream>
using namespace std ;



void printarray(int arr[], int size){
    for (int i=0 ; i<size ; i++){
        cout << arr[i]<< " ";
    }

}
void swap_alternate(int arr[] , int size){
    for(int i=0 ; i< size ; i+=2){
        if(i+1<size){
        swap(arr[i],arr[i+1]);
        }
    }


}

int main (){
    int arr1[]={1,2,3,4,5,55,33,11,43 , 55};
    swap_alternate(arr1, sizeof(arr1)/4);
    cout << endl;

    printarray(arr1 , sizeof(arr1)/4);
    

}

