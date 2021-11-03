#include "pch.h"
#include "matrix.h"


int matrix::checkSym()
{
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            b[i][j] = a[j][i];
        }
    }

    int flag = 0;
    for (i = 0; i <3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j]!=b[i][j])
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag==1)
          return 0;
    else 
        return 1;
    
}
