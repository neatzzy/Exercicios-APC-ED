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

    ll n; cin >> n;
    ll a0 = 0, a1 = 1;
    ll count = 0;

    while(count < n){
        ll a2 = a0 + a1;
        ll it = a1 + 1;
        while(it < a2){
            count++;
            if(count == n){
                cout << it << "\n";
                return 0;
            }
            it++;
        }
        a0 = a1;
        a1 = a2;
    }
    return 0;
}