#include <iostream>
#include <math.h>
#include <cmath>
#include <string>
#include <ctime>
#include "Header.h"
#include <stdio.h>

using namespace std;

int main (void) 
{
    srand(time(0));
    CreateMaze(20, 20);
  /*  int row = 5;
    int column = 5;
    int** arrayW = allocate_memory(row, column);
    int** arrayF = allocate_memory(row, column);
    int temp[8];
    int count = 0;
    int countMax = 0;
    srand(time(0));
    int* lastString = new int[column + 1];
    int* lastFloor = new int[column + 1];
    for (int r = 0; r < row; r++)
    {*/
        //if (r == 0)
        //{
        //    arrayW = StoreRightBorders(temp, arrayW, column + 1, r);
        //    arrayF = StoreBottomBorders(temp, arrayF, column + 1, r);
        //}
        //else
        //{
        //    //первоначальная инициализация
        //    for (int i = 0; i < column; i++)
        //    {
        //        temp[i] = i + 1;
        //        if (temp[i] != temp[i + 1])
        //        {
        //            int flag = rand() % 2;
        //            if (flag == 0)
        //            {
        //                temp[i + 1] = temp[i];
        //            }
        //        }
        //        else
        //        {
        //            if (temp[i] != i + 1)
        //            {
        //                temp[i + 1] = i + 1;
        //            }
        //            else
        //                temp[i + 1] = i + 2;

        //        }
        //        if (temp[i] == temp[i + 1])
        //            arrayW[r][i] = 0;
        //        else
        //        {
        //            arrayW[r][i] = 1;
        //        }
        //        if (temp[i] == temp[i + 1])
        //        {
        //            count++;
        //            if (count > countMax)
        //                countMax = count;
        //        }
        //        else
        //        {
        //            count = -1;

        //        }

        //        if (count == -1)
        //        {
        //            if (countMax == 1)
        //            {
        //                int flag = rand() % 2;
        //                temp[i + flag - 1] = 0;
        //                countMax = 0;
        //            }
        //            else if (countMax > 1)
        //            {
        //                int loop = rand() % countMax;
        //                for (int j = 0; j < loop; j++)
        //                {
        //                    int flag = rand() % countMax;
        //                    temp[i + flag - countMax] = 0;

        //                }
        //                countMax = 0;
        //            }
        //            count = 0;


        //        }

        //        if (temp[i] == 0)
        //            arrayF[r][i] = 1;
        //        else
        //        {
        //            arrayF[r][i] = 0;
        //        }

        //        if (temp[i] == 0)
        //        {
        //            temp[i] = i + 1;
        //        }


        //    }

        //    if (r == row - 1)
        //    {
        //        for (int i = 0; i < column - 1; i++)
        //        {
        //            lastFloor[i + 1] = 1;
        //            lastString[i + 1] = 0;
        //            lastString[0] = 1;
        //            lastString[column] = 1;
        //            lastFloor[0] = 0;
        //            lastFloor[column - 1] = 0;
        //        }


        //    }
        //}


        ////определяем есть ли границы справа
        //for (int i = 0; i < column; i++)
        //{
        //    if (temp[i] != temp[i+1])
        //    {
        //        int flag = rand() % 2;
        //        if (flag == 0)
        //        {
        //            temp[i + 1] = temp[i];
        //        }
        //    }
        //    else
        //    {
        //        if (temp[i] != i + 1)
        //        {
        //            temp[i + 1] = i + 1;
        //        }
        //        else
        //            temp[i + 1] = i + 2;
        //        
        //    }
        //}

        ////определяем есть ли нижние границы
        //for (int i = 0; i < column; i++)
        //{
        //    //count = 0;
        //    if (temp[i] == temp[i + 1])
        //    {
        //        count++;
        //        if (count > countMax)
        //            countMax = count;
        //    }
        //    else
        //    {
        //        count = -1;

        //    }

        //    if (count == -1)
        //    {
        //        if (countMax == 1)
        //        {
        //            int flag = rand() % 2;
        //            temp[i + flag - 1] = 0;
        //            countMax = 0;
        //        }
        //        else if (countMax > 1)
        //        {
        //            int loop = rand() % countMax;
        //            for (int j = 0; j < loop + 1; j++)
        //            {
        //                int flag = rand() % countMax;
        //                temp[i + flag - countMax] = 0;

        //            }
        //            countMax = 0;
        //        }
        //        count = 0;


        //    }
        //}
    //}

    //for (int i = 0; i < row + 1; i++)
    //{
    //    //cout << "|";
    //    for (int j = 0; j < column + 1; j++)
    //    {
    //        if (i != row)
    //        {
    //            if (arrayF[i][j] == 1)
    //            {
    //                cout << "_";
    //            }
    //            else
    //            {
    //                cout << " ";
    //            }
    //            if (arrayW[i][j] == 1)
    //            {
    //                cout << "|";
    //            }
    //            else
    //            {
    //                cout << " ";
    //            }
    //        }
    //        if (i == row)
    //        {
    //            if (lastFloor[j] == 0)
    //            {
    //                cout << " ";
    //            }
    //            else
    //            {
    //                cout << "_";
    //            }
    //            if (lastString[j] == 0)
    //            {
    //                cout << " ";
    //            }
    //            else
    //            {
    //                cout << "|";
    //            }





    //        }
    //    }
    //    //cout << "_";
    //    //cout << " |";
    //    cout << "\n";
    //}
    return 0;
}

int* CreateRightBorders(int* arr, int row, int column)
{
    //srand(time(0));
    for (int i = 0; i < column-1; i++)
    {
        int flag = GetRandomNumber(0, 1);
        int flag2 = rand() % 2;
        cout << flag <<" ";
        
        
        if (arr[i] != arr[i + 1])
        {
            
            if (flag != 1)
            {
                arr[i + 1] = arr[i];
            }
        }
        else
        {
            if (arr[i] != i + 1)
            {
                arr[i + 1] = i + 1;
            }
            else
                arr[i + 1] = i;
        }
    }
    cout << endl << endl;
    return arr;
}

int** StoreRightBorders(int* temp, int** arrayWall, int column, int r)
{
    for (int j = 0; j < column; j++)
    {
        if (r == 0)
        {
            arrayWall[r][j] = 0;
        }
        if (j == 0 && r != 0)
        {
            arrayWall[r][j] = 1;
        }
        if (temp[j-1] == temp[j] && r != 0 && j != 0)
        {
            arrayWall[r][j] = 0;
            //cout << " ";
        }   
        else if (temp[j - 1] != temp[j] && r != 0 && j != 0)
        {
            arrayWall[r][j] = 1;
            //cout << "|";
        }
    }
    //cout << "\n";
    return arrayWall;



    //if (r == 0)
    //{
    //    for (int j = 0; j < column; j++)
    //    {
    //        arrayWall[r][j] = 0;
    //        if (temp[j - 1] == temp[j] && j != 0)
    //        {
    //            arrayWall[r + 1][j] = 0;
    //            //cout << " ";
    //        }
    //        else if (temp[j - 1] != temp[j] && j != 0)
    //        {
    //            arrayWall[r + 1][j] = 1;
    //            //cout << "|";
    //        }
    //        if (j == 0)
    //        {
    //            arrayWall[r + 1][j] = 1;
    //        }

    //    }
    //}
    //else
    //{
    //    for (int j = 0; j < column; j++)
    //    {
    //        if (j == 0)
    //        {
    //            arrayWall[r + 1][j] = 1;
    //        }
    //        if (temp[j - 1] == temp[j] && j != 0)
    //        {
    //            arrayWall[r + 1][j] = 0;
    //            //cout << " ";
    //        }
    //        else if (temp[j - 1] != temp[j] && j != 0)
    //        {
    //            arrayWall[r + 1][j] = 1;
    //            //cout << "|";
    //        }
    //    }

    //}
}

int** StoreBottomBorders(int* temp, int** arrayFloor, int column, int r)
{
    for (int j = 0; j < column; j++)
    {
        if (j == 0)
        {
            arrayFloor[r][j] = 0;
        }
        else if (r == 0 && j != 0)
        {
            arrayFloor[r][j] = 1;
            
        }

        else if (temp[j-1] == 0 && r != 0 && j != 0)
        {
            arrayFloor[r][j] = 1;
            //cout << "_";
        }
           
        else if (temp[j - 1] != 0 && r != 0 && j != 0)
        {
            arrayFloor[r][j] = 0;
            //cout << " ";
        }
    }
 /*   if (r == 0)
    {
        int flag = GetRandomNumber(1, column);
        arrayFloor[r][flag] = 0;
    }*/
    //cout << "\n";
    return arrayFloor;
}



int* CreateBottomBorders(int* arr, int row, int column)
{
    //srand(time(0));
    int count = 0;
    int countMax = 0;
    for (int i = 0; i < column-1; i++)
    {
        //count = 0;
        if (arr[i] == arr[i + 1])
        {
            count++;
            if (count > countMax)
                countMax = count;
        }
        else
        {
            count = -1;

        }

        if (count == -1)
        {
            if (countMax == 1)
            {
                /*int flag2 = rand() % 2;
                int flag = GetRandomNumber(0, countMax);*/
                arr[i] = 0;
                
            }
            else if (countMax > 1)
            {
                int loop = GetRandomNumber(1, countMax);
                //int loop = rand() % countMax;
                for (int j = 0; j < countMax; j++)
                {
                    //int flag2 = rand() % countMax;
                    int flag = GetRandomNumber(0, countMax);
                    arr[i + flag - countMax] = 0;
                    //cout << flag << endl;

                }
                
            }
            countMax = 0;
            count = 0;
        }
    }
    return arr;
}

//функция генерации
int GetRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

int* CreateUniquiSet(int* temp, int column)
{
    for (int i = 0; i < column; i++)
    {
        if (temp[i] == 0)
        {
            temp[i] = i + 1;
        }
    }
    return temp;
}


void CreateMaze(int row, int column)
{
    int *temp = new int[column];
    int** arrayW = allocate_memory(row+1, column+1);
    int** arrayF = allocate_memory(row+1, column+1);
    int count = 0;
    int countMax = 0;
    int* lastString = new int[column + 1];
    int* lastFloor = new int[column + 1];
    for (int i = 0; i < column; i++)
    {
        temp[i] = i + 1;
    }
    //srand(time(0));
    for (int r = 0; r < row; r++)
    {
        if (r == 0)
        {
            arrayW = StoreRightBorders(temp, arrayW, column + 1, r);
            arrayF = StoreBottomBorders(temp, arrayF, column + 1, r);
            int flag = GetRandomNumber(1, column);
            arrayF[r][flag] = 0;
        }
        else
        {
            temp = CreateRightBorders(temp, row, column);
            arrayW = StoreRightBorders(temp, arrayW, column + 1, r);
            temp = CreateBottomBorders(temp, row, column + 1);
            arrayF = StoreBottomBorders(temp, arrayF, column + 1, r);
            temp = CreateUniquiSet(temp, column);
            if (r == row - 1)
            {
                for (int i = 0; i < column - 1; i++)
                {
                    lastFloor[i + 1] = 1;
                    lastString[i + 1] = 0;
                    lastString[0] = 1;
                    lastString[column] = 1;
                    lastFloor[0] = 0;
                }
                int flag = GetRandomNumber(1, column);
                lastFloor[flag] = 0;


            }
        }
        
    }
    int Wall[6][6] =
    {
        0, 0, 0, 0, 0, 0,
        1, 0, 1, 0, 0, 1,
        1, 1, 0, 1, 0, 1,
        1, 0, 1, 0, 1, 1,
        1, 1, 0, 0, 1, 1,
        1, 0, 0, 0, 0, 1
    };

    int Floor[6][6] =
    {
        0, 1, 1, 1, 1, 1,
        0, 0, 1, 0, 1, 0,
        0, 0, 1, 0, 1, 0,
        0, 1, 0, 1, 0, 0,
        0, 0, 1, 0, 1, 0,
        0, 1, 1, 1, 1, 1
    };
    for (int borderCount = 0; borderCount < column; borderCount++)
    {
       //cout << " _";
    }
    //cout << "\n";
    for (int i = 0; i < row + 1; i++)
    {
       //cout << "|";
        for (int j = 0; j < column + 1; j++)
        {
            if (i != row)
            {
                if (arrayF[i][j] == 1)
                {
                    cout << "_";
                }
                else
                {
                    cout << " ";
                }
                if (arrayW[i][j] == 1)
                {
                    cout << "|";
                }
                else
                {
                    cout << " ";
                }
            }
            if (i == row)
            {
                if (lastFloor[j] == 0)
                {
                    cout << " ";
                }
                else
                {
                    cout << "_";
                }
                if (lastString[j] == 0)
                {
                    cout << " ";  
                }  
                else
                {
                    cout << "|";
                }

                

               

            }
        }
        //cout << "_";
        //cout << " |";
        cout << "\n";
    }


}

int* allocate_memory(unsigned const lin)
{
    //Функция для выделения памяти
    int* ptr = new int [lin];
    return ptr;
}

int** allocate_memory(unsigned const lin, unsigned const col)
{
    //Функция для выделения памяти
    int** ptr = new int* [lin];
    for (int i = 0; i < lin; i++)
    {
        ptr[i] = new int[col];
    }
    return ptr;
}

void free_memory(int** ptr, unsigned const lin) //Функция для очистки памяти
{
    for (unsigned i = 0; i < lin; ++i)
    {
        delete ptr[i];
    }
    delete ptr;
}

void free_memory(int* ptr, unsigned const lin) //Функция для очистки памяти
{
    delete ptr;
}
