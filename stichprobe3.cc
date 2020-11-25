#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std; 

// Ask Tobi or Hartmut about it:
double mean(ifstream & data){
  double sum, mean, a;
  for(int i = 0; i < 26; i++)
  {
    data >> a;
    sum += a;
  }
  mean = sum/26; 
  
  return mean; 
}

int main(){
  
  ifstream data("mittelwerte.txt");
  ifstream data2("varianzen.txt");
  // while(! data.eof()){
  

  cout <<  "Mean of means: " << mean(data) << endl;

  cout <<  "Mean of variances: " << mean(data2) << endl;

  // data.seekg(0, data.beg);
  data.seekg(0);

  
}