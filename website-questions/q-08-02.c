// Graphs -> Q 02 : Create a graph using an adjacency list with insertion and deletion operations.

#include <stdio.h>
#include <stdlib.h>

struct edge;

struct vertice{
    int data;
    struct vertice * other_vertice;
    struct edge * edge_connection; 
};

struct edge{
    struct vertice * dest;
    struct edge * next_edge;
};


// 1. ADD VERTICE 

// ~ 0 -> malloc failed 
// ~ 1 -> done and initally no vertice
// ~ 2 -> added a new vertice initially had some vertice 
// ~ -1 -> the data already exist  

int add_vertice(struct vertice ** head,int data){

    struct vertice * new_vertice = (struct vertice * )(malloc(sizeof(struct vertice)));
    if (new_vertice == NULL) {return 0;}
    new_vertice->data = data;
    new_vertice->edge_connection = NULL;
    new_vertice->other_vertice = NULL; 

    if ((*head) == NULL) {
        (*head) = new_vertice;
        return 1;
    }

    struct vertice * temp = (*head);
    struct vertice * pre = (*head);
    while (temp!=NULL){
        if (temp->data == data){
            free(new_vertice);
            return -1; // if data doenst esit the mallc will still create extra spce 
        }
        pre = temp;
        temp = temp->other_vertice;
    }

    pre->other_vertice = new_vertice;
    return 2;
    
}


// 2. REMOVE VERTICS 
// ~ 0 -> no data 
// ~ -1 -> not found 
// ~ 1 -> found and removed edges and vertice

int remove_vertice(struct vertice ** head,int data){
    if ((*head) == NULL){
        return 0;
    }

    struct vertice * temp = (*head);
    struct vertice * prev = (*head);
    int found = 0;
    while (temp!=NULL)
    {
        if (temp->data == data){
            found = 1;
            break;
        }
        prev = temp; 
        temp = temp->other_vertice;

    }

    if (found == 0){return -1;}
    if (temp == (*head)){
        (*head) = temp->other_vertice;
    }
    else{
        prev->other_vertice = temp->other_vertice;
    }

    // temp has the address of node to be deleted it is free and floating but not deleted yet and incoming edges also connected 

    struct vertice * temp_tra = ((*head));

    while (temp_tra != NULL)
    {
        struct edge * curr_edge = temp_tra->edge_connection;
        struct edge * prev_edge = temp_tra->edge_connection;

        if(curr_edge == NULL){
            temp_tra = temp_tra->other_vertice;
            continue;}
    
        // if(curr_edge->dest == temp){
        //     temp_tra->edge_connection = curr_edge->next_edge;
        //     free(curr_edge);
        //     curr_edge = NULL;
        //     temp_tra = temp_tra->other_vertice;
        //     continue;
        // }
        int found = 0;
        while (curr_edge != NULL)
        {
            if (curr_edge->dest == temp){
                found = 1;
                break;
            }
            prev_edge = curr_edge;
            curr_edge = curr_edge->next_edge;
        }

        if (found == 1){
            if (curr_edge == temp_tra->edge_connection){
                temp_tra->edge_connection = curr_edge->next_edge;
            }
            else{
                prev_edge->next_edge = curr_edge->next_edge;
            }
            free(curr_edge);

        }

        temp_tra = temp_tra->other_vertice;

    }

    struct edge * curr_edge = temp->edge_connection;
    struct edge * prev_edge = NULL;
    while (curr_edge != NULL)
    {
        prev_edge = curr_edge;
        curr_edge = curr_edge->next_edge;
        free(prev_edge);
    }

    

    free(temp);
    return 1;
    
}


// 3. SHOW VERTICES 

void show_vertice(struct vertice * head){
    if (head == NULL){printf("NO DATA\n"); return;}
    
    printf("\n+------------+\n");
    printf("|  Vertices  |\n");
    while(head!=NULL){
        
        printf("|    %4d    |\n",head->data);
        head = head->other_vertice;
    }
    printf("+------------+\n");
    return;
}

// 4. SHOW VERICES + EDGES 

void show_edges(struct vertice * head){
    if (head == NULL){printf("NO DATA\n"); return;}
    
    struct edge * edge = NULL;

    printf("\n+------------+\n");
    printf("|  Vertices  | --->  (edges)\n");
    
    while(head!=NULL){
        printf("|    %4d    | --->",head->data);
        edge = head->edge_connection;
        while(edge!=NULL){
            printf("  (%3d)",edge->dest->data);
            edge = edge->next_edge;
        }
        printf("\n");
        head = head->other_vertice;
    }
    printf("+------------+\n");
    return;

}


// 5. CONNECT VERTICE 
// ~ 0 -> no data
// ~ -1 -> dest not found
// ~ -2 -> source not found
// ~ -3 -> already exist 
// ~ -4 -> malloc failed 
// ~ 1 -> done 

int connect_vertice(struct vertice ** head,int source,int dest){
    if ((*head) == NULL){return 0;}

    struct vertice * temp = (*head);
    struct vertice * addof_source = NULL;
    struct vertice * addof_dest = NULL;


    while (temp!=NULL)
    {
        if (temp->data == source){
            addof_source = temp;
        }
        else if (temp->data == dest){
            addof_dest = temp;
        }

        temp = temp->other_vertice;
    }

    if (addof_dest== NULL){return -1;} 
    if (addof_source == NULL) {return -2;}

    struct edge * curr_edge = addof_source->edge_connection;
    struct edge * pre_edge = addof_source->edge_connection;
    while (curr_edge != NULL)
    {
        if (curr_edge->dest->data == dest){ return -3;}
        pre_edge = curr_edge;
        curr_edge = curr_edge->next_edge;
    }

    struct edge * new_edge = (struct edge *)(malloc(sizeof(struct edge)));
    if (new_edge == NULL){return -4;}
    new_edge->dest = addof_dest;
    new_edge->next_edge = NULL;

    if (addof_source->edge_connection == NULL){
        addof_source->edge_connection = new_edge;
    }
    else{
        pre_edge->next_edge = new_edge;
    }
    
    return 1;
    return 1;
    
    
}

// 6. DISCONNECT EDGE 
// ~ 0 : no data 
// ~ -1 -> dest not found
// ~ -2 -> source not found
// ~ -3 -> connection not found
// ~ 1 ->  done

int disconnect_vertice(struct vertice ** head,int source, int dest){
    if ((*head) == NULL){return 0;}

    struct vertice * temp = (*head);

    struct vertice * addof_source = NULL;
    struct vertice * addof_dest = NULL;

 
    while (temp!=NULL)
    {
        if (temp->data == source){
            addof_source = temp;
        }
        else if (temp->data == dest){
            addof_dest = temp;
        }

        temp = temp->other_vertice;
    }

    if (addof_dest== NULL){return -1;} 
    if (addof_source == NULL) {return -2;}

    int is_connected = 0;

    struct edge * curr_edge = addof_source->edge_connection;
    struct edge * pre_edge = addof_source->edge_connection;
    while (curr_edge != NULL)
    {
        if (curr_edge->dest->data == dest){ is_connected = 1; break;}
        pre_edge = curr_edge;
        curr_edge = curr_edge->next_edge;
    }

    if (curr_edge == addof_source->edge_connection){
        addof_source->edge_connection = curr_edge->next_edge;
    }
    else{
        pre_edge->next_edge = curr_edge->next_edge;
    }
    free(curr_edge);
    return 1;

}


// 7. SHOW NEIGHBOUR AND DEGREE 

void show_degree(struct vertice * head,int data){
    if (head == NULL){printf("NO DATA\n"); return;}
    
    struct edge * edge = NULL;
    
    while (head!=NULL){
        if(head->data == data){
            break;
        }
        head = head->other_vertice;
    }
    
    if (head == NULL){printf("Vertice Not Found\n"); return;}
    
    printf("\n+------------+\n");
    printf("|  Vertices  | --->  (edges)\n");
    printf("|    %4d    | --->\n",head->data);
    
    edge = head->edge_connection;
    int count = 0;
    while (edge!=NULL)
    {
        count++;
        printf("  (%3d)",edge->dest->data);
        edge = edge->next_edge;
    }
    printf("\n");
    printf("+------------+\n");
    printf("Degree of Vertice %d is -> %d\n",head->data,count);
    return;
    
}



int main(){

    struct vertice * head = NULL;
    int choice,input_val,input_val_2,out;


    while (1)
    {
        printf("\nEnter the choice :\n");
        printf("1 : Show vertices\n");
        printf("2 : Show edges\n");
        printf("3 : Add vertices\n");
        printf("4 : Remove vertice\n");
        printf("5 : Connect Vertices\n");
        printf("6 : Disonnect Vertices\n");
        printf("7 : Show Neighbours and Degree\n");
        printf("0 : exit\n");
        printf("Enter choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            show_vertice(head);
            break;

        case 2:
            show_edges(head);
            break;

        case 3:
            printf("Enter the data of vertice to add : ");
            scanf("%d", &input_val);
            out = add_vertice(&head,input_val);
            if (out == -1)
                printf("Already Exist, Cannot add data\n");
            else if (out == 0)
                printf("Malloc Failed \n");
            else if (out == 1)
                printf("Added, no initial vertices was there \n");
            else
                printf("%d Added\n",input_val);
            break;

        case 4:
            show_vertice(head);
            printf("\nEnter the data of vertice to remove : ");
            scanf("%d", &input_val); 
            out = remove_vertice(&head,input_val);
            if (out == 0)
                printf("No data\n");
            else if (out == -1)
                printf("Vertice not found\n");
            else
                printf("%d Removed\n",input_val);
            break;

        case 5:
            show_edges(head);
            printf("\nEnter the data of source vertice : ");
            scanf("%d", &input_val);
            printf("Enter the data of dest vertice  : ");
            scanf("%d", &input_val_2);
            out = connect_vertice(&head,input_val,input_val_2);
            if (out == 0)
                printf("No Data \n");
            else if (out == -1)
                printf("Dest not found \n");
            else if (out == -2)
                printf("Source not found \n");
            else if (out == -3)
                printf("Already Connected \n");
            else if (out == -4)
                printf("Malloc Failed \n");
            else if (out == 1)
                printf("Connected the (%d)----->(%d)\n",input_val,input_val_2);
            break;

        case 6:
            show_edges(head);
            printf("\nEnter the data of source vertice : ");
            scanf("%d", &input_val);
            printf("Enter the data of dest vertice : ");
            scanf("%d", &input_val_2);
            out = disconnect_vertice(&head,input_val,input_val_2);
            if (out == 0)
                printf("No Data \n");
            else if (out == -1)
                printf("Dest not found \n");
            else if (out == -2)
                printf("Source not found \n");
            else if (out == -3)
                printf("Connection not found \n");
            else if (out == 1)
                printf("Disconnected the (%d)--x-->(%d)\n",input_val,input_val_2);
            break;
            
        case 7:
            show_vertice(head);
            printf("\nEnter the data of vertice : ");
            scanf("%d", &input_val);
            show_degree(head,input_val);
            break;

                    
        case 0:
            printf("exitting ...\n");
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }   
    
    return 0;

}