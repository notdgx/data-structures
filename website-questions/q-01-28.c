// Strings -> Q 28 : Create a dictionary containing 10 words and their meanings, with operations to create, delete, and search.

#include <stdio.h>
#include <string.h>

#define N_WORD 10
#define S_MENG 100

int main()
{
    char dict[N_WORD][2][S_MENG] = {
        {"Apple", "A fruit"},
        {"Book", "Something used for reading"},
        {"Cat", "A small domesticated animal"},
        {"Dog", "A domesticated animal"},
        {"Earth", "The planet we live on"}
    };
    
    int count = 5;
    
    char word[S_MENG],ch;
    int i,j;
    int choice, index = -1 ;

    while (1) {

        printf("\n1 -> Search word\n");
        printf("2 -> Create word\n");
        printf("3 -> Delete word\n");
        printf("4 -> Display dictionary\n");
        printf("5 -> Exit\n");
        
        scanf("%d", &choice);
        getchar();

        switch(choice){
        case 1 : {

            index = -1;

            printf("Enter word to search -> ");            
            for(i = 0 ; i < S_MENG-1;i++){
                ch =  getchar();
                if (ch == '\n'){
                    break;
                }
                word[i] = ch;
            }
            word[i] ='\0';


            for (j = 0; j < count ; j++){
                if (strcmp(word,dict[j][0]) == 0){
                    index = j;
                    break;
                }
            }

            if (index == -1){ printf("The Word -> '%s' Not found\n",word);}
            else {printf("The Word -> '%s' found at index -> %d\n",word,index);}
            break;
        }


        case 2 : {
            if (count >= 10){
                printf("Maximum Word limit Reached\n");
                break;
            }

            if ((count<=10) && (count>=0)){
                printf("Enter word to enter -> ");            
                for(i = 0 ; i < S_MENG-1;i++){
                    ch =  getchar();
                    if (ch == '\n'){
                        break;
                    }
                    word[i] = ch;
                }
                word[i] ='\0';

                count;


                strcpy(dict[count][0],word);

                printf("Enter Meaning to enter -> ");            
                for(i = 0 ; i < S_MENG-1;i++){
                    ch =  getchar();
                    if (ch == '\n'){
                        break;
                    }
                    word[i] = ch;
                }
                word[i] ='\0';
    
                strcpy(dict[count][1],word);
                count++;

                printf("Word Entered at index -> %d\n",count-1);
                break;

            }}


            case 3: {

                if (count == 0){
                    printf("Dict Empty\n");
                    break;
                }
                
                printf("Enter word to delete -> ");          
                for(i = 0 ; i < S_MENG-1;i++){
                    ch =  getchar();
                    if (ch == '\n'){
                        break;
                    }
                    word[i] = ch;
                }
                word[i] ='\0';
                index = -1;

                for (j = 0; j < count ; j++){
                if (strcmp(word,dict[j][0]) == 0){
                    index = j;
                    break;
                }}
            
                if (j == -1){ printf("The Word -> '%s' Not found\n",word);}
                else {printf("The Word -> '%s' found at index -> %d\n",word,j);
                    dict[index][0][0] = '\0';
                    dict[index][1][0] = '\0';
                        printf("Word Removed !\n");}
                break;
            
            }

            case 4: {

                if (count == 0){
                    printf("Dict Empty\n");
                    break;
                }
                
                printf("\nDictionary ->>\n\n");
                for (j = 0 ; j < count ; j++){
                    if (dict[j][0][0] == 0){continue;}
                    printf("%d -> %s :\n",j,dict[j][0]);
                    printf("%s\n",dict[j][1]);
                    printf("\n");
                }

                break;

            }

            case 5:{
                return 0;
            }

            default: {
                printf("Invalid Input\n");
            }

            
            
        }
    
    
    }
    return 0;
        }

