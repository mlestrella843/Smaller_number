
//7.	Write a program to find the largest and smallest element in an integer array?


#include<iostream>
using namespace std;


int main()
{
	int num[5] = { 25, 10, 56, 43, 23 };
  int variable = 0;

  for(int i=0; i<5; i++){
    for(int j=0; j<5 ; j++){
      if ( num[i] < num[j] ){
        cout<<"Este es num[i]: "<<num[i]<<"\n";
        cout<<"Este es num[j+1]: "<<num[j]<<"\n";
        variable = num[i];     
          }    
      else 
        cout<<"Este es num[i]: "<<num[i]<<"\n";
        cout<<"Este es num[j+1]: "<<num[j]<<"\n";
        variable = num[i];     
    } 
  }
cout<<"the smaller number is: "<<variable<<endl;
       
  
	
	return 0;
}
