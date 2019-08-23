#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int i,j,n,*a;
	int suma;

	
	suma=suma+sizeof(n);
	suma=suma+sizeof(i);
	suma=suma+sizeof(j);
	suma=suma+sizeof(*a);
		

	for(n=2;n<81;n=n+2){
		for(i=0;i<1;i++){
			a=new int [n];
			for(j=0;j<n;j++){
				a[j]=j*i;
				suma=suma+sizeof(a[j]);
				//cout<<a[j];
			}
			delete []a;
		}
		cout<<suma<<endl;
		
	}
	return 0;
}
