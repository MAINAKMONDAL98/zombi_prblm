#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n=0,p=0;
		cin>>n;
		int arrr[n]={0},arrcr[n]={0},arrz[n]={0},arrnew[n]={0};
		for(int i2=0;i2<n;i2++){
			cin>>arrr[i2];
		}
		for(int i5=0;i5<n;i5++){
			cin>>arrz[i5];
		}
		for(int i3=0;i3<n;i3++){
			int d1=(i3+1)-arrr[i3];
			int d2=(i3+1)+arrr[i3];
			if(d1<0){
				d1=0;
			}
			else{
				d1=d1;
			}
			if(d2>n){
				d2=n;
			}
			else{
				d2=d2;
			}
			for(int i4=d1;i4<d2;i4++){
				arrcr[i4]=arrcr[i4]+1;
			}
			
		}
	/*	for(int i=0;i<n;i++){
			cout<<arrcr[i];
		}*/
		
		
		for (int i = 0; i <n; ++i) 
        {
 
            for (int j = i + 1; j < n; ++j)
            {
 
                if (arrcr[i] >arrcr[j]) 
                {
 
                    int a =  arrcr[i];
                    arrcr[i] = arrcr[j];
                    arrcr[j] = a;
 
                }
 
            }
 
        }
        for (int i = 0; i <n; ++i) 
        {
 
            for (int j = i + 1; j < n; ++j)
            {
 
                if (arrz[i] >arrz[j]) 
                {
 
                    int a =  arrz[i];
                    arrz[i] = arrz[j];
                    arrz[j] = a;
 
                }
 
            }
 
        }
        
		for(int i=0;i<n;i++){
		
		if(arrcr[i]!=arrz[i]){
			p=1;
			break;
		}}
		if(p==1){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}

	
	}
	
}
