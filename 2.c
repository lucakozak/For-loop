//
//  main.c
//  2
//
//  Created by Kozak, Luca on 2017. 10. 06..
//  Copyright © 2017. Kozak, Luca. All rights reserved.
//

#include <stdio.h>

int main() {
    int a, sum = 0;
    
    for (a=1;a<=9;a++) {
        
        sum=sum+a;
        printf("%d\n", a);
    }
    
    
    printf("%d\n",sum);
    
    return 0;
}
