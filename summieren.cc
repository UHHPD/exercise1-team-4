/* This program computes the line-wise sum of the data stored in daten.txt and writes the results into a new file datensumme.txt*/

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

int main(){
  std::string line;
  std::ifstream data("daten.txt");
  std::ofstream sum("datensumme.txt");

  while (getline(data, line)){
    datensumme << line[0] + line[2] << std::endl;
  }
  data.close();
  sum.close();
}