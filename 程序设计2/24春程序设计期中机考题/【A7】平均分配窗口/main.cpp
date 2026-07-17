// 该文件为锁定文件，请勿编辑该文件

#include "implementation.h"
#include <iostream>
#include <string>

int main()
{
    int n, k;
    std::cin >> n >> k;
    std::cin.ignore();
    Implementation imp;

    std::string line;
    // preprocess
    while (std::getline(std::cin, line))
    {
        if (line == "exit")
        {
            break;
        }
        std::string currentNumber;
        imp.constructNewLine();
        for (int i = 0; i < line.length(); i++)
        {
            if (line[i] == ' ')
            {
                if (!currentNumber.empty())
                {
                    imp.insert(imp.stringToInt(currentNumber));
                    currentNumber.clear();
                }
            }
            else
            {
                currentNumber += line[i];
            }
        }
        if (!currentNumber.empty())
        {
            imp.insert(imp.stringToInt(currentNumber));
            currentNumber.clear();
        }
    }

    int **result = initialResult(n, k);

    process(imp, n, k, result);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            std::cout << result[i][j] << " ";
        }
    }
    std::cout << std::endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (result[i])
            {
                delete[] result[i];
                result[i] = nullptr;
            }
        }
    }

    if (result)
    {
        delete[] result;
        result = nullptr;
    }
}