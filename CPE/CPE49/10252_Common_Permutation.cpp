#include <bits/stdc++.h>
using namespace std;
int main(){
	string first,second;
	while(getline(cin,first) && getline(cin,second)){
		map<char,int> first_data,second_data;
		for(int i=0;i<first.size();i++){
				first_data[first[i]]++;	
		}
		for(int i=0;i<second.size();i++){
				second_data[second[i]]++;
		}
		for(auto it=first_data.begin();it!=first_data.end();it++){
			if(it->second>0 && second_data[it->first]>0){
				if(it->second<second_data[it->first]){
					for(int i=0;i<it->second;i++){
						cout<<it->first;	
					}
				}
				else{
					for(int i=0;i<second_data[it->first];i++){
						cout<<it->first;
					}	
				}
			}
		}
		cout<<endl;
	}
	return 0;	
} 
/*
#include <iostream>
#include <string>

using namespace std;

int main(){

	int n[26],n2[26];
	string a,b;
	
	while(getline(cin,a)&&getline(cin,b)){
		for(int i=0;i<26;i++){
				n[i]=0;
				n2[i]=0;
		}
		for(int i=0;i<a.size();i++){
				n[a[i]-'a']++;	
		}
		for(int i=0;i<b.size();i++){
			if(n[b[i]-'a']>0 && n2[b[i]-'a']<n[b[i]-'a']){
				n2[b[i]-'a']++;	
			}
		}
		for(int i=0;i<26;i++){
			if(n2[i]>0){
				for(int j=0;j<n2[i];j++){
					cout<<(char)('a'+i);
				}
			}
		}
		cout<<endl;
	}

	return 0;	
}
*/
