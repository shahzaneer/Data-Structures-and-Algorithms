#include <iostream>
#include <stack>

// Stack has been discussed properly in the ADT SECTION
using namespace std;
int main(){
    stack <int> s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

    stack<string> s2;
    s2.push("Noor");
    s2.push("Ali");
    s2.push("Hassan");
    s2.push("Ahmed");

    while (!s2.empty())
    {
        cout << s2.top() << " ";
        s2.pop();
    }

    return 0;
}