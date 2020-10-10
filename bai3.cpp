#include<iostream>

using namespace std;
int sum(int N){
	int cnt  = 0;
	while(N > 0){
		cnt += N%10;
		N = N/10;
	}
	return cnt;
}


int lengthOfNumber(int N){
	int cnt  = 0;
	while(N > 0){
		cnt += 1;
		N = N/10;
	}
	return cnt;
}
int bai3(int N){
	int cnt = 0;
	for(int i = 9*lengthOfNumber(N);i >= 1 ;i--){
		if (sum(N-i-sum(i))==i){
			cout<<(N-i-sum(i))<<endl;
			cnt++;
		} 
	}
	return cnt;
}
int main(){

	cout << bai3(9939) << endl;
}
