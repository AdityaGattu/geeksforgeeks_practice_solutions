#include <iostream>
using namespace std;

int main() {
	//code
int n;
cin>>n;
while(n--){
	    int l,m;
	    cin>>l>>m;

	    int a[l];
	    int temp[m],temp1[l-m];
	    for(int i=0;i<l;i++)
	    {
	        cin>>a[i];
	    }
	    
	    for(int j=0;j<m;j++)
	    {
	        temp[j]=a[j];
	    }
	     for(int j=0;j<l-m;j++)
	    {
	        temp1[j]=a[j+m];
	    }
	 
	    for(int i=0;i<l-m;i++)
	    {
	        a[i]=temp1[i];
	     
	    }
	    int k=0;
	    for(int i=l-m;i<l;i++)
	    {
	        a[i]=temp[k];
	        k++;
	    }
	    
	   for(int i=0;i<l;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
}
	return 0;
}
