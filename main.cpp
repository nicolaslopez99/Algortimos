#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int suma=0;
	int n,i,j,**a;
	suma=suma+sizeof(n);
	suma=suma+sizeof(i);
	suma=suma+sizeof(j);
	suma=suma+sizeof(a);
	cout<<sizeof(n);
	cout<<sizeof(i);
	cout<<sizeof(j);
	cout<<sizeof(a);
	
	cin>>n;
	a=new int *[n];
	for(i=0;i<n;i++){
		a[i]=new int[n];
		for(j=0;j<n;j++){
			a[i][j]=i*j;
			cout<<sizeof(a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<a[i][j];
		}
		cout<<endl;
		delete a[i];
	}
	delete []a;
	cout<<suma;
	return 0;
}
