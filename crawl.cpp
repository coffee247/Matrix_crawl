#include <iostream>
using namespace std;

int main()
{
    int two_d[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};
    int rows = 3;
    int cols = 4;
    int rowsCols = rows*cols;
    for (int i = 0; i < rowsCols; ++i)
    {
        auto& inner = two_d[i/rowsCols];
        cout << inner[i%rowsCols]<< endl;
    }
    cout << "\n Yaay, it worked!\n" << endl;
    return 0;
}
