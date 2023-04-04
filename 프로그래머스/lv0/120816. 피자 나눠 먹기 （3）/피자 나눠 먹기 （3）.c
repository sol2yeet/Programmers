#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int slice, int n) {
    int answer = 1;
   
    for (int i = n; i > slice; i-- ){
    if( (answer * slice) < n ){
        answer += 1;
    }else{
        break;
    }
    }
    
    return answer;
}