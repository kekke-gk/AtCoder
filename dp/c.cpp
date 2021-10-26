#include <bits/stdc++.h>

#define INF (1e9)

using namespace std;

template<typename T>
istream& operator >> (istream& is, vector<T>& vec){
  for(T& x: vec) is >> x;
  return is;
}

template <typename T>
vector<size_t> sort_indexes(const vector<T> &v) {

    vector<size_t> idx(v.size());
    iota(idx.begin(), idx.end(), 0);

    sort(idx.begin(), idx.end(),
            [&v](size_t i1, size_t i2) {return v[i1] > v[i2];});

    return idx;
}

int sameNum(vector<int> abc, int idx){
    if(idx == 0)
        return abc[1] == abc[2];
    if(idx == 1)
        return abc[0] == abc[2];
    return abc[0] == abc[1];
}

int main() {
    int N;
    cin >> N;

    vector<int> abc(3, 0);
    vector<int> pabc(3, 0);
    vector<int> dp(N, -1);
    vector<int> select(N, -1);

    cin >> pabc;
    auto m = sort_indexes(pabc);
    if(pabc[m[0]] == pabc[m[1]]){
        dp[0] = pabc[m[0]];
        select[0] = -1;
    }else{
        dp[0] = pabc[m[0]];
        select[0] = m[0];
    }

    for (int i = 1; i < N; i++) {
        cin >> abc;
        auto am = sort_indexes(abc);
        if(sameNum(abc, select[i-1])){
            dp[i] = abc[am[0]];
        }
        if(select[i-1] == am[0]){
            dp[i] = abc[am[1]];
            select[i] = am[1];
        }else{
            dp[i] = abc[am[0]];
            select[i] = am[0];
        }
        pabc = abc;
    }

    cout << accumulate(dp.begin(), dp.end(), 0) << endl;

    return 0;
}
