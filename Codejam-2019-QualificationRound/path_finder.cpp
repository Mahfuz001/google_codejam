/*
 * path_finder.cpp
 * 
 * Created by Mahfuz Ahmed on 06-04-2019.
 * 
 */

#include <bits/stdc++.h>
using namespace std;
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define mp make_pair
#define nl std::cout << "\n";
#define fori(s,n) for(int i=s;i<n;i++)
#define forj(s,n) for(int j=s;j<n;j++)

typedef long long ll;
const double pi = 2*acos(0.0);
const long long mod = 1e9+7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    int t; cin >> t;
    fori(1, t+1){
		int n; cin >> n;
		string s; cin >> s;
		
		vector<char> vec;
		for(int j=0;s[j];j++){
			if(s[j] == 'E') vec.pb('S');
			if(s[j] == 'S') vec.pb('E');
		}
		
		cout << "Case #" << i << ": ";
		
		forj(0,sz(s)){
			cout << vec[j];
		}
		nl;
		
	}
        
        
    
    return 0;
}
