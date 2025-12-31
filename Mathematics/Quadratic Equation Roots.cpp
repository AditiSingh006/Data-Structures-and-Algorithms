vector<int> quadraticRoots(int a, int b, int c) {
        int d = pow(b,2) - (4*a*c);
        if(d<0) return {-1}; // if the roots are imaginary
        int a0 = floor((-(b)+sqrt(d))/(2*a));
        int a1 = floor((-(b)-sqrt(d))/(2*a));
        vector<int> k={a0,a1};
        return k;
    }
