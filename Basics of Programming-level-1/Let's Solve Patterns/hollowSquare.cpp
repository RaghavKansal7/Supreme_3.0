#include<iostream>
using namespace std;

int main(){
    //rectangle pattern
    int side;
    cout<<"enter side:"<<endl;
    cin>>side;
    
    //outer loop
    for(int row=0;row<side;row++){
        //inner loop
        for(int col=0;col<side;col++){
            if(row ==0 || row == side-1){
                cout<< "* ";
                }
                else{
                    //middle rows
                    if(col ==0 || col == side-1){
                        cout<<"* ";
                    }
                    else{
                        cout<<"  ";
                    }
                }
            }
            cout<<endl;
        }
        return 0;
    }
