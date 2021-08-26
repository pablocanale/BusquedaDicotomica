#include <iostream>
using namespace std;    


// {-3, -1, 0, 4, 5, 6, 9, 11, 13, 20};              
bool isInArray(int * arr, int wanted, int max){
    int middle, min = 0;
    do{
        middle = (max-min)/2+min;
        if(*(arr+middle) == wanted){
            return true;
        }
        else if(arr[middle] < wanted){
            min = middle + 1;
        }
        else{
            max = middle -1; 
        }
    } while (min <= max);
    return false;
}

void resuelve(int * arr, int wanted, int arrLen){
    if(isInArray(arr, wanted, arrLen-1)){
        cout << "esta el elemento" << endl;
    }
    else{
        cout << "el elemento no esta"<< endl;
    }
    
}

//

bool isInArrayRecursive(int* arr, int wanted, int min, int max){

        if(min <= max){
            int middle = (max-min)/2+min; 
            if ((arr[min] == wanted)||(arr[max] == wanted)||(arr[middle] == wanted))                
                return true;            
            else if(arr[middle] < wanted) 
                return isInArray(arr, wanted, middle+1, max);            
            else 
                 return isInArray(arr, wanted, min, middle-1);            
        }else  
            return false;         
} 

void resuelveRecursive(int * arr, int wanted, int arrLen){
    if(isInArrayRecursive(arr, wanted, 0, arrLen-1)){
        cout << "esta el elemento" << endl;
    }
    else{
        cout << "el elemento no esta"<< endl;
    }
 
}
  