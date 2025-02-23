#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int Length = (N + 1) / 2 + 5; 
    
    int s = Length, star = 1; 
    
    for (int i = 0; i < Length; i++)
    {
        for (int j = 1; j < s; j++)  
        {
            cout << " ";
        }
        for (int k = 1; k <= star; k++)  
        {
            cout << "*";
        }
        star += 2; 
        s--;      
        cout << endl;
    }
    for (int i = 0; i < 5; i++)  
    {
        for (int j = 0; j < Length - N / 2 - 1; j++)
        {
            cout << " ";
        }
        for (int i = 0; i < N; i++)  
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}