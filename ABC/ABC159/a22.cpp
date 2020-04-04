#include <iostream>
#include <string>
#include <algorithm>

int main() {
std::string os, rs;

std::cin >> os;

if((os.size() < 3 || os.size() > 99) && os.size() % 2 == 0)
{
    std::cout << "No" << std::endl;
    return 0;
}

if((os.size() < 3 || os.size() > 99))
{
    std::cout << "No" << std::endl;
    return 0;
}

rs = os;
reverse(rs.begin(), rs.end());
if(os == rs)
std::cout << "Yes" << std::endl;
else
std::cout << "No" << std::endl;

return 0;
}