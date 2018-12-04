#include <stdio.h>
#include <stdlib.h>

int main(){
    
    FILE *img1;
    img1 = fopen("/Users/kb00709/Desktop/PracticeVers1.1.run", "r");
    int greylevelvalue;
    int image[600];
    int i;
    int j;
    int count=0;
    int a;
    int t;
    int val=0, sum=0;
    int z=3;
    int arraylen=0;
    int b=0;
    int cnt=0;
    
    if (img1 == NULL){
        printf("Error Reading File\n");
        exit (0);
    }
    
    for (i = 0; i < 25; i++){
        fscanf(img1, "%d,", &image[i] );
    }
    
    for (i = 0; i < 25; i++){
        arraylen++;
        printf("%d", image[i]);
    }
    printf("\n array length is %d \n", arraylen);
    
    greylevelvalue=image[2];
    printf("enter the number of grey values");
    scanf("%d", &t);
    //write code to check t is integer
    
    
    for (i = 3; i<24; i+=2){
    
    //printf("buna");
    if (image[i]<t){
        a=image[i+1];
                for(j=1; j<a+1; j++){
                   if(count==image[0]){
                        printf("\n");
                        count=0;
                   }
                printf("#");
                 count++; }
        image[i]=0;
        
    }
        if (image[i]>=t){
            a=image[i+1];
                for(j=1; j<a+1; j++){
                    if(count==image[0]){
                        printf("\n");
                        count=0;
                       }
                printf(" ");
                 count++;}
        image[i]=1;
       
                    
                }
}
    
   /* for (i = 1; i <12; i++){
    while(image[z]==image[z+2]) {
      //  printf("img i %d", image[z]);
      // printf("img i+1 %d", image[z+2]);
       // sum=image[z+1]+image[z+3];
       // val=image[z];
       // printf("sum is %d", sum);
       // printf(" val is %d sum is %d", val, sum);
        break;
    }
        z+=2;
        
        
    }*/
     printf("\n");
    for(i=0; i<25; i++){
        printf("%d", image[i]);
    }
    
    for(i=3; i<arraylen+1; i+=2){
        while(image[i]==image[i+2]){
            image[i+1]=image[i+1]+image[i+3];
            
            for(b=i+2; b<arraylen+1; b++){
                image[b]=image[b+2];
                image[b+1]=image[b+3];
                
                cnt=cnt+2;
            }
            
        }
            
    }
    printf("\n");
    for(b=0; b<arraylen-cnt+1; b++){
        printf("alo");
        printf("%d", image[b]);
    }
    
    }

