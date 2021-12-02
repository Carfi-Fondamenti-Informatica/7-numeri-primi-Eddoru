#include <iostream>
#include "lib.h"
using namespace std;
int main(){
    
    int num=0, conta=0;
    cin>>num;
    numeroprimo(num,1,conta);
    if (conta==0) {
        cout << "numero primo" << endl;
    }else{
        cout << "numero non primo" << endl;
        
    }


    return 0;
}
