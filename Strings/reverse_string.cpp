#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    
    string reverseWords(string S) 
    { 
        
        stack<string> st;
        string s="";
        for(int i=0;i<S.size();i++){
            if(S[i]!='.'){
                s+=S[i];
            }
            if(S[i]=='.'){
                st.push(s);
                s="";
            }
        }
        st.push(s);
        string res="";
        while(!st.empty()){
            string str=st.top();
            st.pop();
            res+= str + ".";

        }
        res.pop_back();
        return res;
    } 
};


int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}