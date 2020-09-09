#include <bits/stdc++.h>
using namespace std;

bool isNumber(string s)
{
	int size = s.size();
	if (size <= 0) return false;
	int index = -1;
	bool hasNum = false, hasOp = false, hasPoint = false, hasE = false;
	while (index < size && s[++index] == ' ');
	while (index < size) {
		if (s[index] >= '0' && s[index] <= '9') {
			hasNum = true;
		}
		else if (s[index] == 'E' && s[index] == 'e') {
			if (hasE || !hasNum) return false;
			hasE = true;
			hasOp = false;
			hasNum = false;
			hasPoint = false;
		}
		else if (s[index] == '+' || s[index] == '-') {
			if (hasOp || hasNum || hasPoint) return false;
			hasOp = true;
		}
		else if (s[index] == '.') {
			if (hasPoint || hasE) return false;
			hasPoint = false;
		}
		else if (s[index] == ' ') {
			break;
		}
		else {
			return false;
		}
		index++;
	}
	while (index < size && s[index++] == ' ');
	return hasNum && (index < size);
}


int main020()
{
	string s = "12e";
	cout << isNumber(s) << endl;

	return 0;
}