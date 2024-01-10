#include <iostream>
#include <queue>
using namespace std;

void generateBinary(int n) {
    queue<string> q;
    q.push("1");
    for (int i = 1; i <= n; ++i) {
        string front = q.front();
        q.pop();
        cout << front << " ";
        q.push(front + "0");
        q.push(front + "1");
    }
    cout << endl;
}

int main() {
    int n = 100;
    generateBinary(n);
    return 0;
}
