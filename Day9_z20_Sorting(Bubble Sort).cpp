#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    // Write Your Code Here
    int firstElement = 0;
    int lastElement = 0;
    int numSwaps = 0;
    for(int i = 0;i < n;i++){       

        for(int j = 0;j < n-1;j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
                numSwaps++;
            }
        }

        if(numSwaps == 0){
            break;
        }
    }
    
    firstElement = a[0];
    lastElement = a[n-1];
    cout<<"Array is sorted in "<<numSwaps<<" swaps."<<endl;
    cout<<"First Element: "<<firstElement<<endl;
    cout<<"Last Element: "<<lastElement<<endl;
    return 0;
}
