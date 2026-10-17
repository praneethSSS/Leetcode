class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        // string ans = "";

        for(int i=0;i<s.size();i++){
            if(s[i] != ']'){
                st.push(s[i]);
            }else{
                string curr = "";
                while(!st.empty() && st.top()!= '['){
                        curr = st.top() + curr;
                        st.pop();
                    }
                    //remove [
                    st.pop();

                int k = 0;
                int place = 1;    

                while(!st.empty() && isdigit(st.top())){
                    k += (st.top() - '0')*place;
                    place*=10;
                    st.pop();
                }

                string decoded = "";
                while(k--){
                    decoded += curr;
                }

                for(char c : decoded){
                    st.push(c);
                }
            }

            
        }

        string ans = "";
        while(!st.empty()){
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};