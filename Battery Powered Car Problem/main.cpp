/***************************************************************
Samuel Franklin
CS 341
10/2/2019
Car Battery Program
*****************************************************************/
#include <iostream>
using namespace std;

int battery;
float km;

float distance(int battery){

    if(battery <= 2)  //base case
		return battery*km;
	    
    else{
        return distance(battery-1) + km/(2*battery-3);
    }// else
}// distance

//The user should input the value of K and # of batteries
int main(){
         
    cout<<"How many batteries do you have?"<<endl;
    cin>>battery;
    
    cout<<"How many kilometers should 1 battery travel?"<<endl;
    cin>>km;
   
   if(battery < 1 || km < 1){
   		cout<<"ERROR:Please enter a number greater than 0 for kilometer and batteries."<<endl;
   		return 0;
   }
    cout<<"\nThe total distance the battery car can travel is: ";
	cout<<distance(battery)<<endl;
    
}// main

