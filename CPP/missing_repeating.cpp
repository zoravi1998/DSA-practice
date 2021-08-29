#include <bits/stdc++.h>

using namespace std;

int repeatnum(vector<int>& nums){
    if(nums.size()>1){
        int slow = nums[1];
        int fast = nums[nums[1]];

        while(slow!=fast){
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        fast = 1;
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
    return 0;
}
int main(){
    int n,sum=0,tsum=0,repeat=0,miss=0;
    cin>>n;
    vector<int> nums(n+1);
    for(int i=1;i<=n;i++){
        cin>>nums[i];
    }
    tsum = (n*(n+1))/2;
    cout<<tsum<<endl;
    for (int i = 1; i < nums.size(); i++)
    {
        sum += nums[i];
    }
    int tempnum = tsum-sum;
    cout<<tempnum<<endl;
    repeat = repeatnum(nums);
    cout<<repeat<<endl;
    miss = tempnum + repeat;
    cout<<miss <<","<<repeat<<endl;
}