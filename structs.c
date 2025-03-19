#include <stdio.h>
#include <string.h>

typedef struct{
    char name[12];
    int score;
}Player;

typedef struct{
    char username[25];
    char password[12];
    int id;
}User;

int main(){

    Player player1 = {"Madhav", 20};
    Player player2 = {"Pranav", 25};

    printf("Player 1: %s\n", player1.name);
    printf("Score: %d\n", player1.score);
    printf("Player 2: %s\n", player2.name);
    printf("Score: %d\n", player2.score);

    User user1 = {"Madhav", "abc123", 1234};
    User user2 = {"Pranav", "def456", 5678};

    printf("\nUsername: %s\n", user1.username);
    printf("Password: %s\n", user1.password);
    printf("ID: %d\n", user1.id);

    printf("\nUsername: %s\n", user2.username);
    printf("Password: %s\n", user2.password);
    printf("ID: %d\n", user2.id);

    return 0;
}