#include <iostream>
#include <stack>

using namespace std;

int main() {
    // create a stack of integers
    stack<int> stack;
    // add elements to the stack
    stack.push(1);
    stack.push(2);
    stack.push(3);
    // access the top element of the stack
    int top = stack.top();
    cout << "Top element: " << top << endl; // prints "Top element: 3"
    // remove the top element
    stack.pop();
    return 0;
}
