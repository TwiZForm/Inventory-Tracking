#include <stdio.h>
#include <stdbool.h>

//Variables
char filename = "InventoryList.csv";
int num;
struct inv_items(){
    char *Items[];
    int price;
    int numOfItems;
}

void check_in(const char *filename){
    FILE *fptr;
    
    if (fptr == NULL){
        printf("File not detected. Would you like to name your inventory? Enter 1 for yes or 2 for no: \n");
        scanf( "%d", num);
        switch(num){
            case 1: 
                printf("Please type out a name: ");
                scanf("%s", filename);
            case 2:
                printf("Very well. The default name is 'Inventory List.csv'.");
        }
        
        fptr = fopen(filename, "w");
        fprintf(fptr, "Product Name, Number of Items, Price");
    } else{
        printf("File detected.");
    }

}

int main(){
    printf("Hello, welcome to the Inventory System. This program can be used for anything you wish to catalog.")
    printf("Before we get started, ")
}