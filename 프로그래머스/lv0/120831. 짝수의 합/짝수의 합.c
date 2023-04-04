#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// int solution(int n) {   
//     int answer = n;
//     while( n <= 1000 && n-- > 0){
//         if(n % 2 == 0 ){
//             answer += n;
//                 }
//             }
//     return answer;
// }

int solution(int n) { 
    int answer = 0;
    for(int i = 0; i <= n; i++ ){
        if(i % 2 == 0 ){
            answer += i;
                }
            }
    return answer;
}