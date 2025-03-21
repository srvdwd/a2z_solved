class Solution {
    public:
        // Function to find Next Smaller Element (NSE)
        vector<int> next_smaller(vector<int>& arr) {
            int n = arr.size();
            vector<int> nse(n, n);  // Initialize with 'n' (out of bounds)
            stack<int> st;
    
            for (int i = n - 1; i >= 0; i--) {  // Iterate from right to left
                while (!st.empty() && arr[st.top()] > arr[i]) {
                    st.pop();
                }
                if (!st.empty()) {
                    nse[i] = st.top();
                }
                st.push(i);
            }
            return nse;
        }
    
        // Function to find Previous Smaller Element (PSE)
        vector<int> previous_smaller(vector<int>& arr) {
            int n = arr.size();
            vector<int> pse(n, -1);  // Initialize with '-1' (out of bounds)
            stack<int> st;
    
            for (int i = 0; i < n; i++) {  // Iterate from left to right (FIXED)
                while (!st.empty() && arr[st.top()] >= arr[i]) {
                    st.pop();
                }
                if (!st.empty()) {
                    pse[i] = st.top();
                }
                st.push(i);
            }
            return pse;
        }
    
        // Function to calculate the sum of subarray minimums
        int sumSubarrayMins(vector<int>& arr) {
            int mod = (int)(1e9 + 7);
            int n = arr.size();
            int total = 0;
    
            vector<int> nse = next_smaller(arr);
            vector<int> pse = previous_smaller(arr);
    
            for (int i = 0; i < n; i++) {
                int left = i - pse[i];  // Distance to previous smaller
                int right = nse[i] - i; // Distance to next smaller
                total = (total + (1LL * right * left * arr[i]) % mod) % mod;
            }
            return total;
        }
    };
    