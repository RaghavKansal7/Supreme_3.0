#include <iostream>
#include<vector>
using namespace std;


//searrching without using vector

// bool search2Darray(int arr[][4],int rowSize,int colSize,int target){
//     for(int i =0;i<rowSize;i++){
//         for(int j=0;j<colSize;j++){
//             if(arr[i][j] == target){
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// int main(){

//     int arr[3][4] ={
//                     {10,11,12,13},
//                     {14,15,16,17},
//                     {18,19,20,21}
//     };
//     int rowSize = 3;
//     int colSize = 4;
//     int target = 200;

//     bool ans = search2Darray(arr,rowSize,colSize,target);
//     cout<<ans<<endl;

//     return 0;
// }


bool search2Darray(vector<vector<int>>arr,int target){
    int rowSize = arr.size();
    int colSize = arr[0].size();

    for(int i =0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            if(arr[i][j] == target){
                return true;
            }
            
        }
    }
    return false;
}


int main(){
    vector<vector<int>> arr(4,vector<int>(3,23));
    int rowSize = arr.size();
    int colSize = arr[0].size();

    for(int i =0;i<rowSize;i++){
        for(int j =0;j<colSize;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    int target = 40;
    bool ans = search2Darray(arr,target);
    cout<<ans<<endl;

    return 0;
}