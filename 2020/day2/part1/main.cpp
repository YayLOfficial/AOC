#include <bits/stdc++.h>

#define print(str) std::cout << str << std::endl;

int main(){
    FILE *file;

    file = fopen("../input.txt", "r");
    if(file == NULL){
        printf("Error with reading file");
        return 0;
    }

    int *count = (int*) calloc(2, sizeof(int)), *bounds = (int*) calloc(2, sizeof(int)), len = 0;
    char c, *token;

    while(fscanf(file, "%i-%i %c: %ms%*[^\n]", &bounds[0], &bounds[1], &c, &token) != EOF){
        len = strlen(token), count[0] = 0;

        for(int i = 0; i < len; i++){
            if(token[i] == c)
                count[0]++;
        }

        if(bounds[0] <= count[0] && count[0] <= bounds[1])
            count[1]++;
    }

    print(count[1]);
    
}