#include <bits/stdc++.h>

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

#define in_i(vi, c) string s;stringstream ss;for(getline(cin, s), ss = stringstream(s); getline(ss, s, (c)); (vi).push_back(stoi(s)))
#define in_s(vs, c) string s;stringstream ss;for(getline(cin, s), ss = stringstream(s); getline(ss, s, (c)); (vs).push_back(s))

using namespace std;

int main() {
    int N;
    string r;
    getline(cin, r);
    N = stoi(r);

    VI vv;
    in_i(vv, ' ');


    double ave = (double)accumulate(vv.begin(), vv.end(), 0) / vv.size();

    int total0 = 0;
    int total1 = 0;
    int X = ceil(ave);
    int Y = floor(ave);
    for(int value : vv){
        total0 += (X - value) * (X - value);
        total1 += (Y - value) * (Y - value);
    }
    cout << min(total0, total1) << endl;
}
