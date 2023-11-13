#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream hamFile("");
    if(hamFile.is_open()){
        cout << "It fuckin worked!" << endl;
    }else{
    cout << "I missed something!" << endl;}

    hamFile << "coding is my passion!\n";
    hamFile.close();
}
