#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<pair<int,int>> data{ 
		{-1,-1},
		{-1,0},
		{-1,1},
		{0,-1},
		{0,1},
		{1,-1},
		{1,0},
		{1,1}
	};
	int T;
	cin>>T;
	cin.ignore();
	string trash;
	getline(cin,trash);
	for(int t=0;t<T;t++){
		bool game=true;
		int n;
		cin>>n;
		cin.ignore();
		vector<string> mp(n),result_win(n),result_lose(n);
		for(int i=0;i<n;i++){
			string temp;
			getline(cin,temp);
			mp[i]=temp;
		}
		for(int i=0;i<n;i++){
			string temp;
			getline(cin,temp);
			for(int j=0;j<n;j++){
				if(temp[j]=='x'){
					int count=0;
					for(int k=0;k<8;k++){
						if((i+data[k].first>=0) && (i+data[k].first<n) && (j+data[k].second>=0) && (j+data[k].second<n)){
							if(mp[i+data[k].first][j+data[k].second]=='*'){
								count++;
							}
						}
					}
					
					if(mp[i][j]=='*'){
						game=false;
						result_win[i].push_back('*');
						result_lose[i].push_back('*');
					}
					else{
						result_win[i].push_back(count+'0');
						result_lose[i].push_back(count+'0');
					}
				}
				else{
					if(mp[i][j]=='*'){
						result_win[i].push_back('.');
						result_lose[i].push_back('*');
					}
					else{
						result_win[i].push_back('.');
						result_lose[i].push_back('.');
					}
				}
			}
		}
		if(game){
			for(int i=0;i<n;i++){
				cout<<result_win[i];
				if(i+1!=n){
					cout<<endl;
				}
			}
			cout<<endl;	
		}
		else{
			for(int i=0;i<n;i++){
				cout<<result_lose[i];
				if(i+1!=n){
					cout<<endl;
				}
			}
			cout<<endl;
		}
		if(t!=T-1){
			cout<<endl;
		}	
	}
	return 0;
}
