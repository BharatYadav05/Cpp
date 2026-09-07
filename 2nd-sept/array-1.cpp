#include<iostream>
using namespace std;
int main(){
    int arr[5];
    arr[0]=21;
    arr[1]=12;
    arr[2]=43;
    arr[3]=44;


    // OR


   int arr2[5]={213,344,566,678,876};

    for(int i=0;i<=3;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl<<endl;

                        
    for(int i=0;i<=3;i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}