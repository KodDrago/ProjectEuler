#include<iostream>
#include<vector>
#include "Palindrome.h"

using namespace std;

int checkIfPalindrome(int x) {
	for (int i = x; i < 0; i%=10) {
		cout << i << endl;
	}
	cout << x << endl;
	return 0;
}