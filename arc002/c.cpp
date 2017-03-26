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

char CMD[4] = {'A', 'B', 'X', 'Y'};

int count(string cmds, string l, string r){
    int n = cmds.size();
    int cnt = 0;
    REP(i, n-1){
        string tmp = cmds.substr(i, 2);
        if(tmp == l || tmp == r){
            i++;
        }
        cnt++;
    }
    return cnt;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    string cmds;
    cin >> cmds;

    string l, r;
    cin >> l >> r;

    cout << count(cmds, l, r) << endl;

    // REP(i, 4){
    //     REP(j, 4){
    //         REP(k, 4){
    //             REP(l, 4){
    //             }
    //         }
    //     }
    // }
}
