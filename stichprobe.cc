#include<iostream>
#include<fstream>
#include<cmath>

double meancalc(std::ifstream & file);
double varcalc(std::ifstream & file);
double stdcalc(double variance);
int getlength(std::ifstream & input);

std::string task, opt;


int main(){
    std::ifstream data("datensumme.txt");
    std::cout << "What do you want to calculate? ";
    getline(std::cin, task);

  if( (task.find("mean") != std::string::npos)  && (task.find("var") != std::string::npos) ){
    std::cout << "The Mean is: ";
    std::cout << meancalc(data);
    std::cout << ", and the variance is: ";
    std::cout << varcalc(data) << std::endl;
  }
  else if(task.find("mean") != std::string::npos){
    std::cout << "The Mean is: ";
    std::cout << meancalc(data) << std::endl;
  }
  else {
    std::cout << "The Variance is: ";
    std::cout << varcalc(data) << std::endl;
  }
  std::cout << "Do you want the standard deviation? ";
  std::cin >> opt;
  if(opt == "yes")
    std::cout << "The standard deviation is " << stdcalc(varcalc(data));
return 0;
}

int getlength(std::ifstream & input){
  if(input.is_open()){
    input.seekg(0, input.end);
    int length = input.tellg();
    input.seekg(0, input.beg);
    return (length + 1)/2;
  }
}

double meancalc(std::ifstream & file){
  double a, b;
  while(! file.eof()){
    file >> a;
    b += a;
  }
  file.seekg(0, file.beg);
  return b/getlength(file);
}

double varcalc(std::ifstream & file){
  double a, b;
  double mean = meancalc(file);
  while(! file.eof()){
    file >> a;
    b += (a - mean)*(a - mean);
  }
  file.seekg(0, file.beg);
  return b/getlength(file);
}

double stdcalc(double variance){
  double std = sqrt(variance);
  return std;
}