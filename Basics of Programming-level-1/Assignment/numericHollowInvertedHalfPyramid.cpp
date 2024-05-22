#include<iostream>
using namespace std;

int main(){
    //inverted numeric half pyramid
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    //outer loop
    for(int row=0;row<n;row++){
        //inner loop
        for(int col= row+1;col <= n;col++){
            if(col == row+1 || col == n || row == 0){
                cout<<(col)<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
        
    }
    return 0;
}