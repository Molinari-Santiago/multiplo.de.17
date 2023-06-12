#include <iostream>
#include <string>
using namespace std;
bool EsMultiploDe17(int n);
int main(){
	string msg="no es multiplo";
	int n;
	cout<<"ingrese un numero"<<endl;
	cin>>n;
	if(EsMultiploDe17(n)){
		msg="es multiplo";
	}
	cout<<msg<<endl;
	
	return 0;
}

bool EsMultiploDe17 (int n){
	bool flag=false;
	if(n%17==0)
	{
		flag=true;
	}
	return flag;
}
