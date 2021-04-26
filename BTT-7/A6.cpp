#include<iostream>

using namespace std;

int main(int argc, const char * argv[]){
    cout << "Number of command-line arguements: " << argc << endl;
    for(int i = 0; i < argc; i++){
        cout << "Arguement #" << i << ": _" << argv[i] << "_\n";
    }
    return 0;
}
