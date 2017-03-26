#include <bits/stdc++.h>

#define INF INT_MAX/3

#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)

#define PB push_back
#define pb push_back

#define MP make_pair
#define mp make_pair
#define PII pair<int,int>
#define pii pair<int,int>
#define pcc pair<char,char>
#define pic pair<int,char>
#define pci pair<char,int>

#define ALL(a) (a).begin(),(a).end()
#define all(a) (a).begin(),(a).end()
#define SET(a,c) memset(a,c,sizeof a)
#define CLR(a) memset(a,0,sizeof a)
#define VS vector<string>
#define VI vector<int>
#define debug(x) cout<<#x<<": "<<x<<endl
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define in scanf
#define out printf
#define SORT(v, n) sort(v, v+n)
#define VSORT(v) sort(v.begin(), v.end())

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int H, W;
    cin >> H >> W;

    string brd[H];
    VS b;
    int m1 = INF, m2 = INF;
    REP(i, H){
        cin >> brd[i];

        int lt1 = (int)brd[i].find("o");
        int lt2 = (int)brd[i].find("x");

        bool e1 = lt1 >= 0;
        bool e2 = lt2 >= 0;
        if(!e1 && !e2) break;

        int rt1 = (int)brd[i].rfind("o");
        int rt2 = (int)brd[i].rfind("x");
        if(e1 && !e2){
            m1 = min(m1, W - 1 - rt1);
        }else if(!e1 && e2){
            m2 = min(m2, lt2);
        }else{
            bool t1 = rt2 < rt1;
            bool t2 = lt2 < lt1;
            if(t1) m1 = min(m1, W - 1 - rt1);
            if(t2) m2 = min(m2, lt2);

            b.push_back(brd[i]);
        }
    }

    if(m1 != INF || m2 != INF){
        if(m1 <= m2) cout << "o" << endl;
        else cout << "x" << endl;
        return 0;
    }

    //同じ行の駒の差の大きさでソート

}
