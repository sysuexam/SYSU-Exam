// 该文件为锁定文件，请勿编辑该文件

#include <string.h>
#include <string>
#define NormalSize 2
class Implementation
{
public:
    inline Implementation() : lineCount(0), capacity(NormalSize)
    {
        this->val = new int *[NormalSize];
        this->lineCapacity = new int[NormalSize];
        this->valCount = new int[NormalSize];
    }
    ~Implementation();
    void constructNewLine();
    int stringToInt(const std::string &input);
    void insert(int val);

    inline int getLineSize(int idx) { return valCount[idx]; }
    inline int getVal(int i, int j) { return val[i][j]; }
    inline int getLineCount() { return lineCount; }

private:
    int **val;
    int lineCount;
    int capacity;
    int *lineCapacity;
    int *valCount;
};

int **initialResult(int n, int k);

void process(Implementation &imp, int n, int k, int **result);

bool isPrime(int val);
