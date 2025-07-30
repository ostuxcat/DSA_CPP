#include <iostream>
#include <vector>
using namespace std;
bool isValid(vector<int> &arr, int n, int m, int max){
    int std=1, pages=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max) return false;
        if(pages+arr[i]<=max){
            pages+=arr[i];
        }else{
            std++;
            pages = arr[i];
        }
    }
    return std>m?false:true;
}
int findMinPages(vector<int> &arr, int n, int m){
    if(m>n) return -1;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int st=0,end=sum, ans=-1;
    while(st<=end){
        int mid = st+((end-st)/2);
        if(isValid(arr, n, m, mid)){
            ans = mid;
            end = mid-1;
        }else{
            st = mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {15, 17, 20};
    int m=2, n=arr.size();
    cout << findMinPages(arr, n, m) << endl;
    return 0;
}
