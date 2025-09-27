#include<stdio.h>
#include<string.h>

/*
int main(){
    int i, j;
    int score[2][3] = {
                       {85, 90, 85}, 
                       {75, 88, 92}
                    };
     
    printf("Scores in 2D array format Before:\n");
        for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", score[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i = 0; i < 2; i++){
       score[i][1] =0; // Increase the first subject score by 5
    }

    printf("Scores in 2D array format After:\n");
        for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", score[i][j]);
        }
        printf("\n");
    }

    
return 0;

}
*/
/*
int main(){
   
    int cube[1][2][3] = {
                            {
                                {1, 2, 3}, 
                                {4, 5, 6}
                            }
                        };

        for (int i = 0; i<1; i++){
            for (int j = 0; j<2; j++){
                for (int k = 0; k<3; k++){
                    printf("cube[%d][%d][%d] = %d\n", i, j, k, cube[i][j][k]);
                }
            }
        }

        return 0;
    }
        */

/*

int main(){

char name[20];
printf("Enter your name: ");
scanf("%s", name);

char surname[20];  
printf("Enter your surname: ");
scanf("%s",surname);

int length = strlen(name);
printf("Length of your name is: %d\n", length);

int length1 = strlen(surname);
printf("Length of your name is: %d\n", length1);

}

*/

int main(){

int i, j;
int score[3][3] =  {
                       {27, 90, 85}, 
                       {75, 88, 92},
                       {15, 39, 7}
                    };
     
    printf("Original Data:\n");
        for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", score[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < 3; i++){
       for(int j = 0; j < 3; j++){
        if(score[i][j] %2 == 0){
            score[i][j]  = score[i][j] +i;
        } else {
            score[i][j] = score[i][j] + j;
        }

       }
    }
    printf("Reviscd Data:\n");
        for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", score[i][j]);
        }
        printf("\n");
    }
}