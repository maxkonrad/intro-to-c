#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SQSIDE 3

int my_random(void);
void game(int map[]);
void print_map(int map[]);
void print_map_val(int val, int i);
int check_valid(int map[], int move);
int check_win(int map[], int is_game_over);
void x_win(void);
void o_win(void);

int main(){
	int i = 1;
	int map[] = 
	{
		-1, -1, -1,
		-1, -1, -1,
		-1, -1, -1
	};
	while(i == 1){
		printf("1-New Game");
		printf("\n2-Exit");
		printf("\nSelect: ");
		scanf(" %d", &i);
		if(i == 2) return 0;
		game(map);
		
	}
}

int my_random(void){
	srand(time(NULL));
	int r = rand() % 9;
	return r;
}

void print_map(int map[]){
	int i, j, k = 0;
	for(i = 0; i < 5; i++){
		if(!(i % 2)){
			for(j = 0; j < 5; j++){
				if(j % 2) printf("|");
				else {
					print_map_val(map[k], k + 1);
					k++;
				}
			}
		}
		else{
			for(j = 0; j < 5; j++){
				printf("-");
			}
		}
		printf("\n");
	}
}

void print_map_val(int val, int i){
	if(val == -1) printf("%d", i);
	if(val == 0) printf("O");
	if(val == 1) printf("X");
}

void game(int map[]){
	int move, is_game_over = 0, comp_move;
	
	print_map(map);
	while (!is_game_over){
		printf("\nPlease enter your move (enter a number from 1 to 9): ");
		scanf(" %d", &move);
		if (move > 9 || move < 1) continue;
		if(!check_valid(map, move)){
			printf("\nThis box is full!\n");
			continue;
		}
		map[move - 1] = 1;
		print_map(map);
		comp_move = my_random();
		while (!(check_valid(map, comp_move + 1))){
			comp_move = my_random();
		}
		map[comp_move] = 0;
		printf("\nComputer made the move\n");
		print_map(map);
		
		is_game_over = check_win(map, is_game_over);
		
	}	
}

int check_valid(int map[], int move){
	return (map[move - 1] == -1);
}

int check_win(int map[], int is_game_over){
	if(map[0] == 1 && map[1] == 1 && map[2] == 1){
		x_win();
		is_game_over = 1;
	}
	if(map[3] == 1 && map[4] == 1 && map[5] == 1){
		x_win();
		is_game_over = 1;
	}
	if(map[6] == 1 && map[7] == 1 && map[8] == 1){
		x_win();
		is_game_over = 1;
	}
	if(map[0] == 1 && map[3] == 1 && map[6] == 1){
		x_win();
		is_game_over = 1;
	}
	if(map[1] == 1 && map[4] == 1 && map[7] == 1){
		x_win();
		is_game_over = 1;
	}
	if(map[2] == 1 && map[5] == 1 && map[8] == 1){
		x_win();
		is_game_over = 1;
	}
	if(map[0] == 1 && map[4] == 1 && map[8] == 1){
		x_win();
		is_game_over = 1;
	}
	if(map[2] == 1 && map[4] == 1 && map[6] == 1){
		x_win();
		is_game_over = 1;
	}
	
	
	if(map[0] == 0 && map[1] == 0 && map[2] == 0){
		o_win();
		is_game_over = 1;
	}
	if(map[3] == 0 && map[4] == 0 && map[5] == 0){
		o_win();
		is_game_over = 1;
	}
	if(map[6] == 0 && map[7] == 0 && map[8] == 0){
		o_win();
		is_game_over = 1;
	}
	if(map[0] == 0 && map[3] == 0 && map[6] == 0){
		o_win();
		is_game_over = 1;
	}
	if(map[1] == 0 && map[4] == 0 && map[7] == 0){
		o_win();
		is_game_over = 1;
	}
	if(map[2] == 0 && map[5] == 0 && map[8] == 0){
		o_win();
		is_game_over = 1;
	}
	if(map[0] == 0 && map[4] == 0 && map[8] == 0){
		o_win();
		is_game_over = 1;
	}
	if(map[2] == 0 && map[4] == 0 && map[6] == 0){
		o_win();
		is_game_over = 1;
	}
	return is_game_over;
}
void x_win(void){
	printf("\nYou won!\n");
}

void o_win(void){
	printf("\nYou lost!\n");
}


