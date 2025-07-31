#include<vector>
void MergeSortedArray(std::vector<int> &arr1, int m, std::vector<int>&arr2, int n){
    int idx=m+n-1, i=m-1, j=n-1;
    while(i>=0&&j>=0){
        if(arr1[i]>=arr2[j]){
            arr1[idx] = arr1[i];
            idx--;i--;
        }else{
            arr1[idx]=arr2[j];
            idx--;j--;
        }
    }
    while(j>=0){
        arr1[idx] = arr2[j];
        idx--;j--;
    }
    return;
}
