#include<iostream>
#include<math.h>
#include<set>
#include<fstream>
using namespace std;



int pytagoTriple(int P){
    int a = 0;
    int b = 0;
    int c = 0;
    int m = 2;
    int cnt = 0;
    while(c < P){
        for(int n = 1;n < m;n++){
            a = 2*m*n;
            b = m*m - n*n;
            c = m*m+n*n;
            if (c > P)
                break;
            if(a+b+c == P){
                cnt++;
            }
        }

        m++;
    }
    return cnt;
}
int main(){
    cout << pytagoTriple(pow(10,6)) << endl;
}
