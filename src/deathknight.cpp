//
// Created by Marcus Dicander on 2020-04-23.
//

#include<bits/stdc++.h>
static const int DBG = 0;
using namespace std;
int main() {
    cin.sync_with_stdio(false);
    int N;
    cin >> N;
    int answer = 0;
    while(N--) {
        string line;
        cin >> line;
        if(DBG) cout << line << endl;
        if(line.find("CD")==string::npos)++answer;
    }
    cout << answer << endl;

}