#include<vector>
bool LinearSearchArray(int arr[][3], int rows, int cols, int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==key)return true;
        }
    }
    return false;
}
bool LinearSearchVector(std::vector<std::vector<int>> arr, int rows, int cols, int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==key)return true;
        }
    }
    return false;
}
