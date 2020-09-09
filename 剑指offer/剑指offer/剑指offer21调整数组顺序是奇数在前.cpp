#include <bits/stdc++.h>
using namespace std;

vector<int> exchange(vector<int>& nums)
{
	if (nums.size() == 0) return nums;
	int l = 0;
	int r = nums.size() - 1;
	while (l < r) {
		while (nums[l] & 1) {
			l++;
			if (l == r) {
				return nums;
			}
		}
		while (!(nums[r] & 1)) {
			r--;
			if (l == r) {
				return nums;
			}
		}
		swap(nums[l], nums[r]);
	}
	return nums;
}

int main021()
{
	return 0;
}