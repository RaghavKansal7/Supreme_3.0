#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    int c =1;
    for(int row=0;row<n;row++){
        for(int col=0;col<=row;col++){
            cout<<c;
            c++;
            if(col<row){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    int start = c-n;

    for(int row = 0; row<n;row++){
        int k = start;
        for(int col =0;col<=n-row-1;col++){
            cout<<k;
            k++;
            if(col<n-row-1){
                cout<<"*";
            }
        }
        start = start -(n-row-1);
        cout<<endl;
    }


    return 0;
}