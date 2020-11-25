#include <iostream>
#include <fstream>
#include <string>
#include <cmath>


int main(){
  int a[8];
  int * point = a;
  std::ifstream data("datensumme.txt");

  while(!data.eof()){
    data.read(point, 9);
    cout << *point;


  }
}