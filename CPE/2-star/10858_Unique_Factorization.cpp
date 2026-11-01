#include <bits/stdc++.h>

using namespace std; 

void find(int input,vector<int> data,int start,vector<vector<int>>* result){
		if(input==1){
			if(data.size()!=1 && data.size()!=0){
				(*result).push_back(data);
		    }	
		}
		for(int i=start;i<=input;i++){
			if(input%i==0){
				data.push_back(i);
				find(input/i,data,i,result);
				data.pop_back();
			}
		}
	};

int main(){
    
    int input;
	while(cin>>input){
		if(input==0){
			break;
		}	
		vector<int> data;
		vector<vector<int>> result;
		find(input,data,2,&result);
		if(result.size()){
			cout<<result.size()<<endl;
			for(int i=0;i<result.size();i++){
				for(int j=0;j<result[i].size();j++){
					if(j!=0){
							cout<<" ";
						} 
					cout<<result[i][j];
				}
				cout<<endl;
			}
		}
		else{
			cout<<0<<endl;
		}
		 
	}
	return 0;
} 
