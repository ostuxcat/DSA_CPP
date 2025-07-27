#include <utility>
#include <vector>
using namespace std;
void BubbleSort(vector<int> &arr){
    int n = arr.size()-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }
}
