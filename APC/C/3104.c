#include <stdio.h>

#define MOD (int)10e9
#define ll long long

long long solve(){
  char aux;
  ll ans = 0;

  while(scanf("%c", &aux) && aux != ' '){
    ans *= 10;
    ans += aux - '0';
    aux %= MOD;
  }

  ll n; scanf("%lld", &n);

  return ans % n;
}

int main(){

  printf("%lld\n", solve());

}