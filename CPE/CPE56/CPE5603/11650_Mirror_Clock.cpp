#include <bits/stdc++.h>
using namespace std;
int main(){
  	int T;
  	cin>>T;
  	for(int t=0;t<T;t++){
	    int H,M;
	    char trash;
	    cin>>H>>trash>>M;
	    if(M!=0){
	      	H=(23-H)%12;
	     	if(H==0){
	      		H=12;
	      	}
			M=60-M;
	    }
	    else{
	      	H=12-H;
	      	if(H==0){
	      		H=12;
	      	}
	    }
	    if(H<10){
	      	cout<<'0'<<H<<':';
	      	if(M<10){
	    		cout<<'0'<<M<<endl;
	      	}
	      	else{
	    		cout<<M<<endl;
	    	}
	    }
	    else{
	      	cout<<H<<':';
	      	if(M<10){
	    		cout<<'0'<<M<<endl;
	      	}
	      	else{
	    		cout<<M<<endl;
	    	}
	    }
  	}
	return 0;
}
