#include <iostream>
#include <string>

using namespace std;

int main(void){
  
  int size = 0;

  cout << "Enter size of array: ";
  cin >> size;

  int* array = new int[size];
  int* arr1 = array;
  int* arr2 = array;
  
  for(int i = 0; i < size; i++;){

    *arr1 = i * 2;
    cout << "arr1: " << *arr1 << endl;
    arr1++;

    *arr2 = i * 2 + 5;
    cout << "arr2: " << *arr2 << endl;
    arr2++;
  }

  delete[] array;

  return 0;
}
