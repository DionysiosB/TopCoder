#include <iostream>
#include <map>

int main(){

    std::map<int, int> dashes;
    dashes[0] = 6; dashes[1] = 2; dashes[2] = 5; dashes[3] = 5; 
    dashes[4] = 4; dashes[5] = 5; dashes[6] = 6; dashes[7] = 3;
    dashes[8] = 7; dashes[9] = 6;

    std::string s; getline(std::cin, s);
    long res(0);
    for(int p = 0; p < s.size(); p++){res += dashes[s[p] - '0'];}
    std::cout << res << std::endl;


    return 0;
}
