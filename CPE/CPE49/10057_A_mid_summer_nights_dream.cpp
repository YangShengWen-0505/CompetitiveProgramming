#include <bits/stdc++.h>

using namespace std;

int main() {
	
    long long int n;
    
    while (cin >> n) {
        vector<long long int> data;
        map<long long int,long long int> count;
        for (long long int i=0;i<n;i++){
        	long long int temp;
        	cin>>temp;
            data.push_back(temp);
            count[temp]+=1;
        }

        sort(data.begin(), data.end());
		
		if(n%2==0){
			long long int mid1=data[n/2-1];
			long long int mid2=data[n/2];
			long long int sum1=0;
			long long int sum2=0;
			long long int second_answer=0;
			for (long long int i=0;i<n;i++){
	        	sum1+=abs(data[i]-mid1);
	        	sum2+=abs(data[i]-mid2);
        	}
        	if(mid1!=mid2){
        		second_answer=count[mid1]+count[mid2];
			}
			else{
				second_answer=count[mid1];
			}
        	if(sum1<sum2){
        		cout<<mid1<<" "<<second_answer<<" "<<abs(mid1-mid2)+1<<endl;
			}
			else if(sum1>sum2){
				cout<<mid2<<" "<<second_answer<<" "<<abs(mid1-mid2)+1<<endl;
			}
			else{
				cout<<mid1<<" "<<second_answer<<" "<<abs(mid1-mid2)+1<<endl;
			}
		}
		else{
			long long int mid=data[n/2];
			long long int sum=0;
			for (long long int i=0;i<n;i++){
	        	sum+=abs(data[i]-mid);
        	}
        	cout<<mid<<" "<<count[mid]<<" "<<1<<endl;
		}
    }
    return 0;
}
