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
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define in scanf
#define out printf
#define SORT(v, n) sort(v, v+n)
#define VSORT(v) sort(v.begin(), v.end())

using namespace std;

bool goalStraight(vector<PII> lrs, int m, double s, int g){
    int sz = lrs.size();
    FOR(i, m+1, sz){
        double nextS = (g-s)/(sz-i);
        if(nextS < lrs[i].first || lrs[i].second < nextS){
            return false;
        }
    }
    return true;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    double s;
    int g;
    cin >> s >> g;

    vector<PII> lrs;
    REP(i, n){
        int l, r;
        cin >> l >> r;
        lrs.push_back(MP(l, r));
    }

    cout << endl;
    int prevN = 0;

    double dist = 0;
    FOR(i, 1, n){
        if(goalStraight(lrs, i, s, g)){
            dist += sqrt(pow(n-prevN, 2) + pow(g-s, 2));
            break;
        }
        if(s < lrs[i].first){
            dist += sqrt(pow(i-prevN, 2) + pow(lrs[i].first-s, 2));
            s = lrs[i].first;
            prevN = i;
        }else if(lrs[i].second < s){
            dist += sqrt(pow(i-prevN, 2) + pow(lrs[i].second-s, 2));
            s = lrs[i].second;
            prevN = i;
        }
    }

    out("%.14lf\n", dist);
}
