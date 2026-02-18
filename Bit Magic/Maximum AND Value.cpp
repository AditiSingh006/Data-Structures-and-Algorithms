int maxAND(vector<int>& arr) {
        // code here
        int maxi = 0;
        int n = arr.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                maxi = max(maxi, arr[i]&arr[j]);
            }
        }
        return maxi;
    }
