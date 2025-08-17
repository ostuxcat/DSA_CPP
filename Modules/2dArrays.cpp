#include <climits>
#include<utility>
#include<algorithm>
std::pair<int, int> LinearSearch(int arr[][3], int rows, int cols, int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==key)return {i, j};
        }
    }
    return {-1, -1};
}
int MaxRowSum(int arr[][3], int rows, int cols){
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

int MaxColSum(int arr[][3], int rows, int cols){
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

int DiagonalSum(int arr[][3], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i][i];
        if(i!=n-i-1) sum+=arr[i][n-i-1];
    }
    return sum;
}
