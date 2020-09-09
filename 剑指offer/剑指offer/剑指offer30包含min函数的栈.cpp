#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:
	MinStack() {

	}
	void push(int x) {
		if (myStack.empty()) {
			myStack.push(x);
			minStack.push(x);
		}
		else {
			myStack.push(x);
			if (x < minStack.top()) {
				minStack.push(x);
			}
			else {
				minStack.push(minStack.top());
			}
		}
	}
	void pop()
	{
		myStack.pop();
		minStack.pop();
	}
	int top()
	{
		return myStack.top();
	}

	int min()
	{
		return minStack.top();
	}


private:
	stack<int> myStack;
	stack<int> minStack;
};

int main030()
{
	return 0;
}