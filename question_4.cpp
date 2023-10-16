#include <iostream>

using namespace std;

long reversal(long num, long result = 0){
    if(num > 0){
        result = reversal(num/10, result*10 + num%10);
    }
    return result;
}

int main(){
    long n;
    cin >> n;
    cout << reversal(n) << endl;
    return 0;
}