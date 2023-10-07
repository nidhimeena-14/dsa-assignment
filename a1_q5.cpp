#include <iostream>
int main()
{
    int n, ct = 0;
    std: :cout << "enter n: ";
    std: :cin >> n;
    if(n < 0)
    {
        n = -1 * n;
    }
    if(n == 0)
    {
        count = 1;
    }      
    while(n !=0)
    {
        n = n / 10;
        ct = ct + 1;
    }
    std: :cout << "number of digits " << ct << std::endl;
    return 0;
}
