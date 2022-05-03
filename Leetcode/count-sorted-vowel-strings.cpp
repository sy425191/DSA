/*
Solved by saurabh yadav
on 04/05/2022
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll

void solve(){
    int n;
    cin >> n;
    int arr[5] = {1,1,1,1,1};
    int ans[5] = {1,1,1,1,1};
    for(int i =0; i<n; i++){
        ans[4] = 1;
        ans[3] = arr[3] + ans[4];
        ans[2] = arr[2] + ans[3];
        ans[1] = arr[1] + ans[2];
        ans[0] = arr[0] + ans[1];
        for(int j = 0; j<5; j++){
            arr[j] = ans[j];
        }
    }
    cout << ans[0] + ans[1] + ans[2] + ans[3] + ans[4] << endl;

}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}