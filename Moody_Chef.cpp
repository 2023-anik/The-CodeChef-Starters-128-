#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, l, r;
        cin>>n>>l>>r;
        int a[n];
        int max_hap=0, min_hap=0, hap=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]>=l && a[i]<=r)
                hap++;
            else
                hap--;
            max_hap=max(max_hap, hap);
            min_hap=min(min_hap, hap);
        }
        cout<<max_hap<<' '<<min_hap<<endl;
    }return 0;
}