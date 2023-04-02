#include<iostream>
#include<fstream>
#include<stdio.h> 
//#include <iconv.h>
#include <locale>
#include <codecvt>
using namespace std;
string nameencrypt(string filename){
	  wstring_convert<codecvt_utf8<wchar_t>> converter;
    wstring wide = converter.from_bytes(filename);
    string encrypted;
	for (wchar_t ch : wide){
		   ch += 69;
        encrypted += converter.to_bytes(ch);

	}

  return encrypted;
    
}
void encrypter(string file){
	string wsd =nameencrypt(file);
	cout << wsd;

		ofstream fout;
		 ifstream fin;
  		fin.open(file, ios::binary);
  		fout.open(wsd , ios::binary);
  		char ch;
  		 while(fin.get(ch)){
	     int new_ch = static_cast<int>(ch) + 69;
	      new_ch %= 128; 
	      fout<<static_cast<char>(new_ch);
	    }
	 fin.close();
    fout.close();


}



string namedecrypt(string filename){
  wstring_convert<codecvt_utf8<wchar_t>> converter;
  wstring wide = converter.from_bytes(filename);
  string decrypted;
  for (wchar_t ch : wide){
    ch -= 69;
    decrypted += converter.to_bytes(ch);
  }
  return decrypted;
}

void decrypter(string file){
  string decrypted_name = namedecrypt(file);
  ifstream fin;
  ofstream fout;
  fin.open(file, ios::binary);
  fout.open(decrypted_name, ios::binary);
  char ch;
  while(fin.get(ch)){
    int new_ch = static_cast<int>(ch) - 69;
    if(new_ch < 0) {
      new_ch += 128;
    }
    fout << static_cast<char>(new_ch);
  }
  fin.close();
  fout.close();
}
