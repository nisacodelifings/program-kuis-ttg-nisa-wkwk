#include <iostream>
using namespace std;
int main()
{
cout<<"\t\t====================================================================================\t\t\n";
cout<<"\t\tAPLIKASI KUIS \t\t\n";
cout<<"\t\tAnnisa Puspitasari\t\t\n";
cout<<"\t\tPROGRAM KUIS\t\t\n";
cout<<"\t\tAwokwowkwowk\t\t\n";
cout<<"\t\t====================================================================================\t\t\n";

string satu, dua, tiga, empat, lima; 
 while(1)
 {
  cout<<"1. makanan yg paling disukai nisa? (a. telor dadar| b. soup cream | c. seblak)\n";
  cin>>satu;
  if(satu=="c"){
   cout<<"Jawaban anda benar\n";
     break;
  }
  else{
  cout<<"Jawaban anda salah\n";
  }
 }
 while(2)
 {
  cout<<"\n2. Nisa kelahiran tahun berapa? (a. 2000 | b. 2003 | c. 2001))\n";
  cin>>dua;
  if(dua=="b"){
   cout<<"Jawaban anda benar\n";
     break;
  }
  else{
  cout<<"Jawaban anda salah\n";
  }
 }
 while(3)
 {
  cout<<"\n3. Nisa suka bahasa pemrograman apa? (a. javascript | b. c++ | c. PHP)\n";
  cin>>tiga;
  if(tiga=="b"){
   cout<<"Jawaban anda benar\n";
     break;
  }
  else{
  cout<<"Jawaban anda salah\n";
  }
 }
 while(4)
 {
  cout<<"\n4. nisa suka minum? (a. susu ultra | b. susu dancow | c. susu KPBS | d. semuanya:v)\n";
  cin>>empat;
  if(empat=="d"){
   cout<<"Jawaban anda benar\n";
     break;
  }
  else{
   cout<<"Jawaban anda salah\n";
  }
 }
 while(5)
 {
  cout<<"\n5. hobi yang paling disukai selain menggambar adalah (a. ngoding | b. novi | c. nyanyi)\n";
  cin>>lima;
  if(lima=="b"){
   cout<<"Jawaban anda benar\n";
     break;
  }
  else{
   cout<<"Jawaban anda salah\n";
  }
 }
 return 0;
}
