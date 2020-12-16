#include <iostream>
typedef long long int ll;
using namespace std;
int main() {
    ll n, k, q, x, y;
    cin >> n >> k >> q;

    while(q--){
        int ans=0;
        cin>>x>>y;
        x-=1;
        y-=1;

        while(x!=y){

            ans++;

            if(x < y)
                swap(x, y);

            x-=1;
            x/=k;
        }

        cout<<ans<<endl;
    }

}