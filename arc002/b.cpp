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

    struct tm day_data = { 0, 0, 0, 28, 2, 2004 };
    time_t day = mktime(&day_data);

    cout << day_data.tm_mday << ", " << day_data.tm_mon << ", " << day_data.tm_year << endl;

    struct tm tomorrow_data = {0, 0, 0, day_data.tm_mday + 1, day_data.tm_mon, day_data.tm_year };
    time_t tomorrow = mktime(&tomorrow_data);
    struct tm *tom = localtime(&tomorrow);

    cout << tom->tm_mday << ", " << tom->tm_mon << ", " << tom->tm_year << endl;
}
