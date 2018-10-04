#include<iostream>

using namespace std;
int main(){
	// 5170411188 ITA ARKE KRISTANTI
	string tulisan;
	cout<<"masukan tulisan = ";
	cin>>tulisan;
	cout<<endl;
	int i=tulisan.length()-1;
	for (i; i>=0; i--){
		for (int a=0;a<=i;a++) {
			cout<<tulisan[a];
		}
		cout<<endl;
	}
	return 0;
	
}
