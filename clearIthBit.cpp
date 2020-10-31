#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void clearithbit(int &n,int i){
	int a = 1;
	// Creating bitmask for clearing ith bit
	a = a<<i;
	a = ~a;
	// we are passing by reference so we don't need to return anythink we are pointing to same location as n;
	n = n & a;
}

int main(){
	int n = 5,i=0;
	clearithbit(n,i);
	cout<<n<<endl;
	return 0;
}
