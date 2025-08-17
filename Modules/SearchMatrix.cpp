#include<vector>
std::pair<int, int> MatrixSearch1(std::vector<std::vector<int>> vec, int target){
    int finalRow=0;
    int st1=0, end1=vec.size()-1;
    int st2=0, end2=vec[0].size()-1;
    while(st1<=end1){
        int mid1 = st1+((end1-st1)/2);
        if(vec[mid1][st2]<=target && vec[mid1][end2]>=target){
            finalRow = mid1;
            break;
        }else if(vec[mid1][st2]<target){
            st1=mid1+1;
        }else if(vec[mid1][end2]>target){
            end1=mid1-1;
        }
    }
    while(st2<=end2){
        int mid2 = st2+((end2-st2)/2);
        if(vec[finalRow][mid2]==target){
            return {finalRow, mid2};
        }else if(vec[finalRow][mid2]<target){
            st2=mid2+1;
        }else if(vec[finalRow][mid2]>target){
            end2=mid2-1;
        }
    }
    return {-1, -1};
}

std::pair<int, int> MatrixSearch2(std::vector<std::vector<int>> vec, int target){
    return {-1, -1};
}
