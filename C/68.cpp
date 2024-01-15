#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int postfix(string str) {
    stack<int> s;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ' ') {
            continue;
        } else if (str[i] >= '0' && str[i] <= '9') {
            int num = 0;
            while (str[i] >= '0' && str[i] <= '9') {
                num = num * 10 + (int)(str[i] - '0');
                i++;
            }
            s.push(num);
        } else {
            int x = s.top();
            s.pop();
            int y = s.top();
            s.pop();
            if (str[i] == '-') s.push(y - x);
            if (str[i] == '+') s.push(y + x);
            if (str[i] == '*') s.push(y * x);
            if (str[i] == '/') s.push(y / x);
            if (str[i] == '^') s.push(pow(y, x));
        }
    }
    return s.top();
}

int main() {
    cout << "Enter the string: ";
    string s;
    getline(cin, s);
    int result = postfix(s);
    cout << "Result: " << result << endl;
    return 0;
}
