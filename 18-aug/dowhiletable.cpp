#include<iostream>
using namespace std;

int main(){
int n,i=1;

cout<<"Enter a no. : ";
cin>>n;

do{
    cout<<n*i<<endl;    

// n=n*i;
i++;
}while(i<10);

return 0;
}