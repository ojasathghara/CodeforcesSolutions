#include"bits/stdc++.h"
#define do_not_sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define FIO freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define w(t) int t; cin >> t; while (t--)

using namespace std;


int main(void) {
do_not_sync
// FIO

    int n(0); scanf("%d", &n);
    int *present = new int[n];
    int *canOpen = new int[n];

    for(int k = 0; k < n; k++){scanf("%d %d", present + k, canOpen + k);}
    int total(n);
    for(int k = 0; k < n; k++){
        for(int m = 0; m < n; m++){
            if(m == k){continue;}
            if(canOpen[k] == present[m]){--total; present[m] = 0;}
        }
    }
        
    printf("%d\n", total);
    return 0;
}

/*
Notes: 
    Goal:       to open bottels present in b[i] with a[i] 
    Approach:   count all b[i] bottels and subtract from n where a[i] != b[i]
    Extra:      taking reverse input, it works 
*/