class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector <int> v;
        for(int i=left;i<=right;i++){
            
            int temp = i;
            int flag = 0;
            
            while(temp){
                int rem = temp%10;

                if(rem != 0 && i%rem == 0)
                    flag = 1;
                else{
                    flag = 0;
                    break;
                }
                temp /= 10;
            }
            if(flag==1)
                v.push_back(i);
        }
        return v;
        
    }
};