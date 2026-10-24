// Multi-Dimensional Arrays -> Q 07 : Create a Tic-Tac-Toe game using 2D arrays.
#include <iostream>
#include <string>

    class tictactoe{


    private:

    char board[3][3] = { {' ',' ',' '} , {' ',' ',' '} , {' ',' ',' '} };
    int choice = 0;
    int state = 0;
    int o_count = 0 , x_count = 0 ;
    bool turn_o = true ;

    public:


    void display(){

    char turn = 'O';
    if (turn_o == true){
        turn = 'O';
    }
    else {
        turn = 'X';
    }

        
    std::cout << "\n\n--------------------------------------------------------------\n\n\n";
    
    std::cout << "-------------------------------\n";
    std::cout << "|         |         |         |\n";
    std::cout << "|    "<<board[0][0]<<"    |    "<<board[0][1]<<"    |    "<<board[0][2]<< "    |\n";
    std::cout << "|        1|        2|        3|\n";
    std::cout << "-------------------------------\n";
    std::cout << "|         |         |         |" << "             O : " << o_count << "\n";
    std::cout << "|    "<<board[1][0]<<"    |    "<<board[1][1]<<"    |    "<< board[1][2]<< "    |"<<"             X : " << x_count << "\n";;
    std::cout << "|        4|        5|        6|"<<"             "<< turn << "'s Turn\n";
    std::cout << "-------------------------------\n";
    std::cout << "|         |         |         |\n";
    std::cout << "|    "<<board[2][0]<<"    |    "<<board[2][1]<<"    |    "<< board[2][2]<< "    |\n";
    std::cout << "|        7|        8|        9|\n";
    std::cout << "-------------------------------\n";
    
    std::cout << "\n\n--------------------------------------------------------------\n\n\n";
    
    };

    void enter(char player){

            do {
            std::cout << "\n-> Enter the Choice of Player "<<player<<" :";
            std::cin >> choice;

            if (std::cin.fail() || !(choice > 0 && choice <= 9)){
                std::cin.clear();
                std::cin.ignore(1000 , '\n');
                std::cout << "  -> Enter a Valid Position ! \n";
                continue;
            }

            break;

            }while(true);

        }

    int set_choice(int position , char player){

        switch (position){

            case 1:
            {
                board[0][0] = player;
                break;
            };

            case 2:
            {
                board[0][1] = player;
                break;
            };

            case 3:
            {
                board[0][2] = player;
                break;
            };

            case 4:
            {
                board[1][0] = player;
                break;
            };

            case 5:
            {
                board[1][1] = player;
                break;
            };

            case 6:
            {
                board[1][2] = player;
                break;
            };

            case 7:
            {
                board[2][0] = player;
                break;
            };

            case 8:
            {
                board[2][1] = player;
                break;
            };

            case 9:
            {
                board[2][2] = player;
                break;
            };

            default:
            return  0;

        }

        return 1;

    }
    

    bool check_available(int position){

    bool a = false;
    switch (position){

            case 1:
            {
                if (board[0][0] == ' ') 
                a = true;
                break;
            };

            case 2:
            {
                if (board[0][1] == ' ') 
                a = true;
                break;
            };

            case 3:
            {
                if (board[0][2] == ' ') 
                a = true;
                break;
            };

            case 4:
            {
                if (board[1][0] == ' ') 
                a = true;
                break;
            };

            case 5:
            {
                if (board[1][1] == ' ') 
                a = true;
                break;
            };

            case 6:
            {
                if (board[1][2] == ' ') 
                a = true;
                break;
            };

            case 7:
            {
                if (board[2][0] == ' ') 
                a = true;
                break;
            };

            case 8:
            {
                if (board[2][1] == ' ') 
                a = true;
                break;
            };

            case 9:
            {
                if (board[2][2] == ' ') 
                a = true;
                break;
            };
        }

        return a;

    }


    // 00  01  02
    // 10  11  12
    // 20  21  22

    char check_win(){
        // if (state < 5) {
        //     return 0;
        // }

        char a = ' ';
        int o = 0 , x = 0;
        for (int i = 0 ; i < 3 ; i ++){
            if (board[i][0] == ' '){
                continue;
            }

            for (int j = 0 ; j < 3 ; j ++){
                if (board[i][j] == ' '){
                    continue;
                }
                else if (board[i][j] == 'O'){
                    o ++;
                }
                else if (board[i][j] == 'X'){
                    x ++;
                }
            }

            if (o == 3){
                return 'O';
            }
            else if (x == 3){
                return 'X';
            }
            o = 0 , x = 0;
        }

        
        o = 0 , x = 0;
        
        
        for (int i = 0 ; i < 3 ; i ++){
            if (board[0][i] == ' '){
                continue;
            }
            for (int j = 0 ; j < 3 ; j ++){
                if (board[j][i] == ' '){
                    continue;
                }
                else if (board[j][i] == 'O'){
                    o ++;
                }
                else if (board[j][i] == 'X'){
                    x ++;
                }
            }
            if (o == 3){
                return 'O';
            }
            else if (x == 3){
                return 'X';
            }
            o = 0 , x = 0;
        }


        // o = 0 , x = 0;

        if ((board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O' ) || (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O' )){
            return 'O';
        }

        else if ((board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X' ) || (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X' ) ){
            return 'X';
        }

        return ' ';

    }

    int play(){

    char player = 'O' , win = ' ';
    
    
    do {

        if ((o_count + x_count) == 9 ){
            std::cout << "-> Game Draw ";
            return 1;
        }

        if (turn_o == true){
            player = 'O';
        }
        else {
            player = 'X';
        }
        
        // ________________

        if (state > 5){
            win = check_win();
            if (win == ' ');
            else {
                display();
                std::cout << "-> Player "<< win << " Won\n";
                break;
            }
        }
        
        // ________________

        display();

        // _______________

        do{

        enter(player); // -> choic set

        if (check_available(choice)){
            set_choice(choice,player);
            break;
        }
        else{
            std::cout<<"    -> Already Filled\n";
        }
        }while(true);

        // ___________

        if (turn_o == true){
            // player = 'O';
            o_count++;
        }
        else {
            // player = 'X';
            x_count++;
        }

        // ____________


        turn_o = !turn_o;
        state++;

    }while(true); 

    return 1;

    }




    };


    void play(){
    int choice;
    
    
    do {
        tictactoe a;
        std::cout<< "\n-> Menu : \n";
        std::cout<< "   -> 1 : Play \n";
        std::cout<< "   -> 0 : Exit \n\n";
        std::cout<< "-> Enter the Choice : ";
        std::cin >> choice;
        if (std::cin.fail()){
                    std::cin.clear();
                    std::cin.ignore(1000 , '\n');
                    std::cout << "  -> Enter a Valid Choice ! \n";
                    continue;
                }
        if (choice == 1){
            a.play();
        }
        else if (choice == 0){
            std::cout << "  -> Exiting \n";
            break;
        }
        else {
            std::cout << "  -> Enter a Valid Choice ! \n";
        }

    }while (true);
    }


int main(){

    play();
    
    return 0;
};