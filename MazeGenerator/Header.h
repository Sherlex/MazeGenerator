#ifndef FUNCTIONS_H_
#define FUCTIONS_H_

int* allocate_memory(unsigned const lin);
int** allocate_memory(unsigned const lin, unsigned const col);
void free_memory(int** ptr, unsigned const lin);
void free_memory(int* ptr, unsigned const lin);
int* CreateRightBorders(int* arr, int row, int column);
int** StoreRightBorders(int* temp, int** arrayWall, int column, int r);
int** StoreBottomBorders(int* temp, int** arrayFloor, int column, int r);
int* CreateBottomBorders(int* arr, int row, int column);
int* CreateUniquiSet(int* temp, int column);
void CreateMaze(int row, int column);
int GetRandomNumber(int min, int max);
#endif