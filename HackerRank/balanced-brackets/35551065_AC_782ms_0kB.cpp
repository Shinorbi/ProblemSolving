#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    string s;
    cin >> s;

    stack<char>st;

    bool ans = true;

    for (char c : s) {
      if (c == ')' || c == ']' || c == '}') {
        if ((!st.empty()) && ((c == ')' && st.top() == '(') ||(c == ']' && st.top() == '[') ||(c == '}' && st.top() == '{'))) {

          st.pop();
        }

        else {
          ans = false;
          break;
        }

      }

       else
        st.push(c);
    }

    if (ans && st.empty())
      cout << "YES" << endl;

    else
      cout << "NO" << endl;
  }

  return 0;
}
