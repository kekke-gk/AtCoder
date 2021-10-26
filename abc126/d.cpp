#include <bits/stdc++.h>

#define INF (1e9)

using namespace std;

template<typename T>
istream& operator >> (istream& is, vector<T>& vec){
  for(T& x: vec) is >> x;
  return is;
}

int search(vector<vector<int>> G, int from, int to){
    int sum = 0;
    int N = G.size();
    vector<int> route(1, i);
    int cur = i;

    while(1){
        if(G[0][cur] > 0){
            return sum + G[0][cur];
        }else{
            int notfound = 1;
            for(int j = 1; j < N; j++){
                if(find(route.begin(), route.end(), j) != route.end()) continue;
                if(G[j][cur] > 0){
                    route.push_back(j);
                    cur = j;
                    sum += G[j][cur];
                    notfound = 0;
                    break;
                }
            }
            if(notfound){

            }
        }
    }
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> G(N, vector<int>(N, -1));
    for (int i = 0; i < N - 1; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        G[u-1][v-1] = w;
        G[v-1][u-1] = w;
    }

    for (auto var : G) {
        for (auto var2 : var) {
            cout << var2 << ' ';
        }
        cout << endl;
    }

    // vector<int> res(N, 0);
    // for (int i = 1; i < N; i++) {
    //     int w = search(G, i);
    //     res[i] = w % 2;
    // }
}
