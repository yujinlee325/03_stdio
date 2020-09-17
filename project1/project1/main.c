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
    printf("input an alphabet :");
    scanf("%c", &c);
    
    printf("input alphabet is %c (%d), and the next one is %c (%d)\n", c, c, c+1, c+1);
    

    return 0;
}
