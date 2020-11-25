#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std; 

// Ask Tobi or Hartmut about it:
double compute_mean(ifstream & data)
{
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


  ifstream data3("mittelwerte.txt");
  ifstream data4("varianzen.txt");

  cout <<  "Mean of means: " << compute_mean(data3) << endl;

  cout <<  "Mean of variances: " << compute_mean(data4) << endl;

  // data.seekg(0, data.beg);
}