//
//  main.c
//  project1
//
//  Created by 이유진 on 2020/09/17.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char c;
    int i;
    
    printf("input a number :");
    scanf("%c", &c);
    
    i = c - '0' ;
    printf("The input numbers is %i\n", i);
    
    return 0;
}
