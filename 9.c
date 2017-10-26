//
//  main.c
//  9
//
//  Created by Kozak, Luca on 2017. 10. 06..
//  Copyright © 2017. Kozak, Luca. All rights reserved.
//

#include <stdio.h>

int main(){


    int i,j,rows;
    printf("Input number of rows : ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
}
