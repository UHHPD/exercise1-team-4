/* This program computes the line-wise sum of the data stored in daten.txt and writes the results into a new file datensumme.txt*/

#include <iostream>
#include <fstream>

int a;
int b;
int sum;

int main(){
  std::ifstream fin("daten.txt");
  std::ofstream fout("datensumme.txt");

  for(int i=0; i<234; i++){
    fin >> a >> b;
    fout << a+b << std::endl;
  }
  
  fin.close();
  fout.close();
}