#include "encrypter.cpp"
// #include <cstdio>
#include "py.cpp"
#include <iostream>
#include <filesystem>
#include <vector>
#include <variant>
using namespace std;
namespace fs = filesystem;
// variant <int,float,string> x;
vector <string> files;
// const fs::path&  startpath
void list_files(string  path) {

    for (const auto entry : fs::recursive_directory_iterator(path)) {
        if (entry.is_regular_file()) {
            files.push_back(entry.path().string());
        }
    }
}

int main() {
    fs::path desktop_dir = fs::path(getenv("HOME")) / "Desktop";
    // print(desktop_dir);
    // list_files(desktop_dir);
    // cout << files[] << endl;
    // for (int i = 0; i <= files.size(); i++)
    // {
    //     // print(to_string(i));
    //     // print(i);
    //     // print(i/2);

    // }
  //  variant <int,float,string> x ;
  // string  y= input("hello world");
    // print(input("hello wrold"));
    // rename("r","asdasd.txt");
    string x  ;
    print("what do you want to encrypt");
    cin >>x;
    encrypter(x);
}



