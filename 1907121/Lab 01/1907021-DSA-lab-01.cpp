#include<bits/stdc++.h>000

using namespace std;

void insertion(int val,int pos,int A[],int *n){

	pos--;
	for(int i=*n ; i>pos ; i--){
		A[i] = A[i-1];
	}

	A[pos] = val;

	*n = *n + 1;

	cout<<"\n!!Insertion successfull!!\n";
}

void deletion(int pos,int A[],int *n){

	if(*n==0){
		cout<<"\n**The array is empty,insert new elements.**\n";
		return;
	}

	pos--;
	for(int i=pos ; i<*n-1 ; i++){
		A[i] = A[i+1];
	}

	*n = *n - 1;

	cout<<"\n!!Deletion successfull!!\n";
}

int searching(int val,int A[],int n){

	for(int i=0 ; i<n ; i++){
		if(A[i]==val){
			return i;
		}
	}

	return -1;
}

void printArray(int A[],int n){

	for(int i=0 ; i<n ; i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;

}

int main(){

	cout<<"Enter the size of the array : ";
	int n;cin>>n;
	//int n = rand()%10;

	int a[100];

	cout<<"Enter "<<n<<" elements : ";

	for(int i=0 ; i<n ; i++) cin>>a[i];

	while(1){
		int op;
		cout<<"\nEnter following keywords : \n1.Insertion\n2.Deletion\n3.Searching\n0.Exit\n";
		cout<<"\nYour input : ";
		cin>>op;

		if(op==1){
			int v,p;
			cout<<"Enter the new value : ";
			cin>>v;
			cout<<"Enter your insertion position: ";
			cin>>p;
			insertion(v,p,a,&n);
			printArray(a,n);
		}
		else if(op==2){
			int p;
			cout<<"Enter the position you want to delete : ";
			cin>>p;
			deletion(p,a,&n);
			printArray(a,n);
		}
		else if(op==3){
			int v;
			cout<<"Enter the value that you want to find : ";
			cin>>v;

			int pos = searching(v,a,n);
			if(pos==-1) cout<<"!!The element was not found in the current array!!.\n";
			else{
				cout<<"The element was found on "<<pos+1<<"th position.\n";
				if(n==1){
					printf("0.To delete %dth position\n",pos+1);
					int ip;cin>>ip;
					deletion(pos+1+ip,a,&n);
					printArray(a,n);
				}
				else if(pos==0){
					cout<<"Enter following keywords : \n";
					printf("0.To delete %dth position\n1.To delete %dth position\n\n",pos+1,pos+2);
					cout<<"Your input : ";
					int ip;cin>>ip;
					deletion(pos+1+ip,a,&n);
					printArray(a,n);
				}
				else if(pos==n-1){
					cout<<"Enter following keywords : \n";
					printf("0.To delete %dth position\n-1.To delete %dth position\n\n",pos+1,pos);
					cout<<"Your input : ";
					int ip;cin>>ip;
					deletion(pos+1+ip,a,&n);
					printArray(a,n);
				}
				else{
					cout<<"Enter following keywords : \n";
					printf("0.To delete %dth position\n-1.To delete %dth position\n1.To delete %dth position\n\n",pos+1,pos,pos+2);
					cout<<"Your input : ";
					int ip;cin>>ip;
					deletion(pos+1+ip,a,&n);
					printArray(a,n);
				}
			}
		}
		else{
			cout<<"Thanks for using my program\n";
			return 0;
		}

	}
}
