#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a;
    ll b;

    cin >> a >> b;

    ll ans = 0;
    for(int i = 0; i < a.size(); i++) ans = (ans*10 + (a[i]-'0')) % b;

    cout << ans << "\n";

    return 0;
}