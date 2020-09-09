#include <bits/stdc++.h>
using namespace std;

class CQueue {
public:
	stack<int> sIn;
	stack<int> sOut;
	CQueue() {

	}

	void appendTail(int value) {
		sIn.push(value);
		if (sOut.empty()) {
			while (!sIn.empty()) {
				sOut.push(sIn.top());
				sIn.pop();
			}
		}
	}

	int deleteHead() {
		if (sOut.empty()) {
			if (sIn.empty()) {
				return -1;
			}
			else {
				while (!sIn.empty()) {
					sOut.push(sIn.top());
					sIn.pop();
				}
			}
		}
		int tmp = sOut.top();
		sOut.pop();
		return tmp;
	}
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */

int main09()
{
	return 0;
}