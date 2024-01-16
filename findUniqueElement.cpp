#include <iostream>

using namespace std;

//returnType fnName()

int findUniqueElement(int raka[],int size){
    
    int uniqueElement = 0;
    
    for(int i = 0; i<size; i++){
        uniqueElement = uniqueElement^raka[i];
    }
    
    return uniqueElement;
    
}

int main()
{
    int arr[]={1,4,7,10,50,69,4,1,7,50,10};
    
    int uniqueElement = findUniqueElement(arr,11);
    
    if(uniqueElement == 0){
        cout<<"No Unique Element Found!!";
    }
    else{
        cout<<"Unique Element is: "<< uniqueElement;
    }
    
    return 0;
}