using namespace std;
#include <vector>


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int s = nums.size();
        vector <int> v1(s, 1);
        vector <int> v2(s, 1);
        vector <int> v3(s, 1);

        int start=1;
        for (int i=0; i<s; i++){
            v1[i] = start;
            start= start*nums[i];

        }
        start=1;
        for (int i=s-1; i>=0; i--){
            v2[i] = start;
            start= start*nums[i];

        }

        for (int i=0; i<s; i++){
            v3[i] = v1[i]*v2[i];
        }
        return v3;

    }
};
