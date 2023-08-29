class Solution {
public:
    int bestClosingTime(string customers) {
        int mxscore = 0, s = 0, bt = -1;
        for(int i = 0; i < customers.size(); i++) {
            s += (customers[i] == 'Y') ? 1 : -1;
            if(s > mxscore) {
                mxscore = s;
                bt = i;
            }
        }
        return bt + 1;
        
    }
};