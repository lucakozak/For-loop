//
//  main.c
//  3
//
//  Created by Kozak, Luca on 2017. 10. 06..
//  Copyright © 2017. Kozak, Luca. All rights reserved.
//

#include <stdio.h>

int main() {
    
    int a, n, sum=0 ;
    
    printf("Write a number");
    scanf("%d",&n);
    
    for (a=0;a<=n;a++) {
        
        printf("%d\n",a);
        sum=sum+a;
    }
    
    printf("%d\n", sum);
    
    return 0;
}
