#include<vector>
std::pair<int, int> LinearSearchArray(int arr[][3], int rows, int cols, int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==key)return {i, j};
        }
    }
    return {-1, -1};
}
std::pair<int, int> LinearSearchVector(std::vector<std::vector<int>> arr, int rows, int cols, int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==key)return {i, j};
        }
    }
    return {-1, -1};
}
