#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;

    for(int j = 0;j < t;j++){
        int n, i;
        bool isPrime = true;
        cin >> n;

        if(n == 2){
            isPrime = true;
        }

        if(n == 1){
            isPrime = false;
        }

        for (i = 2; i <= sqrt(n); ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }

       if (isPrime)
          cout<<"Prime"<<endl;
       else
          cout<<"Not prime"<<endl;
   
    }
    return 0;
}
