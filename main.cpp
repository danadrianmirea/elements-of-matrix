/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
    same if you want elements that are both under main diagonal and under secondary diagonal
    same for the other two options, below main and above secondary, or above main, below secondary
    */
    
    
    // for example this prints elements that are under main diagonal and under secondary diagonal
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
          if(i>j && i+j>n-1)
            {
                cout << v[i][j] << " ";
            }
        }
        cout << "\n";
    }


    return 0;
}
