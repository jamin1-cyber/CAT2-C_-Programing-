//A program of 2D arrray
#include <stdio.h>
int main() {
//Declaring a 2D array 
int score[2][2][2]= {{{65,92},{84,72}},{{35,70},{59,67}}};
for(int i=0;i<2;i++){
for(int p=0;p<2;p++){
for(int r=0;r<2;r++){
//printing each element in 2D array 
printf("[%d][%d][%d] = %d   " ,i,p,r,score[i][p][r]);

}
printf("\n");
}
printf("\n");
}
return 0;
}
    