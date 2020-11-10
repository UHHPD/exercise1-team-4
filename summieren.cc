/* This program computes the line-wise sum of the data stored in daten.txt and writes the results into a new file datensumme.txt*/

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

int main(){
  std::string line;
  std::ifstream daten("daten.txt");
  std::ofstream datensumme("datensumme.txt");

  while (getline(daten, line)){
    datensumme << line[0] + line[2] << std::endl;
  }
  daten.close();
  datensumme.close();
}