#include<iostream>
using namespace std ;

int main (){
    int arr[]={1,2,3,4,5};
    for(int i =0 ; i<sizeof(arr)/4 ; i =i+2){
        if(i+1<sizeof(arr)/4){
            swap(arr[i], arr[i+1]);
        }


    }
    for (int i=0 ;i<sizeof(arr)/4 ; i++){
        cout << arr[i];
    }
    

}

