#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int i;
    for(i = 1; i <= 10; i++){
        int result;
        result = n * i;
        cout<<n<<" x "<<i<<" = "<<result<<endl; 
    }

    return 0;
}
