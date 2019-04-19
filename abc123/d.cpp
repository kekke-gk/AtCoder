#include <bits/stdc++.h>

#define INF (1e9)
#define ul unsigned long

using namespace std;

template<typename T>
istream& operator >> (istream& is, vector<T>& vec){
  for(T& x: vec) is >> x;
  return is;
}

struct Compare {
    constexpr bool operator()(tuple<ul, ul, ul, ul> const & a,
                              tuple<ul, ul, ul, ul> const & b) const noexcept
    { return get<0>(a) > get<0>(b); }
};


int main() {
    ul X, Y, Z, K;
    cin >> X >> Y >> Z >> K;

    vector<ul> A(X), B(Y), C(Z);
    cin >> A;
    cin >> B;
    cin >> C;
    sort(A.begin(), A.end(), greater<ul>());
    sort(B.begin(), B.end(), greater<ul>());
    sort(C.begin(), C.end(), greater<ul>());

    set<tuple<ul, ul, ul>> arrived;
    priority_queue<tuple<ul, ul, ul, ul>,
        vector<tuple<ul, ul, ul, ul>>,
        Compare> keys;
    keys.push(make_tuple(0, 0, 0, 0));

    const int indexes[][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};

    for (int i = 0; i < K; i++) {
        auto cur = keys.top();
        keys.pop();
        ul x = get<1>(cur);
        ul y = get<2>(cur);
        ul z = get<3>(cur);
        printf("%lu\n", A[x] + B[y] + C[z]);
        for (auto idx : indexes) {
            ul nx = x + idx[0];
            ul ny = y + idx[1];
            ul nz = z + idx[2];
            auto tmp = make_tuple(nx, ny, nz);
            if (nx >= X || ny >= Y || nz >= Z)
                continue;
            if (arrived.find(tmp) != arrived.end())
                continue;
            ul val = (A[0] - A[nx]) + (B[0] - B[ny]) + (C[0] - C[nz]);
            keys.push(make_tuple(val, nx, ny, nz));
            arrived.insert(tmp);
        }
    }
}
