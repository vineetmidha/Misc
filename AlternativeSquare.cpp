
// https://www.codechef.com/CCSTART2/problems/SQALPAT

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int val = 1;
    int inc = 5;
    
    for (int i=1; i<=n; i++)
    {
        if (i%2!=0)
        {
            for (int j=1; j<=5; j++)
            {
                cout << val++ << " ";
            }
            
            val += inc-1;
        }
        else 
        {
            for (int j=1; j<=5; j++)
            {
                cout << val-- << " ";
            }
            
            val += inc+1;
        }
        
        cout << endl;
    }
	return 0;
}
