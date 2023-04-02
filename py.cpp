#include <iostream>
#include <fstream>
#include <variant>
using namespace std;


variant <string , float, int> input(variant <string ,float,int> num2 ){
	variant <string ,float,int> val ;
	
	if (num2.index() == 1){
	cout << get<float>(num2) ;

	}
	if (num2.index() == 0){
	cout << get<string>(num2) ;

	}
	if (num2.index() == 2){
	cout << get<int>(num2) ;

	}




  if (val.index() == 1){
        float f;
        cin >> f;
        val = f;
    }
    if (val.index() == 0){
        string s;
        cin >> s;
        val = s;
    }
    if (val.index() == 2){
        int i;
        cin >> i;
        val = i;
    }

    return val;
	
	}
	


void print(variant <string ,float,int> statement){
	// cout << statement << endl;
	if (statement.index() == 1){
	cout << get<float>(statement)  << endl; 

	}
	if (statement.index() == 0){
	cout << get<string>(statement) << endl; 

	}
	if (statement.index() == 2){
	cout << get<int>(statement) << endl; 

	}
	

}



// int input(variant <string ,float,int> num2 ){
// 	variant <string ,float,int> num2 = 0;
// 	if (num2.index() == 1){
// 	cout << get<float>(num2) << endl;

// 	}
// 	if (num2.index() == 0){
// 	cout << get<string>(num2) << endl;

// 	}
// 	if (num2.index() == 2){
// 	cout << get<int>(num2) << endl;

// 	}

// 	cin >> num2 ;
// 	return num2;
// }




	

// void hackeranania(){
	
// 	string line;
// 	string x = input("filename");
// 	ofstream Fi(x);
// 	Fi << "this is an example" << endl <<"new data has been entered to this table";
// 	Fi.close() ;
// 	ifstream data(x);
// 	while (getline (data, line)) {
// 		print(line);
// }


// }

