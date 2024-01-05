#include<iostream>
#include<string.h>
using namespace std;
//Given a string 's' perform a reverse operation on it 
//eg: if string = 'ram' 
//    output should be 'mar'

int findLength(char string[]){
	int length = 0;
	for(int i = 0; string[i]!='\0';i++){
		length++;
	}
	return length;
};

int reverseString(char string[],int length){
	int j = 0;
	char revString[50];
	
	for(int i= length -1 ; i>=0;i--){
		revString[j]=string[i];
		j++;
	};
	revString[length] = '\0';
	cout<<"reverse = "<<revString;
};

int main(){
	char string[50];
	cout<<"Enter a string"<<endl;
	cin>>string;
	int length = findLength(string);
	reverseString(string,length);
	delete[] string;
}
