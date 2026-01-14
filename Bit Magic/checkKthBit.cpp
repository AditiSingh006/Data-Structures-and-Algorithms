bool checkKthBit(int n, int k) {
        //  code here
        int h = n>>k;
        if(h&1) return true;
        return false;
    }
