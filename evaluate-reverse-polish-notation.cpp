class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto it = tokens.begin(); it!=tokens.end(); it++)
        {
            if((*it).compare("+")==0 || (*it).compare("-")==0 || (*it).compare("*")==0 || (*it).compare("/")==0)
            {
                int op1 = st.top();
                st.pop();
                int op2 = st.top();
                st.pop();
                int op3 = 0;
                if((*it).compare("+")==0)op3 = op1+op2;
                if((*it).compare("-")==0)op3 = op2-op1;
                if((*it).compare("*")==0)op3 = op1*op2;
                if((*it).compare("/")==0)op3 = op2/op1;
                st.push(op3);
            }
            else
            {
                st.push(stoi(*it));
            }
        }
        
        return st.top();
    }
};
