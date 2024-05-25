#include <iostream>
#include <climits>
using namespace std;

int findMinimumIn2DArray(int arr[0][4],int rowSize,int colSize){
    int maxValue = INT_MIN;

    for(int i =0;i<rowSize;i++){
        for(int j = 0;j<colSize;j++){
            maxValue = max(maxValue,arr[i][j]);
        }
    }
    return maxValue;

}

int main(){
    int arr[3][4]={
        {10,11,12,13},
        {20,-2,22,23},
        {31,32,44,55}
    };
    int rowSize=3;
    int colSize=4;
    int ans =findMinimumIn2DArray(arr, rowSize, colSize);
    cout<< ans << endl;
    return 0;
} 