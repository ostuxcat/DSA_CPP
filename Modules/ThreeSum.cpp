#include<vector>
#include<algorithm>
std::vector<std::vector<int>> ThreeSum(std::vector<int> vec, int target=0){
    sort(vec.begin(), vec.end());
    std::vector<std::vector<int>> outVec;
    for(int i=0;i<vec.size();i++){
        if(i>0&&vec[i]==vec[i-1])continue;
        int j=i+1, k=vec.size()-1;
        while(j<k){
            int sum=vec[i]+vec[j]+vec[k];
            if(sum<target){
                j++;
            }else if(sum>target){
                k--;
            }else if(sum==target){
                outVec.push_back({vec[i], vec[j], vec[k]});
                j++;k--;
                while(j<k&&vec[j]==vec[j-1])j++;
            }
        }
    }
    return outVec;
}
