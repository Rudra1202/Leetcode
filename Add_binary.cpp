#include <bits/stdc++.h>
using namespace std;
string addbinary(string a, string b)
{
	if (a.length() > b.length())
		return addbinary(b, a);
	int diff = b.length() - a.length();
	string bal;
	for (int i = 0; i < diff; i++)
		bal.push_back('0');
	a = bal + a;
	string s;
	char carry = '0';
	for (int i = a.length() - 1; i >= 0; i--) {
		if (a[i] == '1' && b[i] == '1') {
			if (carry == '1')
				s.push_back('1'), carry = '1';
			else
				s.push_back('0'), carry = '1';
		}
		else if (a[i] == '0' && b[i] == '0') {
			if (carry == '1')
				s.push_back('1'), carry = '0';
			else
				s.push_back('0'), carry = '0';
		}
		else if (a[i] != b[i]) {
			if (carry == '1')
				s.push_back('0'), carry = '1';
			else
				s.push_back('1'), carry = '0';
		}
	}
	if (carry == '1')
		s.push_back(carry);
	reverse(s.begin(), s.end());
	int index = 0;
	while (index + 1 < s.length() && s[index] == '0')
		index++;
	return (s.substr(index));
}
int main()
{
	string a = "1101", b = "100";
	cout << addbinary(a, b) << endl;
	return 0;
}
