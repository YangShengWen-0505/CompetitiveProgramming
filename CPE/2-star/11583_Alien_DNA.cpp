#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int T,N;
	cin>>T;
	for(int t=0;t<T;t++){
		cin>>N;
		cin.ignore();
		bool str1[26]={};
		int cnt=0;
		for(int n=0;n<N;n++){
			bool str2[26]={};
			bool check=false;
			string input;
			getline(cin,input);
			if(n==0){
				for(int i=0;i<input.size();i++){
					str1[input[i]-'a']=true;
				}
			} 
			else{
				for(int i=0;i<input.size();i++){
					str2[input[i]-'a']=true;
				}
				for(int i=0;i<26;i++){
					if(str1[i] && str2[i]){
						check=true;
					}
					else{
						str1[i]=false;
					}
				}
				if(!check){
					for(int i=0;i<input.size();i++){
						str1[input[i]-'a']=true;
					}
					cnt+=1;
				}
			}
		}
		cout<<cnt<<endl;
	}
	
	return 0;
} 
