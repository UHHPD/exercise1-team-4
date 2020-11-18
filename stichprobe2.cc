#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std; 

// float compute_mean(){ ... ; return mean;  }

int main(){
  double a, sum, variance, mean;
  ifstream data("datensumme.txt");
  ifstream data2("datensumme.txt");

  ofstream means("mittelwerte.txt");
  ofstream variances("varianzen.txt");
  // while(! data.eof()){
  for(int i = 0; i < 26; i++){
    sum = 0; 
    variance = 0; 

    for(int i = 0; i < 9; i++)
    {
      data >> a;
      sum += a;
    }
    mean = sum/9; 

    means << mean << endl;

    
    // data.seekg(0, data.beg);
    // data.seekg(0);

    // Calculate variance: 
    for(int i = 0; i < 9; i++)
    {
      data2 >> a;
      variance += pow(a-mean, 2) / 9;
    }
    variances << variance << endl;
    cout << "Variance: " << variance << endl;
    
    // Calculate stdev: 
    cout << "Stdev: " << sqrt(variance) << endl;
  }

}