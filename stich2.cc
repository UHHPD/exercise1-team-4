#include<iostream>
#include<fstream>
#include<cmath>


int a[8];
int * point = &a;

int main(){
  std::ifstream data("datensumme.txt");
  while(!data.eof()){
    a = data.read(a, 9);
    std::cout << a << std::endl;
  }
}