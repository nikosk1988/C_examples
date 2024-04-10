
#include <stdio.h>
int Search (int number[5], int key){
    int pl = 0;
    
    for(int i=0; i<5; i++){
        if (number[i]==key){
            pl ++;
        }
    }
    return pl;
}

int main() {
    // Write C code here
    int number[5];
    int key,times; 
    
    for(int i=0; i<5; i++){
        printf("Dwse arithmoys:\t");
        scanf("%d",&number[i]);
    }
    
    printf("Psa3e gia to ...\n");
    scanf("%d", &key);
    
    times = Search(number, key);
    if (times != 0) {
        printf("To %d brethhke %d fores!", key, times);
    }
    else{
        printf("To %d de drethhke mesa ston pinaka!", key);
    }
    
    return 0;
}
