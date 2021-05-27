#include <iostream>
class LifeAlgorithm {

public:

    int static constexpr Widht = 5; // ширина массива/поля 
    int static constexpr Height = 5; // высота массива/поля

    bool fieldArray[Widht][Height] = {false}; // массив, в кот. будут лежать исходные данные о состоянии клеток и в кот. состояния 
                                              // будут проверяться
    bool tempArray[Widht][Height] = {false};  // массив, в кот. будут записываться данные о состоянии клеток и перезаписываться в исходный

   void Step()
    {
        for (int i = 1; i < Widht - 1; i++)
        {
            for (int j = 1; j < Height - 1; j++)
            {  // первый проход: вычисляем будущее состоянее
                std::cout << fieldArray[i][j] << std::endl;

                bool isAlive = fieldArray[i][j];
                int numNeigbours = 0;
                int numNeigboursCount();
                {
                    for (int q = i - 1; q < i + 1; q++)
                    {
                        for (int v = j - 1; v < j + 1; v++)
                        {
                            if (fieldArray[q][v] = true) numNeigbours++;
                            std::cout << fieldArray[q][v] << std::endl;
                        }
                    }
                }
                std::cout << "numNeigbours = " << numNeigbours << std::endl;
                bool keepAlive = isAlive && (numNeigbours == 2 || numNeigbours == 3);
                bool makeNewLive = !isAlive && numNeigbours == 3;
                tempArray[i][j] = keepAlive | makeNewLive;
            }
        }
    for (int i = 1; i < Widht - 1; i++)
            for (int j = 1; j < Height - 1; j++)
                // второй проход: копируем вычисленное состояние в текущее
                fieldArray[i][j] = tempArray[i][j];
            }
        };

int main ()
{
    LifeAlgorithm LAExmpl;

    LAExmpl.Step();
}
/*if (fieldArray[i - 1, j - 1]) numNeigbours++;
                    if (fieldArray[i - 1, j]) numNeigbours++;
                    if (fieldArray[i - 1, j + 1]) numNeigbours++;
                    if (fieldArray[i, j - 1]) numNeigbours++;
                    if (fieldArray[i, j + 1]) numNeigbours++;
                    if (fieldArray[i + 1, j - 1]) numNeigbours++;
                    if (fieldArray[i + 1, j]) numNeigbours++;
                    if (fieldArray[i + 1, j + 1]) numNeigbours++; */