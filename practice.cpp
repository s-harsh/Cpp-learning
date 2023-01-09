#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution{
public:
// Problem 1- Check If Two String Arrays are Equivalent
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

// Problem 2-  1688. Count of Matches in Tournament
    //https://leetcode.com/problems/count-of-matches-in-tournament/description/
    int numberOfMatches(int n) {
        int ans=0;
        while(n>1){
            ans+=n/2;
            n=(n+1)/2;
        }
        return ans;
    }

// Problem 3- 2500. Delete Greatest Value in Each Row
    // https://leetcode.com/problems/delete-greatest-value-in-each-row/description/
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int sum = 0;
        for (auto& row : grid) sort(row.begin(), row.end());
        // sort(grid[0].begin(),grid[0].end());
        for (int j = 0; j < grid[0].size(); j++){
            int n = 0;
            for (int i = 0; i < grid.size(); i++)
                n = max(n, grid[i][j]);
            sum += n;
        } 
        return sum;
    }
// Problem 4 - 804. Unique Morse Cord Words
    // https://leetcode.com/problems/unique-morse-code-words/description/
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>table={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        unordered_map<string,int>mp;
        for(int i=0;i<words.size();i++){
            string str;
            for(int j=0;j<words[i].size();j++){
                str+=table[words[i][j]-'a'];
            }
            mp[str]++;
        }
        return mp.size();
    }
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>table={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        unordered_map<string,int>mp;
        for(auto w:words){
            string code;
            for(auto c:w)   code+=table[c-'a'];
            mp[code]++;
        }
        return mp.size();

// Problem 5 - 1614. Maximum Nesting Depth of the Parenthese
    //https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/
    int maxDepth(string s) {
        int depth=0,open=0;
        for(auto c:s){
            if(c=='(')  open++;
            if(c==')')  open--;
            depth=max(depth,open);
        }
        return depth;
    }

// Problem 6 - 2006. Count Number of paris with absoulte Difference K
    // https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/description/
    int countKDifference(vector<int>& nums, int k) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                if(abs(nums[j]-nums[i])==k) ans++;
            }
        }
        return ans;
    }

// Problem 7 - 1816. Truncate Sentese
    //https://leetcode.com/problems/truncate-sentence/submissions/873921351/
    string truncateSentence(string s, int k) {
        for(int i=0;i<s.length();i++){
            if(s[i]==' ' && --k==0)  return s.substr(0,i);
        }
        return s;
    }

// Problme 8 - 144. Binary Tree Preorder Traversal
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>preorder;
        if(root ==NULL) return preorder;

        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            root=st.top();
            st.pop();
            preorder.push_back(root->val);

            if(root->right !=NULL)  st.push(root->right);
            if(root->left!=NULL)    st.push(root->left);
        }
        return preorder;
    }

int main(){
    return 0;
}