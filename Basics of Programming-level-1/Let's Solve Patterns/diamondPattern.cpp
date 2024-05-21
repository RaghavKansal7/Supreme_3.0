#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter value of n:";
    cin>>n;

    //upper half

    //outer loop
    for(int row=0;row<n;row++){
        //inner loop
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }
        for(int col=0;col<row+1;col++){
            cout<<"* ";
        }
        cout<<endl;

    }

    //lower half

    //outer loop
    for(int row =0;row<n;row++){
        //inner loop
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        for(int col=0;col<n-row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }


    return 0;
}