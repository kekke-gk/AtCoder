#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> P(200001);
    for (int i = 0; i <= 200000; i++){
        P[i] = i;
    }

    vector<int> Ps(N);
    for (int i = 0; i < N; i++) {
        cin >> Ps[i];
    }

    vector<int> removed;

    int p;
    for (int i = 0; i < N; i++) {
        p = Ps[i];

        if (p < P.size()){
            if (P[p] < p) {
                for (int j = p; j < P.size() && P[j] <= p; j++){
                    cout << j << endl;
                    if (P[j] == p) {
                        P.erase(P.begin() + j);
                        break;
                    }
                }
            } else {
                for (int j = p; j >= 0 && p <= P[j]; j--){
                    cout << j << endl;
                    if (P[j] == p) {
                        P.erase(P.begin() + j);
                        break;
                    }
                }
            }
        }

        removed.push_back(p);

        cout << P[0] << "-----" << endl;
        
    }
}