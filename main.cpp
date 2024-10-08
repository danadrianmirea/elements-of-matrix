#include <iostream>

using namespace std;

int main()
{
    const int n=5;
    int v[][n] = 
    {
        {1, 2, 3, 4, 9},
        {2, 5, 7, 9, 12},
        {8, 2, 1, 7, 13},
        {6, 1, 9, 11, 15},
        {6, 9, 11, 13, 17}
    };
    
    
    /*
    i=j         -> elements on main diagonal  
    i+j=n-1     -> elements on secondary diagonal
    i<j         -> elements above main diagonal
    i>j         -> elements under main diagonal 
    i+j<n-1     -> elements above secondary diagonal 
    i+j>n-1     -> elements under secondary diagonal 
    if you want elements that are both above main diagonal and above secondary diagonal you combine the two conditions above using &&
    same if you want elements that are both under main diagonal and under secondary diagonal, or under main and above secondary, or above main and under secondary
    */
    
    // this prints out the elements that are above main diagonal and under secondary diagonal (the right 'slice' :) )
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
          if(i<j && i+j>n-1)
            {
                cout << v[i][j] << " ";
            }
        }
        cout << "\n";
    }


    return 0;
}
