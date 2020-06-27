#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int rd;
    int rm;
    int ry;
    cin>>rd;
    cin>>rm;
    cin>>ry;

    int dd;
    int dm;
    int dy;
    cin>>dd;
    cin>>dm;
    cin>>dy;

    int ml = rm - dm;
    int dl = rd - dd;

    if(ry < dy){
        int fine = 0;
        cout<<fine<<endl;
    }else if((ry - dy) >= 1){        
        int fine = 10000;
        cout<<fine<<endl;
    }else if(rm > dm){
        int fine = 500 * ml;
        cout<<fine<<endl;
    }else if(rm < dm){
        int fine = 0;
        cout<<fine<<endl;
    }else if(rd > dd){        
        int fine = 15 * dl;
        cout<<fine<<endl;
    }else{
        int fine= 0;
        cout<<fine<<endl;
    }

    return 0;
}
