#include <iostream>
#include <stack>

using namespace std;

//일의 자리부터 더하기 때문에 stack쓰는게 나음
stack<int> calc(string &a, string &b) {
    stack<int> st;
    int i = a.length() - 1;
    int j = b.length() - 1;
    bool carry = false;
    
    while(i >=0 && j>=0) {
        int num = (a[i--] - '0') + (b[j--] - '0');
        if(carry) num += 1;
        carry = num / 10;
        st.push(num%10);
    }
    
    while(i>=0) {
        int num = a[i--] - '0';
        if(carry) num+= 1;
        carry = num/10;
        st.push(num%10);
    }
    while(j>=0) {
        int num = b[j--] - '0';
        if(carry) num+= 1;
        carry = num/10;
        st.push(num%10);
    }
    if(carry) st.push(1);
    
    return st;   
}

int main() {
    string a, b;
    stack<int> st;
    cin>>a>>b;
    
    st = calc(a, b);
    
    while(!st.empty()) {
        cout<<st.top();
        st.pop();
    }
    cout<<"\n";
    
    return 0;
}
