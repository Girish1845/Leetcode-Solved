class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.length();
        int count =0;
        for (int i = 0; i < k; i++){
             if(blocks[i]=='W'){
                 count++;
             }
        }
        int count_win=count;
        for (int i = k; i < n; i++) {
             if(blocks[i-k]=='W') count--;
            if(blocks[i]=='W') count++;
         count_win=min(count,count_win);
        }
        return count_win;
    }
};