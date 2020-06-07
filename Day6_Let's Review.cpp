#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    char s[10000];
    int i,j;
    string even,odd;
    for(i = 0; i < t; i++){
        cin>>s;
        even = "";
        odd = "";
        for(j = 0; j < strlen(s); j++){
            switch(j % 2){
                case 0:
                  even += s[j];
                  break;
                case 1:
                  odd += s[j];
                  break;
            }
        }
        cout<<even<<" "<<odd<<endl;
    }
      
    return 0;
}
