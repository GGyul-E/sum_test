#include "sum.h" // " and <. we use " if we include something

int sum(int n){
    int sum = 0;
    for(int i = 1;i <= n;i++){
        sum += i;
    }
    return sum;
}

