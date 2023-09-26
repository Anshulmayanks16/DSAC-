#include<iostream>
using namespace std;

void reachhome(int src, int des){

    cout << " sorece" << src << " destination" << des << endl;
    if(src == des){
        cout << "reached" << endl;
        return;
    }
    src++;
    reachhome(src, des);
}
int main(){
    int des = 10;
    int src= 1;

    cout << endl;

    reachhome(src, des);

    return 0;
}
