#include<iostream>
#include<algorithm>
using namespace std;

// bool next_permutation(l,r)
// rearranges the range to form the next lexicographically greater permutation


int main()
{
    int c[5] = {1,2,3,4,5};

    do{
        for(int i=0;i<5;i++)
        {
            cout << c[i] << (i==4 ? '\n' : ' ');
        }
    }while(next_permutation(c,c+5));
}