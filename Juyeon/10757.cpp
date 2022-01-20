/*
* 220120
* ¿Ã¡÷ø¨
*/

#include <iostream>
#include <stack>

using namespace std;

stack<int> calcPlus(string& a, string& b) {
    stack<int> st;
    int p1 = a.length() - 1; 
    int p2 = b.length() - 1; 
    bool carry = false; 

    while (p1 >= 0 && p2 >= 0) { 
        int num = (a[p1--] - '0') + (b[p2--] - '0'); 
        if (carry) 
            num += 1;
        carry = num / 10;  
        st.push(num % 10); 
    }
    while (p1 >= 0) { 
        int num = (a[p1--] - '0'); 
        if (carry) 
            num += 1;
        carry = num / 10;  
        st.push(num % 10); 
    }
    while (p2 >= 0) { 
        int num = (b[p2--] - '0'); 
        if (carry) 
            num += 1;
        carry = num / 10;
        st.push(num % 10);
    }
    if (carry)
        st.push(1);

    return st;
}

int main() {
    string a, b; 
    stack<int> st; 

    cin >> a >> b;

    st = calcPlus(a, b);

    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
    cout << '\n';

    return 0;
}