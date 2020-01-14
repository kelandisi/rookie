#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	string addStrings(string num1, string num2) {
		string ret;
		int carry = 0;
		for (int i = num1.size() - 1, j = num2.size() - 1; i >= 0 || j >= 0; i--, j--)
		{
			int sum = carry;
			sum += (i >= 0) ? num1[i] - '0' : 0;
			sum += (j >= 0) ? num2[j] - '0' : 0;
			ret.insert(ret.begin(), '0' + sum % 10);
			carry = sum / 10;
		}
		if (carry == 1)
			ret.insert(ret.begin(), '1');

		return ret;
	}
};
int main()
{
	string str1;
	string str2;
	string ret;
	cin >> str1;
	cin >> str2;
	Solution s;
	ret = s.addStrings(str1, str2);
	cout << ret;
	system("pause");
	return 0;
}
