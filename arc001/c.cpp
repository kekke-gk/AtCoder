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

char BRD[8][8];

bool placeable(int row, int col){
    REP(i, 8){
        if(BRD[i][col] == 'Q') return false;
    }

    FOR(i, -7, 8){
        if(!(0 <= row+i && row+i < 8)) continue;
        if(!(0 <= col+i && col+i < 8)) continue;
        if(BRD[row+i][col+i] == 'Q') return false;
        if(!(0 <= col-i && col-i < 8)) continue;
        if(BRD[row+i][col-i] == 'Q') return false;
    }

    return true;
}

bool checkRow(int row){
    REP(i, 8){
        if(BRD[row][i] == 'Q') return true;
    }
    return false;
}

bool consistencyTest(){
    REP(i, 8){
        REP(j, 8){
            if(BRD[i][j] == 'Q'){
                BRD[i][j] = '.';
                if(!placeable(i, j)) return false;
                BRD[i][j] = 'Q';
            }
        }
    }
    return true;
}

void printBoard(){
    REP(i, 8){
        REP(j, 8){
            out("%c", BRD[i][j]);
        }
        out("\n");
    }
}

bool eightQueen(int row){
    if(row == 8){
        printBoard();
        return true;
    }else if(checkRow(row)){
        return eightQueen(row+1);
    }else {
        REP(col, 8){
            if(placeable(row, col)){
                BRD[row][col] = 'Q';
                if(eightQueen(row+1)) return true;
                BRD[row][col] = '.';
            }
        }
    }
    return false;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    REP(i, 8){
        in("%s", &BRD[i]);
    }

    if(!consistencyTest() || !eightQueen(0)) out("No Answer\n");
}
