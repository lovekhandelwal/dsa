#include<iostream>
#include<set>

using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(4);
    s.insert(2);
    s.insert(5);
    s.insert(1);
    int n = s.size();
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    // count will tell that the element is present in set or not
    cout<<"5 is present in the set or not "<<s.count(5)<<endl;

}


class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        int lastIndex = 0; 
        int l = nums[0];

        for (int i = 1; i < n; i++) {
            if (nums[i] > l) { 
                ans += l * 1LL * (i - lastIndex);
                l = nums[i];
                lastIndex = i; 
            }
        }
        ans += l * 1LL * (n - 1 - lastIndex);
        return ans;
    }
};