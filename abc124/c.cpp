#include <bits/stdc++.h>

#define INF (1e9)

using namespace std;

int main() {
    char S[100000] = {0};
    int cnt0 = 0;
    int cnt1 = 0;

    cin >> S;

    for (int i = 0; S[i] != 0; i++) {
        if(i % 2 == 0){
            if(S[i] == '0') cnt0++;
            if(S[i] == '1') cnt1++;
        }else{
            if(S[i] == '0') cnt1++;
            if(S[i] == '1') cnt0++;
        }
    }

    printf("%d\n", min(cnt0, cnt1));
}
