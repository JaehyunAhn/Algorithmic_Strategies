#include <stdio.h>
#include <iostream>
#define FOR(i,n) for(int i=0; i < (n); i++)
/*
bool hasDuplicate(const vector<int>& array) {
	FOR(i, array.size())
		FOR(j, i)
			if(array[i] == array[j])
				return true;
	return false;
}*/

int main() {
	int i;
	FOR(i, 10)
		printf("hello world\n");
	return 0;
}
