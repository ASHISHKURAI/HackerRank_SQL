class Solution {
  public:
    int maxPeopleDefeated(int p) {
        // Code Here
        int start = 1;
        int end = 1000;
        int ans = 0;
        while(start<=end){
            
            int mid = start+((end-start)/2);
            int sum = (mid*(mid+1)*((mid*2)+1))/6;
            
            if(sum<=p){
                ans = mid;
                start = mid+1;
            }
            else end = mid-1;
            
        }
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna