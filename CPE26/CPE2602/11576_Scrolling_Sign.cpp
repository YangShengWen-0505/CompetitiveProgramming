#include <bits/stdc++.h>

using namespace std;

int main(){
  
  	int T;
  	cin>>T;
  
  	for(int t=0;t<T;t++){
	    int m,n,count=0;
	    vector<string> input;
	    string temp;
    
	    input.clear();
	    cin>>m>>n;
	    cin.ignore();
	    for(int i=0;i<n;i++){
	      	getline(cin,temp);
	      	input.push_back(temp);	
	    }
	    string first=input[0];
	    count=input[0].size();
	    for(int i=1;i<input.size();i++){
	    	string second=input[i];
	    	for(int j=m;j>=1;j--){
		        string check_first=first.substr(m-j,m);
		        string check_second=second.substr(0,m);
		        bool check=true;
		        for(int k=0;k<j;k++){
		          	if(check_first[k]!=check_second[k]){
		            	check=false;
		    			break;
    				}
        		}
        		if(check){
        			count=count+(second.size()-j);
    				break;
    			}
      		}
    		first=input[i];
    	}
    	cout<<count<<endl;
  	}
	return 0;	
}
