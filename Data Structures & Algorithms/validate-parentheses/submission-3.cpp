class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.length() <= 1){
            return false;
        }
        for(int i =0;i< s.length();i++){
            char ch = s[i];
            if(ch == '(' || ch == '{' || ch =='['){
                st.push(ch);
            }
            else{
                if(st.empty()) return false;
                if(st.top() == '(' && ch == ')' || st.top() == '{' && ch == '}' || st.top() == '[' && ch == ']'){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            
        }
        if(st.empty()){
            return true;
        }      
        else{
            return false;
        }
    }
};
