#include "dz3.hpp"

int main(int argc, char * argv []){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    int k = atoi(argv[4]);
    int i = 0;
    vector<char> vec;

    while(i < k) {
        long int d = discriminant(a, b, c);
        if (d % 2 == 0)
            vec.push_back(0);
        else
            vec.push_back(1);
        cout << d % 2 << " ";
        c = b;
        b = a;
        a = d % 128;
        i++;
    }

    add_to_file(vec, "myfile.bin");
}


