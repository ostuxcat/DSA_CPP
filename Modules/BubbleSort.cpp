#include <utility>
#include <vector>
void BubbleSort(std::vector<int> &arr){
    int n = arr.size()-1;
    for(int i=0;i<n;i++){
        bool isSwaped = false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]) std::swap(arr[j], arr[j+1]); isSwaped=true;
        }
        if(!isSwaped) return;
    }
}
