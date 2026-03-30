class MinStack {
public:
    stack<int> st;
    stack<int> mst;
    int mini = INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if (mst.empty() || val <= mst.top()) {
            mst.push(val);
        } else {
            mst.push(mst.top()); 
        }
    }
    
    void pop() {
        st.pop();
        mst.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mst.top();
    }
};
