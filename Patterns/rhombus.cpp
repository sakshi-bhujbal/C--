#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n;
    cout<<"Enter the value of m: ";
    cin>>n;
    
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(j=1;j<=n;j++){
            cout<<"* ";
        }
         cout<<endl;
    }
   
}