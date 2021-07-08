#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int arr[5];
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    //+ - * /
    // 순서 유지해야 함
    bool flag = false;
    for(int i = 0; i < 3; ++i){
        for(int j = i + 1; j < 3; ++j){
            if(i + 1 == j){
                int residx = 3 - (i + j);
                int operand1, operand2, res;
                operand1 = arr[i];
                operand2 = arr[j];
                res = arr[residx];
                if(operand1 + operand2 == res){
                    flag = true;
                    if(residx == 0){
                        printf("%d=%d+%d", res, operand1, operand2);
                    }
                    else{
                    printf("%d+%d=%d", operand1, operand2, res);
                    }
                    break;
                }
                else if(operand1 - operand2 == res){
                    flag = true;
                    if(residx == 0){
                        printf("%d=%d-%d", res, operand1, operand2);
                    }
                    else{
                    printf("%d-%d=%d", operand1, operand2, res);
                    }
                    break;
                }

                else if(operand1 * operand2 == res){
                    flag = true;
                    if(residx == 0){
                        printf("%d=%d*%d", res, operand1, operand2);
                    }
                    else{
                    printf("%d*%d=%d", operand1, operand2, res);
                    }
                    break;
                }

                else if(operand1 / operand2 == res){
                    flag = true;
                    if(residx == 0){
                        printf("%d=%d/%d", res, operand1, operand2);
                    }
                    else{
                    printf("%d/%d=%d", operand1, operand2, res);
                    }
                    break;
                }

            }
        }
        if(flag == true) break;
    }
}