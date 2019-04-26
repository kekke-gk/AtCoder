#include <bits/stdc++.h>
#include <boost/dynamic_bitset.hpp>

#define INF (1e9)


using namespace std;

int main() {
    using boost::dynamic_bitset;
    int N;
    string S;

    cin >> N;
    cin >> S;

    int idxw = -1, idxb = -1;

    for (int i = N-1; i >= 0; i--) {
        if(S[i] == '.'){
            idxw = i;
            break;
        }
    }

    for (int i = 0; i < N; i++) {
        if(S[i] == '#'){
            idxb = i;
            break;
        }
    }

    if(idxw == -1 || idxb == -1){
        printf("0\n");
        return 0;
    }

    replace(S.begin(), S.end(), '#', '1');
    replace(S.begin(), S.end(), '.', '0');
    dynamic_bitset<> B(S);
    for (int i = idxb; i <= idxw; i++) {

    }
}
