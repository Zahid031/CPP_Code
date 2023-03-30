#include <iostream>
#include <string>

bool is_magic(std::string n)
{
    int i = 0;
    while (i < n.length())
    {
        if (n[i] == '1')
        {
            if (i + 1 < n.length() && n[i + 1] == '4')
            {
                if (i + 2 < n.length() && n[i + 2] == '4')
                {
                    i += 3;
                }
                else
                {
                    i += 2;
                }
            }
            else
            {
                i += 1;
            }
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    std::string n;
    std::cin >> n;
    if (is_magic(n))
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
    return 0;
}
