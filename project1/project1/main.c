//
//  main.c
//  project1
//
//  Created by 이유진 on 2020/09/17.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int input_int;
    float input_float;
    
    printf("enter an integer : ");
    scanf("%d", &input_int);
    
    printf("enter an float : ");
    scanf("%f", &input_float);
    
    printf("integer : %d, float : %f\n", input_int, input_float);
    
    return 0;
}
