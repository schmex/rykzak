#include <bits/stdc++.h>
using namespace std;
const int N = 1e7;

int used[N];

int main()
{
    
    int S, n;
    cout << "Razmer rykzaka:";
    cin>>S;
    cout << "Kol-vo tovarov:";
    cin>>n;
    used[0] = 1;
    for (int i = 0; i < n; i++)
    {
        int a;
        	cout << "prod " << i+1 << " : ";
        cin>>a;   
        for (int s =S - 1 ; s >=0 ; s--)
            if (used[s] && s + a <= S)
                used[s + a] = 1;
    }
    for (int s = S; s >= 0; s--)
    {
        if (used[s])
        {
            cout<<s<< endl;
            return 0;
        }
    }
    return 0;
}
