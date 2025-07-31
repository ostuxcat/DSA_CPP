#include<vector>
void reserveArray(std::vector<int> &arr, int p1, int p2){
    while(p1<=p2){
        std::swap(arr[p1], arr[p2]);
        p1++;p2--;
    }
}
void NextPermutation(std::vector<int> &arr){
    int piv=-1, n=arr.size();
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            piv=i;
            break;
        }
    }
    if(piv==-1){
        reserveArray(arr, 0, n-1);
        return;
    }
    for(int j=n-1;j>piv;j--){
        if(arr[piv]<arr[j]){
            std::swap(arr[piv], arr[j]);
            break;
        }
    }
    reserveArray(arr, piv+1, n-1);
}
