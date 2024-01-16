#include<iostream>
using namespace std;

void printArray(char array[],int size){
    
    for(int i = 0; i<size; i++){
        cout<<array[i];
    }

}

int main(){

    // Array declaration : just declare kora 
    char array[5];  //array[0], array[1]

    //Array Initialization : value deoa
    array[0] = 'a';

    //Initilization + Declaration 
    char barry[4]= {'r','a','k','a'};

    printArray(barry,4); //parameter //function call

    return 0;
}