#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = 0;
    int drink = 0;
    
    drink = (int)(n / 10);
    k = k - drink;
    
    answer = (n * 12000) + (k * 2000);
    
    return answer;
}