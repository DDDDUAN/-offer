#include <bits/stdc++.h>
using namespace std;

int minArray(vector<int>& numsber)
{
	int l = 0;
	int r = numsber.size() - 1;
	while (l != r) {
		int mid = (l + r) >> 1;
		if (numsber[l] < numsber[mid]) {
			l = mid+1;
		}
		else if (numsber[mid] < numsber[r])
		{
			r = mid;
		}
		else {
			l++;
		}
	}
	return numsber[l];
}

int main011()
{
	vector<int> tmp = { 3,4,5,1,2 };

	cout << minArray(tmp) << endl;
	
	return 0;
}