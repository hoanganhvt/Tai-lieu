#include<iostream>
#include<string>
using namespace std;
/*
Cho 2 xâu A,B tìm xâu q có độ dài lớn nhất sao cho tồn tại 2 số nguyên i,j để A = q^i; B = q^j
*/

string LPS(string s){
    int L = s.length();
    string Left = s.substr(0,L/2);
    string Right = s.substr(L/2);
    while(Left != Right){
        if(Left.length() == Right.length()){
            Right = Right.substr(1);
        }
        if(Left.length() > Right.length()){
            Left = Left.substr(0,Left.length()-1);
        }


        if(Left.length() < Right.length()){
            Right = Right.substr(1);
        }
    }

    return Right;
}

string powOfString(string s){
    string t = LPS(s);
    if(t == ""){
        return s;
    }
    if(s.length() % t.length() != 0 || s.length() == 1){
        return s;
    }

    while(LPS(s) != ""){
        s = LPS(s);
    }
    return s;
}

string bai8(string a,string b){
    string sub1 = powOfString(a);
    string sub2 = powOfString(b);
    if(sub1 != sub2){
        return "NO";
    }
    return sub1;
}
int main(){
}
