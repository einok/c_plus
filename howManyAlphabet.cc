#include <stdio.h>
#include <string.h>
#include <vector>
#include <iostream>
#include "howManyAlphabet.h"
using namespace std;


int main (void) {
	//vector<int> counter(26, 0);
	string input;
	cout << "文字列に含まれているアルファベットの個数をカウントします >> ";
	getline(cin, input);
	
	//int cnt = input.size();
	string strs = "abcdefghijklmnopqrstuvwxyz1234567890 !?\"#$%&'(){}[]=~|-^\\`+*<>_@;:,.";
	vector<int> counter;
	counter = howMany(input,strs);
	for (int i = 0;i<counter.size();i++) {
		cout << strs[i] << ":" << counter[i] << "\n";
	}

	return 0;
}

vector<int> howMany(string searchSource,string strs) {
	// string strs = "abcdefghijklmnopqrstuvwxyz1234567890";
	vector<int> cnt(strs.size(),0);
	
	for (auto i = 0;i<searchSource.size();i++) {
		for (auto j = 0;j<strs.size();j++) {
			if (searchSource[i]==strs[j]) {
				++cnt[j];
				// cout << "hello";
			}
			// cout << j << ":" << cnt[j] << "\n";
		}
	}
	
	
	return cnt;
}
