#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
// Problem - Check If Two String Arrays are Equivalent
    // https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/description/
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1,str2="";
        for(auto i:word1){
            str1.append(i);
        }
        for(auto j:word2){
            str2.append(j);
        }
        return str1==str2;
    }

    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int i = 0, j = 0; // word pointers
        int m = 0, n = 0; // char pointers
        
        while (i < word1.size() and j < word2.size()) {            
            if (word1[i][m++] != word2[j][n++])
                return false;
            
            if (m >= word1[i].size())
                i++, m = 0;
            
            if (n >= word2[j].size())
                j++, n = 0;
        }
        return i == word1.size() and j == word2.size();
    }

// 1688. Count of Matches in Tournament
    //https://leetcode.com/problems/count-of-matches-in-tournament/description/
    int numberOfMatches(int n) {
        int ans=0;
        while(n>1){
            ans+=n/2;
            n=(n+1)/2;
        }
        return ans;
    }
};

int main(){
    return 0;
}