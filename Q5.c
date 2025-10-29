#include<stdio.h>
int main() {
    int temp[4][4] = {{12, 15, 10, 9}, 
					  {11, 8, 12, 13}, 
					  {14, 13, 9, 7}, 
					  {16, 11, 10, 8}};
    
    printf("Cold spots found:\n");
    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            int current = temp[i][j];
            int is_cold_spot = 1;
            
            if(i > 0 && temp[i-1][j] <= current) is_cold_spot = 0;
            if(i < 3 && temp[i+1][j] <= current) is_cold_spot = 0;
            if(j > 0 && temp[i][j-1] <= current) is_cold_spot = 0;
            if(j < 3 && temp[i][j+1] <= current) is_cold_spot = 0;
            
            if(is_cold_spot) {
                printf("- At position (%d,%d) with temperature %dC\n", i+1, j+1, current);
            }
        }
    }
    
    return 0;
}
