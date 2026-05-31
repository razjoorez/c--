#include <iostream>

int main()
{
int numbers[2][3] = {     //2 rows and three columns 
                    {1,2,3},
                    {4,5,6}
                   };

int numbers2[2][3];
int numbers3[3][3];
int rows = sizeof(numbers3)/sizeof(numbers3[0]);  
int columns = sizeof(numbers3[0])/sizeof(numbers3[0][0]);

printf("rows: %d \n ", rows);

printf("columns: %d \n", columns);

numbers2[0][0] = 1;
numbers2[0][1] = 2;
numbers2[0][2] = 3;
numbers2[1][0] = 4;
numbers2[1][1] = 5;
numbers2[1][2] = 6;
numbers2[2][0] = 7;
numbers2[2][1] = 8;
numbers2[2][2] = 9;


for (int i = 0; i< 3; i++) 
    {
    for(int j=0; j<3; j++) {
        printf("%d ", numbers2[i][j]);
       
    }
    printf("\n");
}




return 0;

}