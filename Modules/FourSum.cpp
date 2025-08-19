#include<vector>
#include<algorithm>
std::vector<std::vector<int>> FourSum(std::vector<int> &vec, int target=0){
    sort(vec.begin(), vec.end());
    std::vector<std::vector<int>> outVec;
    for(int i=0;i<vec.size();i++){
        if(i>0&&vec[i]==vec[i-1]) continue;
        for(int j=i+1;j<vec.size();j++){
            if(j>i+1&&vec[j]==vec[j-1]) continue;
            int k=j+1,l=vec.size()-1;
            while(k<l){
                long long sum=(long long)vec[i]+(long long)vec[j]+(long long)vec[k]+(long long)vec[l];
                if(sum<target){
                    k++;
                }else if(sum>target){
                    l--;
                }else if(sum==target){
                    outVec.push_back({vec[i], vec[j], vec[k], vec[l]});
                    k++;l--;
                    while(k<l&&vec[k]==vec[k-1])k++;
                }
            }
        }
    }
    return outVec;
}
