#include<iostream>
#include<fstream>
#include<string>


int main(){
  std::ifstream data("datensumme.txt");
  float a, b;
  while(! data.eof()){
    data >> a;
    b += a;
  }
  std::cout << b;
  std::cout
}