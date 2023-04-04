#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {   
    int answer = 0;
  
    while(1){
        if(n % 2 == 0 ){
            answer += n;
                }
        if(!(n <= 1000 && n-- > 0))
            break;
            }
    return answer;
}

// int solution(int n) { 
//     int answer = 01
//     for(int i = 0; i <= n; i++ ){
//         if(i % 2 == 0 ){
//             answer += i;
//                 }
//             }
//     return answer;
// }