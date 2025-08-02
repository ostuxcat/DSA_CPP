#include <vector>
void SelectionSort(std::vector<int> &arr){
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        int swapIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[swapIndex]) swapIndex=j;
        }
        std::swap(arr[swapIndex], arr[i]);
    }
    return;
}
