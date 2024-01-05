#include<iostream>
using namespace std;
//Given two strings s1 and s2 , concatenate them and print concatenated string s3;

int concateString(char string1[],char string2[],int length1,int length2){
	int totalLength = length1+length2+1;
	int i;
	for(i=0;i<totalLength;i++){
		string1[length1]=string2[i];
		length1++;
	}
	cout<<"Length is of string \""<<string<< "\" is "<<length<<endl;;
	cout<<"concatenation of  string1 ="<<string1;
}
int findLength(char string[]){
	int length = 0;
	for(int i = 0; string[i]!='\0';i++){
		length++;
	}
	return length;
};
int main(){
	char string1[50];
	char string2[50];
	cout<<"Enter a string"<<endl;
	cin>>string1;
	cout<<"Enter a string"<<endl;
	cin>>string2;
	int length1 = findLength(string1);
	int length2 = findLength(string2);
	concateString(string1,string2,length1,length2);
	
}
