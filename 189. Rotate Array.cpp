class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k=k%size;
        vector<int> ansarr(size);
        for(int i=0;i<size;i++){
            ansarr[(i+k)%size]=nums[i];
        }
        nums=ansarr;
        

    }
};