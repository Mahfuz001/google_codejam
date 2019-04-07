/*
 * forgone_solution.cpp
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
	
	fori(1,t+1){
		string s; cin >> s;
		vector<int> num;
		vector<int> num2;
		for(int j=0;s[j];j++){
			int x = s[j]- '0';
			num.pb(x);
		}
		num2.resize(sz(num));
		for(int j=0;j<sz(num);j++){
			if(num[j] == 4) {
				num2[j] = 1;
				num[j]--;
			}
		}
		cout << "Case #"<<i<<": ";
		for(int j =0;j<sz(num);j++){
			cout << num[j];
		}
		cout << " ";
		int found = 0;
		for(int j =0;j<sz(num);j++){
			if(num2[j] == 1) found = 1;
			if(found == 1){
				cout << num2[j];
			}
		}
		nl;
		
	}
	
        
    
    return 0;
}
