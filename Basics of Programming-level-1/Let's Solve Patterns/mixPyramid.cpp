#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter value of n:";
    cin>>n;

    //PART -1
    //outer loop
    for(int row=0;row<n;row++){
        //inner loop
        for(int col=0;col< n - row;col++){
            cout<<"* ";
        }

        //spaces
        for(int col=0;col< 2*row+1;col++){
            cout<<"  ";
        }

        //stars
        for(int col=0;col< n - row;col++){
            cout<<"* ";
        }
        cout<<endl;

    }

    //PART -2
        //outer loop
    for(int row=0;row<n;row++){
        //inner loop
        for(int col=0;col<row+1;col++){
            cout<<"* ";
        }

        //spaces
        for(int col=0;col< 2*(n-row)-1;col++){
            cout<<"  ";
        }

        //stars
        for(int col=0;col<row+1;col++){
            cout<<"* ";
        }
        cout<<endl;

    }

    return 0;
}