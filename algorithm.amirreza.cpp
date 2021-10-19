//Amirreza Godarzi 
//data structure lesson 
//my master is shohre kazemi 
//Algorithm  , practice one 
#include<iostream>
using namespace std;
int main(){
	int data[10], item ;
	 cout<<" Enter 10 numbers"<<endl;
	 for( int k=0 ; k<10 ; k++ ){
	  cout<<"   data["<<k+1<<"]: ";
	     cin>>data[k];
	 }
	cout<<" Enter item to sereach : ";
	     cin>>item;
	for( int k=0 ; k<10 ; k++ )
	    if(item==data[k]){
	    	cout<<" "<<k+1<<" is the location of item ."<<endl;
	    	exit(0);
		}
		cout<<" item is not in the data .";
	return 0;
}
