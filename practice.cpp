#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
// Check If Two String Arrays are Equivalent
// https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/description/
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1,str2="";
        for(auto i:word1){
            str1.append(i);
        }
        for(auto j:word2){
            str2.append(j);
        }
        if(str1==str2)  return true;
        return false;
    }
};

int main(){
    return 0;
}