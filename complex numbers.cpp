//complex no.
#include<iostream>
using namespace std;

class complex{
 private:
  int real;
  int imag;
  int real1;
 public:
  complex(int real,int imag){
   this->real=real;
   this->imag=imag;
  }
  
  void plus(complex const &c2){
   this->real=real+c2.real;
   this->imag=imag+c2.imag;

  }
  
  void multiply(complex const &c2){
   real1=((real*c2.real)-(imag*c2.imag));
   this->imag=((real*c2.imag)+(imag*c2.real));
   this->real=real1;
  }
  
  void print(){
   cout<<this->real<<"+ i"<<imag<<endl;
  }
};
