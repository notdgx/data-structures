// Graphs -> Q 05 : Traverse an adjacency matrix using Breadth-First Search (BFS).
#include <stdio.h>
#include "../queue/queue.c"
// IT IS DIRECTED GRAPH , USING ADJACENT MATICS AND FIXED SIZED 

// 1. Show vertices + show count
// 2. Show graph + connections + show count 
// 3. Add vertice (10 max)
// 4. Remove last vertice 
// 5. Connect two verices (ie print the current graph)
// 6. Remove two verices connection (ie print the current graph)
// 7. Print neighbours + degree


//      0  1  2  3  4  5  6  7  8  9
//    +------------------------------
//  0 | 0  0  0  0  0  0  0  0  0  0
//  1 | 0  0  0  0  0  0  0  0  0  0
//  2 | 0  0  0  0  0  0  0  0  0  0
//  3 | 0  0  0  0  0  0  0  0  0  0
//  4 | 0  0  0  0  0  0  0  0  0  0
//  5 | 0  0  0  0  0  0  0  0  0  0
//  6 | 0  0  0  0  0  0  0  0  0  0
//  7 | 0  0  0  0  0  0  0  0  0  0
//  8 | 0  0  0  0  0  0  0  0  0  0
//  9 | 0  0  0  0  0  0  0  0  0  0



struct graph{
    int graph_vertices[10];
    int graph_edges[10][10];
    int size_am;
};


// 3. ADD VERTICES 

int add_vertice(struct graph * g,int data){

    if (g->size_am == 10){return -2;}
    
    if ((g->size_am < 10) && (g->size_am >= 0)){
        int index = g->size_am;

        for(int i = 0; i<index ; i++){
            if (g->graph_vertices[i] == data){
                return -1;
            }
        }

        g->graph_vertices[index] = data;
        g->size_am++;
        return 1;
    }

}

// 4. REMOVE LAST VERTICE 

int remove_last_vertice(struct graph * g){
    if ((g->size_am < 10) && (g->size_am > 0)){
        g->graph_vertices[g->size_am -1] = 0;

        // clearing connections 

        int temp = g->size_am-1;
        for (int i = 0; i < g->size_am; i++){
            g->graph_edges[temp][i] = 0;
            g->graph_edges[i][temp] = 0;
        }

        g->size_am--;
        return 1;
    }

    return 0;
}


// 1. SHOW VERTICES + COUNT 

void show_vertice(struct graph * g){
    if (g->size_am == 0){
        printf("NO DATA");
        return;
    }

        printf("+-------+-------+\n");
        printf("| index | value |\n");
        for (int i = 0; i<g->size_am ;i++){
            printf("|  %3d  |  %3d  |\n",i,g->graph_vertices[i]);
        }
        printf("+-------+-------+\n");
        printf("Count ---> %3d",g->size_am);
}


// 2. SHOW EDGES + COUNT

void show_graph(struct graph * g){
    if (g->size_am == 0){
        printf("NO DATA");
        return;
    }

        printf("+-------+-------+\n");
        printf("| index | value | ---> Connections \n");
        for (int i = 0; i<g->size_am ;i++){
            printf("|  %3d  |  %3d  |",i,g->graph_vertices[i]);
            printf(" ---> ");
            int deg = 0;
            for(int j = 0; j <g->size_am; j++){
                if (g->graph_edges[i][j] == 1){
                    printf("(%d)  ",g->graph_vertices[j]);
                    deg++;
                }
            }
            printf(" :>> (degree -> %d)\n",deg);
        }
        printf("+-------+-------+\n");
        printf("Count ---> %3d",g->size_am);
}


// 5. CONNECT TWO VERTICE

int connect_two_vertice(struct graph * g,int edge_index,int dest_index){
    if (g->size_am == 0){
        return -1; // no data 
    }
    
    if (((edge_index >=0) && (edge_index < g->size_am)) && ((dest_index >=0) && (dest_index < g->size_am))){

        if (g->graph_edges[edge_index][dest_index] == 1){
            return -2;
        }

        g->graph_edges[edge_index][dest_index] = 1;
        return 1;

    }
}


// 6. REMOVE TWO VERTICE CONNECTION

int remove_two_vertice(struct graph * g,int edge_index,int dest_index){
    if (g->size_am == 0){
        return -1; // no data 
    }
    
    if (((edge_index >=0) && (edge_index < g->size_am)) && ((dest_index >=0) && (dest_index < g->size_am))){

        if (g->graph_edges[edge_index][dest_index] == 0){
            return -2;
        }

        g->graph_edges[edge_index][dest_index] = 0;
        return 1;

    }
}


// 7. PRINT NEIGHBOURS OF A VERTICE 

void show_neighbours(struct graph * g,int index){
    if (g->size_am == 0){
        printf("NO DATA");
        return;
    }
    printf("+-------+-------+\n");
    printf("| index | value | ---> Connections \n");
    printf("|  %3d  |  %3d  |",index,g->graph_vertices[index]);
    printf("---> ");
    int deg = 0;
    for (int i = 0; i <g->size_am ; i++){
        if (g->graph_edges[index][i] == 1){
            printf("(%d)  ",g->graph_vertices[i]);
            deg++;
        }
    }
    printf(" :>> (degree -> %d)\n",deg);
    printf("+-------+-------+\n");
    return;
}



// 8. BFS 

void bfs(struct graph * g,int start,int * visited){
    int queue[QUEUE_SIZE] = {0};
    int front = -1;
    int rear = -1;

    visited[start] = 1;
    enqueue(queue,&front,&rear,start);
    
    while(!is_empty(queue,front,rear)){

        int index = fn_front(queue,front);
        dequeue(&front,&rear);
        printf("(%d) <-> ", g->graph_vertices[index]);

        for(int i = 0; i < g->size_am ; i++){

            if (g->graph_edges[index][i] == 1 && !visited[i]){
                visited[i] = 1;
                enqueue(queue,&front,&rear, i);
            }

        }


    }

}




void bfs_traverse(struct graph *g,int start){
    if (g->size_am == 0){
        printf("NO DATA\n");
        return;
    }

    int visited[10] = {0};

    show_vertice(g);
    if (start < 0 || start >= g->size_am){
        printf("\nInvalid vertex index\n");
        return;
    }
    printf("\nBFS Traversal ->>  ");
    bfs(g, start, visited);
    printf("\n");
}



int main(){

    struct graph g = {0};
    int choice,input_val,input_val_2,out;


    while (1)
    {
        printf("\nEnter the choice :\n");
        printf("1 : Show vertices\n");
        printf("2 : Show edges\n");
        printf("3 : Add vertices\n");
        printf("4 : Remove last vertice\n");
        printf("5 : Connect Vertices\n");
        printf("6 : Disonnect Vertices\n");
        printf("7 : Show Neighbours and Degree\n");
        printf("8 : BFS Traverse\n");
        printf("0 : exit\n");
        printf("Enter choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            show_vertice(&g);
            break;

        case 2:
            show_graph(&g);
            break;

        case 3:
            printf("Enter the data of vertice to add : ");
            scanf("%d", &input_val);
            out = add_vertice(&g,input_val);
            if (out == -1)
                printf("Already Exist, Cannot add data\n");
            else if (out == -2)
                printf("Size if Full \n");
            else
                printf("%d Added\n",input_val);
            break;

        case 4:
            out = remove_last_vertice(&g);
            if (out == 1)
                printf("Removed\n");
            else
                printf("Cannot Remove\n");
            break;

        case 5:
            show_graph(&g);
            printf("\nEnter the index of 1st vertice : ");
            scanf("%d", &input_val);
            printf("Enter the index of 2nd vertice (dest) : ");
            scanf("%d", &input_val_2);
            out = connect_two_vertice(&g,input_val,input_val_2);
            if (out == -1)
                printf("No Data \n");
            else if (out == -2)
                printf("Already Connected \n");
            else
                printf("Connected the (%d (%d))--->(%d (%d))\n",g.graph_vertices[input_val],input_val,g.graph_vertices[input_val_2],input_val_2);
            break;

        case 6:
            show_graph(&g);
            printf("\nEnter the index of 1st vertice : ");
            scanf("%d", &input_val);
            printf("Enter the index of 2nd vertice (dest) : ");
            scanf("%d", &input_val_2);
            out = remove_two_vertice(&g,input_val,input_val_2);
            if (out == -1)
                printf("No Data \n");
            else if (out == -2)
                printf("Not Connected \n");
            else
                printf("Disconnected the (%d (%d))--->(%d (%d))\n",g.graph_vertices[input_val],input_val,g.graph_vertices[input_val_2],input_val_2);
            break;
            
        case 7:
            printf("\nEnter the index of vertice : ");
            scanf("%d", &input_val);
            show_neighbours(&g,input_val);
            break;

        
            
        case 8:
            printf("\nEnter the index of vertice to be used as Source : ");
            scanf("%d", &input_val);
            bfs_traverse(&g,input_val);
            break;
            
        case 0:
            printf("exitting ...\n");
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }    

}