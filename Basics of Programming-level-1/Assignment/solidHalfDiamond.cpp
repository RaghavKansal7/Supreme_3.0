#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter value of n:";
    cin>>n;

    //outer loop
    for(int row =0;row< 2*n-1;row++){
        //inner loop
        int cond = 0;
        if(row<n){//growing phase of diamond
            cond =row;
        }
        else{//shrinling phase of diamond
            cond = n-(row%n)-2;
        }
        for(int col =0;col<=cond;col++){
            cout<<"* ";
        }
        cout<<endl;
    }



    return 0;
}