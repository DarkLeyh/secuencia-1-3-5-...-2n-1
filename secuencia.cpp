#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n, suma=0;
	
	cout<<"Digite el numero de elementos: "; cin>>n;
	
	for(int i=1;i<=(2*n)-1;i+=2){
		suma+=i;
	}
	
	cout<<"\nEl resultado es: "<<suma<<endl;
	
	
	getch();
	return 0;
}
