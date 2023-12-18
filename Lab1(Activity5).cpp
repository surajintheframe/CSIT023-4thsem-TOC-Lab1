#include<iostream>
//Given a strign 's' find it's all possibe prefix 
//eg: if string = abcd ,
//then prefix a, ab, abc ,abcd 

using namespace std;

int findprefix(char string[],int length){
	int start=0,end;
	
	//for(start=0;start<length;++start){
	   for(end=0;end<length;++end){
		  for(int i = start ; i<=end ;++i){
			  cout<<string[i];
			}
			cout<<" ";
        }
//        break;
//this also works :)
//	}
	
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
	findprefix(string,length);
	delete[] string;
	return 0;
}

