#include <stdio>

int main(){
    int fd = open("test.txt", O_RDONLY);
    char string[6];

    int read_count;

    while((read_count = read(fd, string, 5)) == 5){
        string[read_count] = 0;
        printf("%s", string);
    }

    if(read_count > 0){
        string[read_count] = 0;
        printf("%s", string);
    }

    close(fd);
}
