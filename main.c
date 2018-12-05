#include <stdio.h>
#include <stdlib.h>

void shortenarray(int image[]);
int checkequality(int image[]);
int numar;
int max;
int main(){
    
    FILE *img1;
    img1 = fopen("/Users/kb00709/Desktop/Balloon.run", "r");
    int greylevelvalue;
    int image[1600];
    int i=0;
    int j;
    int count=0;
    int a;
    int t;

    
    if (img1 == NULL){
        printf("Error Reading File\n");
        exit (0);
    }
    
    for (i = 0; i < 1600; i++){

        fscanf(img1, "%d,", &image[i] );
        if(image[i]==0 && image[i+1]==0)
            i=1600;
        max++;
    }
            
    
   
    for (i = 0; i < max; i++){
        
        printf("%d", image[i]);
        }
    

    greylevelvalue=image[2];
    printf("enter the number of grey values");
    scanf("%d", &t);
    //write code to check t is integer
    
    
    for (i = 3; i<max; i+=2){
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
    
  
    for(i=0; i<max; i++){
        printf("%d ", image[i]);
    }
    printf("\n");
    shortenarray(image);
   if(checkequality(image)==1){
        shortenarray(image);
        
    }
    
 
    
    }

void shortenarray(int image[]) {
    
    int i, f, arraylen=0, numar=0, b=0;

    for(i = 3; i < max; i+=2){
        if(image[i] == image[i+2]){
            image[i+1] = image[i+1] + image[i+3];
            for(int f = i+2; f < arraylen-1; f++ ){
                image[f] = image[f+2];
                image[f+1]=image[f+3];
              max = max-1;
            }
            //max = max-1;
            
        }
    }
  
    for(b=0; b<max; b++){
        
        printf("%d ", image[b]);
    }
    printf("\n");
      printf("\n");
}

int checkequality(int image[]){
    int i, check=0;
    
    for (i=1; i<max; i+=2){
        if(image[i] == image[i+2])
            check=1;
        else check=0;
    }
    if(check==1) return 1;
    else return 0;
}
