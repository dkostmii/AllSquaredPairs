#include <iostream>
#include <math.h>
#include <vector>
#include <tuple>
#include <string>
#include <sstream>


std::string all_squared(int num = 0)
{
    std::vector<std::pair<int, int>> result;

    for (int a = 0; a <= floor(sqrt(num)); a += 1)
    {
        for (int b = (int) floor(sqrt(num)); b > a; b -= 1)
        {
            int dist = (int) floor(pow(a, 2) + pow(b, 2));

            if (dist == num)
                result.push_back(std::pair<int, int> {a, b});
        }
    }

    std::ostringstream ss;
    int size = result.size();

    ss << "[ ";

    int index = 0;
    for (auto [a, b] : result)
    {
        ss << "[ " << a << ", " << b << (index == size - 1 ? " ]" : " ], ");
        index++;
    }

    ss << " ]" << std::endl;

    return ss.str();
}

int main()
{
    std::cout << all_squared(0);
}
