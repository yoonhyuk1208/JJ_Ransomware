#include<iostream>
#include<vector>
#include<string>
#include<time.h>
#define MinLen 10000000;
#define MaxLen 20000000; // len = 1e7 ~ 3e7-1 
using namespace std;

int main(){
    int seed = time(NULL);
    srand(seed);

    string NUM;
    int lenOfnum;

    lenOfnum = rand() % MaxLen + MinLen;
    for(int i=0; i<lenOfnum; i++){
        NUM += char(rand() % 10 + '0');
    }

    //cout<<NUM;
}