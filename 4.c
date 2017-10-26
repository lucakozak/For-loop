//
//  main.c
//  4
//
//  Created by Kozak, Luca on 2017. 10. 06..
//  Copyright © 2017. Kozak, Luca. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a,n,sum=0;
    
    float avg;
    
    printf("Input the 10 numbers : \n");
    
    for (a=1; a<=10; a++)
    {
        printf("Number: %d :",a);
        scanf("%d",&n);
        sum=sum+n;
    }
    avg=sum/10.0;
    
    printf("The sum of 10 is :%d\nThe Average is : %f\n",sum,avg);
    
    return 0;
}
