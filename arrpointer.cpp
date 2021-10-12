#include <iostream>
using namespace std;

int main(){
    int *p;
    cout<<"Enter number of elements to be entered: ";
    int num;
    cin>>num;
    int arr[num];
    cout<<"Enter elements: ";
    for (int i = 0; i<num; i++)
    {
        cin>>arr[i];
    }
    
    p = arr;
    cout<<"You Entered: ";
    for (int i=0; i<num; i++){
        cout<< *p <<" ";
        p++;
    }
    return 0;
}