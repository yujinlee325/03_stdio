//
//  main.c
//  project1
//
//  Created by 이유진 on 2020/09/17.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    int a;
    float b;
    printf("input two integers :");
    scanf("%d %f", &a, &b);
    
    printf("result is %f\n", a/b);
    /*
     int a,b;
     
     printf("input two integers :");
     scanf("%d %d, &a,&b);
     
     printf("result is %f\n", (floot)a/b);
     */
    
    return 0;
}
