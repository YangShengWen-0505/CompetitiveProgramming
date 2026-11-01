#include <bits/stdc++.h>

using namespace std;

int main(){

    long long int t,a,b;
    double I=sqrt(-1);

    cin>>t;
    while(t>0){
        cin>>a>>b;
        if(b==0){
        	if(abs(a)<=pow(2,30)){
        		cout<<1<<endl;
			}
            else{
            	cout<<"TOO COMPLICATED"<<endl;
			}
        }
        else if(a==0){
            if(abs(b*b)<=pow(2,30)){
        		cout<<2<<endl;
			}
            else{
            	cout<<"TOO COMPLICATED"<<endl;
			}
        }
        else if(abs(a)==abs(b)){
            if(abs((-4)*pow(a,4))<=pow(2,30)){
        		cout<<4<<endl;
			}
            else{
            	cout<<"TOO COMPLICATED"<<endl;
			}
        }
        else{
            cout<<"TOO COMPLICATED"<<endl;
        }
        t--;
    }

    return 0;
}
