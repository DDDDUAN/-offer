#include <bits/stdc++.h>
using namespace std;

/* 请实现一个函数，把字符串 s 中的每个空格替换成"%20"。*/
/* 在原字符串修改 */
string replaceSpace(string s)
{
	if (s.empty()) return "";
	int i = s.size() - 1;
	int countOfSpace = 0;
	for (auto str : s) {
		if (str == ' ') countOfSpace++;
	}
	s.resize(s.size() + countOfSpace * 2);
	int j = s.size() - 1;
	while (i != j) {
		if (s[i] != ' ') {
			s[j] = s[i];
			i--;
			j--;
		}
		if (s[i] == ' ') {
			s[j] = '0';
			s[j - 1] = '2';
			s[j - 2] = '%';
			j -= 3;
			i--;
		}
	}
	return s;
}

/* 开辟新空间 */
string replaceSpace2(string s)
{
	if (s.empty()) return "";
	string ans;
	for (auto str : s) {
		if (str != ' ') {
			ans += str;
		}
		if (str == ' ') {
			ans += "%20";
		}
	}
	return ans;
}

int main05()
{


	return 0;
}