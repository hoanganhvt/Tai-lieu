#include<iostream>
#include<algorithm>
using namespace std;
int arr[10000][2];

int xepGach(int N){
	const int S = N;
	int X[S][2];
	for(int i = 0; i < N;i++){
		X[i][0] = arr[i][0];
		X[i][1] = arr[i][1];
		if(i > 0){
			X[i][0] += min( X[i-1][0] + min(arr[i][1], arr[i-1][1]), X[i-1][1] + min(arr[i][1],arr[i-1][0]));
			X[i][1] += min( X[i-1][1] + min(arr[i][0], arr[i-1][0]), X[i-1][0] + min(arr[i][0],arr[i-1][1]));
		}
	}
	return min(X[N-1][0],X[N-1][1]);
}
int main(){
	int N;
	cin >> N;
	for(int i = 0; i < N;i++){
		for(int j = 0; j <= 1;j++){
			int tmp;
			cin >> tmp;
			arr[i][j] = tmp;
		}
	}
	cout << xepGach(N) << endl;
}
