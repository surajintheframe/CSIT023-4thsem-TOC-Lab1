#include<iostream>
using namespace std;
//Given a string 's' find it's all possible suffix	 
using namespace std;

int findSuffix(char string[],int length){
	int start=0,end;
	
	for(start=0;start<length;++start){
	   for(end=start;end<length;++end){
		  cout<<string[end];
	   }
       cout<<" ";     
	}
	
};
int findLength(char string[]){
	int length = 0;
	for(int i = 0; string[i]!='\0';i++){
		length++; 
	}
	return length;
};
int main(){
	int size = 50;
	int length;
	char* string = new char[size];
	cout<<"Enter the string"<<endl;
	cin>>string;
	length = findLength(string);
	findSuffix(string,length);
	delete[] string;
	return 0;
}

