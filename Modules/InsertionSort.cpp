#include<vector>
void InsertionSort(std::vector<int> &arr){
    int n = arr.size();
    for(int i=1;i<n;i++){
        int curr=arr[i], prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
    return;
}
