#include <stdio.h>
#include <string.h>
#include <vector>
#include <iostream>
using namespace std;

int main (void) {
	vector<int> counter(26, 0);
	string input;
	cout << "文字列に含まれているアルファベットの個数をカウントします >> ";
	getline(cin, input);
	
	int cnt = input.size();

	char alphabet ='a';
	for (int i=0;i<cnt;i++) {
		alphabet = 'a';
		for (int j=0;j<26;j++) {
			if(input[i]==alphabet)
				++counter[j];
			++alphabet;
		}
	}
	
	alphabet = 'a';	
	for (int i=0;i<26;i++) {
	    printf("%cの個数:%d\n",alphabet,counter[i]);
		++alphabet;
	}
	return 0;
}
