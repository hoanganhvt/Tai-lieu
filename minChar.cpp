#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int X[26];
int T = 0;
vector<int>existNigga;

int mySortType(int i,int j){
    return (X[i] < X[j]);
}
int minNum(string str,int k){
    for(int i = 0; i < str.size();i++){
        int index = 97-int(str[i]);
        if(X[index] == 0){
           T += 1;
           existNigga.push_back(index);
        }
        X[index]+=1;
    }
    sort(existNigga.begin(),existNigga.end(),mySortType);
    int S = 0;
    for(int i = 0; i < k;i++){
        S += X[existNigga[i]];
    }
    return T - S;
}
int main(){
    string str;
    int k;
    getline(cin,str);
    cin >> k;
    cout << minNum(str,k) << endl;
}
