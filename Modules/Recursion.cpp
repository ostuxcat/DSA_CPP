#include<iostream>
#include<vector>
void printN(int n){
    std::cout << n << " ";
    if(n==1){
        std::cout<<std::endl;
        return;
    }
    printN(n-1);
}

int factorial(int n){
    if(n<=0) return 1;
    return n*factorial(n-1);
}

int sumN(int n){
    if(n==1) return n;
    return n+sumN(n-1);
}

int fibonacci(int n){
    if(n<=1) return n;
    return fibonacci(n-1)+fibonacci(n-2);
}

bool isSorted(std::vector<int> vec, int n){
    if(n<=1) return true;
    return (vec[n-1]>=vec[n-2] && isSorted(vec, n-1));
}

int binarySearch(std::vector<int> vec, int target, int st, int end){
    if(st<=end){
        int mid = st+((end-st)/2);
        if(vec[mid]==target) {
            return mid;
        }else if(vec[mid]<=target){
            return binarySearch(vec, target, mid+1, end);
        }else{
            return binarySearch(vec, target, st, mid-1);
        }
    }
    return -1;
}
void printSubsets(std::vector<int> &vec, std::vector<int> &subset, int i){
    if(i==vec.size()){
        for(int val:subset){
            std::cout << val << " ";
        }
        std::cout << std::endl;
        return;
    }
    subset.push_back(vec[i]);
    printSubsets(vec, subset, i+1);
    subset.pop_back();
    printSubsets(vec, subset, i+1);
}

void getSubsets(std::vector<int> &vec, std::vector<int> &subset, int i, std::vector<std::vector<int>> &allSubsets){
    if(i==vec.size()){
        allSubsets.push_back({subset});
        return;
    }
    subset.push_back(vec[i]);
    getSubsets(vec, subset, i+1, allSubsets);
    subset.pop_back();
    getSubsets(vec, subset, i+1, allSubsets);
}
