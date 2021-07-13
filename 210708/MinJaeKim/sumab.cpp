#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <stdlib.h> // 말록 라이브러리

using namespace std;

#define swap2(type, x, y) do{type t = x; x = y; y = t;}while(0)

int sm(int k){
    float m = (float) k;
    return  (int) (m * (m + 1) / 2);
}

int sumof(int a, int b){
    if(b < a)
        swap2(int, a, b);
    
    int y = sm(a - 1);
    int x = sm(b);
    return x - y;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    cout << sumof(a,b);
    return 0;

}