#include <climits>
#include<vector>
#include <iostream>
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

int MaxRowSum(std::vector<std::vector<int>> arr, int rows, int cols){
    int finalOut = INT_MIN;
    for(int i=0;i<rows;i++){
        int rowSum = 0;
        for(int j=0;j<cols;j++){
            rowSum+=arr[i][j];
        }
        finalOut = std::max(finalOut, rowSum);
    }
    return finalOut;
}

int MaxColSum(std::vector<std::vector<int>> arr, int rows, int cols){
    int finalOut = INT_MIN;
    for(int i=0;i<rows;i++){
        int rowSum = 0;
        for(int j=0;j<cols;j++){
            rowSum+=arr[j][i];
        }
        finalOut = std::max(finalOut, rowSum);
    }
    return finalOut;
}
