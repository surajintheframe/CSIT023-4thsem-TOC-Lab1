#include<iostream>
using namespace std;
//Question 1
//Given a string 's' find it's length without using library function
int findLength(char string[]){
	int length = 0;
	for(int i = 0; string[i]!='\0';i++){
		length++; 
	};
	//cout<<"Length is of string \""<<string<< "\" is "<<length<<endl;;
	cout<<length;
};
int main(){
	char string[50];
	cout<<"Enter a string"<<endl;
	cin>>string;
	findLength(string);
	delete[] string;
}
