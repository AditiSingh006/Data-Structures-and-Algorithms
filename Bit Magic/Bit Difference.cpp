int countBitsFlip(int a, int b) {
        // code here
        int k = a ^ b;
        int count = 0;
        while(k){
            if(k&1) count++;
            k = k >> 1;
        }
        return count;
    }
