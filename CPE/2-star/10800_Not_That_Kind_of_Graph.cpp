#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int T;
	map<char,char> answer{
		{'R','/'},
		{'C','_'},
		{'F','\\'}
	};
	cin>>T;
	cin.ignore();
	for(int t=0;t<T;t++){
		string input;
		getline(cin,input);
		int now=0,low=0,high=0;
		vector<int> data;
		for(int i=0;i<input.size();i++){
			if(input[i]=='R'){
				if(input[i-1]=='F' && i-1>=0){
					now+=1;
					data.push_back(now);
					if(now<low){
						low=now;
					}
					if(now>high){
						high=now;
					}
					now+=1;
				}
				else{
					data.push_back(now);
					if(now<low){
						low=now;
					}
					if(now>high){
						high=now;
					}
					now+=1;	
				}
			}
			else if(input[i]=='C'){
				if(input[i-1]=='F' && i-1>=0){	
					now+=1;
					data.push_back(now);
					if(now<low){
						low=now;
					}
					if(now>high){
						high=now;
					}
				}
				else{
					data.push_back(now);
					if(now<low){
						low=now;
					}
					if(now>high){
						high=now;
					}
				}
			}
			else if(input[i]=='F'){
				if(input[i-1]=='R' && i-1>=0){
					now-=1;
					data.push_back(now);
					if(now<low){
						low=now;
					}
					if(now>high){
						high=now;
					}
					now-=1;
				}
				else if(input[i-1]=='C' && i-1>=0){
					now-=1;
					data.push_back(now);
					if(now<low){
						low=now;
					}
					if(now>high){
						high=now;
					}
					now-=1;
				}
				else{
					data.push_back(now);
					if(now<low){
						low=now;
					}
					if(now>high){
						high=now;
					}
					now-=1;	
				}
			}
		}
		cout<<"Case #"<<t+1<<":"<<endl;
		for(int i=high;i>=low;i--){
			int temp=0;
			cout<<"| ";
			for(int j=0;j<data.size();j++){
				if(data[j]==i){
					for(int k=temp;k<j;k++){
						cout<<" ";
					}
					cout<<answer[input[j]];
					temp=j+1;
				}
			}
			cout<<endl;
		}
		cout<<"+";
		for(int i=0;i<=input.size()+1;i++){
			cout<<"-";
		}
		cout<<endl<<endl; 
	}
	
	return 0;
}
