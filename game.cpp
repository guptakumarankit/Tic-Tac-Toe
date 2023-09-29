
// Tic Tac Toe Game...

#include<iostream>
#include<stdlib.h>
using namespace std;

char space[3][3] ={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row;
int column;
char token = 'X';
bool tie;
string n1;
string n2;
int count = 0;


void functionone(){

    // structure of tik tok....

    cout<<"   |    |   \n"; 
    cout<<" "<<space[0][0]<<" | "<<space[0][1]<<"  | "<<space[0][2]<<"  \n";
    cout<<"___|____|___\n";
    cout<<"   |    |   \n";
    cout<<" "<<space[1][0]<<" | "<<space[1][1]<<"  | "<<space[1][2]<<"  \n";
    cout<<"___|____|___\n";
    cout<<"   |    |   \n";
    cout<<" "<<space[2][0]<<" | "<<space[2][1]<<"  | "<<space[2][2]<<"  \n";
    cout<<"   |    |   \n";
}

void functionTwo(){
    int digit;
    
    if(token  == 'X' && count < 9){
        count++;
        cout<<n1<<" Please Enter:";
        cin>>digit;
    }

    if(token  == 'O' && count < 9){
        count++;
        cout<<n2<<" Please Enter:";
        cin>>digit;
    }

    if(digit == 1){
        row = 0;
        column = 0;
    }

    if(digit == 2){
        row = 0;
        column = 1;
    }

    if(digit == 3){
        row = 0;
        column = 2;
    }

    if(digit == 4){
        row = 1;
        column = 0;
    }

    if(digit == 5){
        row = 1;
        column = 1;
    }

    if(digit == 6){
        row = 1;
        column = 2;
    }
    
    if(digit == 7){
        row = 2;
        column = 0;
    }

    if(digit == 8){
        row = 2;
        column = 1;
    }
    
    if(digit == 9){
        row = 2;
        column = 2;
    }
    else if(digit < 1 || digit > 9 && count < 9){
        cout<<"Invalid !!!"<<endl;
    }

    if(token == 'X' && space[row][column] !='X' && space[row][column] !='O')
    {
        space[row][column] = 'X';
        token = 'O';
    }
    else if(token == 'O' && space[row][column] !='X' && space[row][column] !='O')
    {
        space[row][column] = 'O';
        token = 'X';
    }
    else{
            cout<<"There is not any space in this game:"<<endl;
            cout<<"Match is Draw"<<endl;
            exit(0); 
    }
}


bool functionThree(){

    // condition is player win is not ?

    for(int i=0;i<3;i++)
    {
        if(space[i][0] == space[i][1] && space[i][0] == space[i][2]  || space[0][i] == space[1][i] && space[0][i] == space[2][i])
        {   
            if(space[0][0] == space[0][1] && space[0][0] == space[0][2] )
            {          
                cout<<"   |    |   \n"; 
                cout<<"-"<<space[0][0]<<"-|-"<<space[0][1]<<"--|-"<<space[0][2]<<"--\n";
                cout<<"___|____|___\n";
                cout<<"   |    |   \n";
                cout<<" "<<space[1][0]<<" | "<<space[1][1]<<"  | "<<space[1][2]<<"  \n";
                cout<<"___|____|___\n";
                cout<<"   |    |   \n";
                cout<<" "<<space[2][0]<<" | "<<space[2][1]<<"  | "<<space[2][2]<<"  \n";
                cout<<"   |    |   \n";
            }

            if(space[1][0] == space[1][1] && space[1][1] == space[1][2])
            {       
                cout<<"   |    |   \n"; 
                cout<<" "<<space[0][0]<<" | "<<space[0][1]<<"  | "<<space[0][2]<<"  \n";
                cout<<"___|____|___\n";
                cout<<"   |    |   \n";
                cout<<"-"<<space[1][0]<<"-|-"<<space[1][1]<<"--|-"<<space[1][2]<<"--\n";
                cout<<"___|____|___\n";
                cout<<"   |    |   \n";
                cout<<" "<<space[2][0]<<" | "<<space[2][1]<<"  | "<<space[2][2]<<"  \n";
                cout<<"   |    |   \n";
            }

            if(space[2][0] == space[2][1] && space[2][2] == space[2][1])
            {
                cout<<"   |    |   \n"; 
                cout<<" "<<space[0][0]<<" | "<<space[0][1]<<"  | "<<space[0][2]<<"  \n";
                cout<<"___|____|___\n";
                cout<<"   |    |   \n";
                cout<<" "<<space[1][0]<<" | "<<space[1][1]<<"  | "<<space[1][2]<<"  \n";
                cout<<"___|____|___\n";
                cout<<"   |    |   \n";
                cout<<"-"<<space[2][0]<<"-|-"<<space[2][1]<<"--|-"<<space[2][2]<<"- \n";
                cout<<"   |    |   \n";    
            }

            if(space[0][0] == space[1][0] && space[2][0] == space[1][0])
            {
                cout<<" | |    |   \n"; 
                cout<<" "<<space[0][0]<<" | "<<space[0][1]<<"  | "<<space[0][2]<<"  \n";
                cout<<"_|_|____|___\n";
                cout<<" | |    |   \n";
                cout<<" "<<space[1][0]<<" | "<<space[1][1]<<"  | "<<space[1][2]<<"  \n";
                cout<<"_|_|____|___\n";
                cout<<" | |    |   \n";
                cout<<" "<<space[2][0]<<" | "<<space[2][1]<<"  | "<<space[2][2]<<"  \n";
                cout<<" | |    |   \n";        
            }

            if(space[0][1] == space[1][1] && space[2][1] == space[1][1])
            {
                cout<<"   | |  |   \n"; 
                cout<<" "<<space[0][0]<<" | "<<space[0][1]<<"  | "<<space[0][2]<<"  \n";
                cout<<"___|_|__|___\n";
                cout<<"   | |  |   \n";
                cout<<" "<<space[1][0]<<" | "<<space[1][1]<<"  | "<<space[1][2]<<"  \n";
                cout<<"___|_|__|___\n";
                cout<<"   | |  |   \n";
                cout<<" "<<space[2][0]<<" | "<<space[2][1]<<"  | "<<space[2][2]<<"  \n";
                cout<<"   | |  |   \n";
            }

            if(space[0][2] == space[1][2] && space[2][2] == space[1][2])
            {
                cout<<"   |    | | \n"; 
                cout<<" "<<space[0][0]<<" | "<<space[0][1]<<"  | "<<space[0][2]<<"  \n";
                cout<<"___|____|_|_\n";
                cout<<"   |    | | \n";
                cout<<" "<<space[1][0]<<" | "<<space[1][1]<<"  | "<<space[1][2]<<"  \n";
                cout<<"___|____|_|_\n";
                cout<<"   |    | | \n";
                cout<<" "<<space[2][0]<<" | "<<space[2][1]<<"  | "<<space[2][2]<<"  \n";
                cout<<"   |    | | \n";
            }
               return true;
        }
    }
    
    if(space[0][0] == space[1][1] && space[1][1] == space[2][2]  || space[0][2] == space[1][1] && space[1][1] == space[2][0])
    {
        if(space[0][0] == space[1][1] && space[1][1] == space[2][2])
        {       
            cout<<"\\  |    |   \n"; 
            cout<<" "<<space[0][0]<<" | "<<space[0][1]<<"  | "<<space[0][2]<<"  \n";
            cout<<"__\\|___|___\n";
            cout<<"   |\\   |   \n";
            cout<<" "<<space[1][0]<<" | "<<space[1][1]<<"  | "<<space[1][2]<<"  \n";
            cout<<"___|___\\|___\n";
            cout<<"   |    |\\   \n";
            cout<<" "<<space[2][0]<<" | "<<space[2][1]<<"  | "<<space[2][2]<<"  \n";
            cout<<"   |     |  \\\n";
        }

        if(space[0][2] == space[1][1] && space[1][1] == space[2][0])
        {
            cout<<"   |    |   /\n"; 
            cout<<" "<<space[0][0]<<" | "<<space[0][1]<<"  | "<<space[0][2]<<"  \n";
            cout<<"___|____|/__\n";
            cout<<"   |   /|   \n";
            cout<<" "<<space[1][0]<<" | "<<space[1][1]<<"  | "<<space[1][2]<<"  \n";
            cout<<"___|/___|___\n";
            cout<<"  /|    |   \n";
            cout<<" "<<space[2][0]<<" | "<<space[2][1]<<"  | "<<space[2][2]<<"  \n";
            cout<<"/  |    |   \n";
        }
        return true;
    }
 
    // condition is going on or not?

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++){
            if(space[i][j] != 'X' && space [i][j] != 'O')
            {
                return false;
            }
        }
    }
    // Game is Draw..
            tie = true;

    return false; 
}


int main()
{
    cout<<"Enter the name of the first player:"<<endl;
    getline(cin,n1);

    cout<<"Enter the name of the second player:"<<endl;
    getline(cin,n2);
    cout<<n1<<" is player1 so he/she will play first."<<endl;
    cout<<n2<<" is player2 so he/she will play second."<<endl;


    while(!functionThree())
    {
        functionone();
        functionTwo();
    }

    if(token == 'X' && tie == false)
    {
        cout<<n2<<" Wins!"<<endl;
    }
    else if(token == 'O' && tie == false)
    {
        cout<<n1<<" Wins!"<<endl;
    }
    else
    {
        cout<<"It is a Draw!"<<endl;
    }
}