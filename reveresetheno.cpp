#include <iostream>
using namespace std;

void sayDigit(int n , string arr[]){
    if(n == 0)

    return ;

    int digit = n%10;
    n=n / 10;
    cout << arr[n] <<" ";

    sayDigit(n, arr);
}
int main(){
    string arr[10] = {"1","2","3","4","5","6","7","8","9"};
    int n;
    cin >> n;

    cout << endl << endl << endl;
    sayDigit(n,arr);
    cout << endl << endl << endl;

    return 0;


}
