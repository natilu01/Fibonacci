#include<iostream>
using namespace std;

int numero(int x){
	if(x==1 || x==2){
			return 1;
	}
	return numero(x-1 )+ numero(x-2);
}
int main(){
	int num;
	cout<<"Dijite la secuencia de la serie de FIBONACCI"<<endl;
	cin>>num;
	for(int i=1; i<=num; i++){
	cout<<numero(i)<<" ";	
	}
	
	
	return 0;
}

