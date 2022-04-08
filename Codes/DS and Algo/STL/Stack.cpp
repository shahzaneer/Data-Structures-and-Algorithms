#include <iostream>
#include <stack>
using namespace std;
int main(){
stack <int> s;
s.push(5);
s.push(10);
s.push(15);
s.push(20);
 int n;
for(int i=0; i<=s.size()+1;i++){
     n = s.empty();
     s.pop();
    cout<<n<<endl;
}
return 0;
}