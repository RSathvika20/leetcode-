class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int> st;

    for (const string& i : op) {
        if (i == "C") {
            st.pop();
        } else if (i == "D") {
            st.push(2 * st.top());
        } else if (i == "+") {
            int top = st.top(); st.pop();
            int stop = st.top();
            st.push(top);
            st.push(top + stop);
        } else {
            st.push(stoi(i));  
        }
    }

    int total = 0;
    while (!st.empty()) {
        total += st.top();
        st.pop();
    }

    return total;
        
    }
};