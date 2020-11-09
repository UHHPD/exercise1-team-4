#include <iostream>
#include <fstream>
#include <string>

int main (){
  
  int summen[234];
  int daten[468];
  int length;
  std::string line; 

  std::ifstream fin("daten.txt");
  std::ofstream fout("datensumme.txt"); 
  
  // Diese while-loop soll Länge der Datei (also Anzahl Zeilen) in Datei daten.txt 
  // bestimmen, macht aber Mist auf Konsole. 
  /*
  while( getline(fin, line))
  {
    length += 1; 
  }
  */
  
  for(int n = 0 ; n < 468 ; ++n)
  {
    fin >> daten[n];
  }
    
  for(int i = 0; i < 234; i++){
    summen[i] = daten[2*i] +daten[2*i+1]; 
    fout << summen[i] <<std::endl;
  }
    
  fin.close();
  fout.close();

}