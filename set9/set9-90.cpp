#include <iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    for(int i = 0;i <str.length();i++){
        if(str[i]>= '0' && str[i]<= '9'){
            cout<<str[i];
        }
    }
    return 0;
}
