#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<unistd.h>
#include<dirent.h>
#include"commands.c"
#include"help.c"

#define RL_BUFSIZE 1024 // Buffer Size for Read_Line
#define TOKEN_BUFSIZE 64 // Buffer Size for Parser
#define TOKEN_DELIM_STR " \n\t\r\a" //Creating a list of delimiters to pass to strtok().

char *read_line()
{
    int bufsize = RL_BUFSIZE; // creating a buffer
    int pos = 0;
    char *buffer = malloc(sizeof(char) * bufsize); // allocating space for buffer
    int c;


    if(!buffer)         // Used to check if memory is allocated successfully
        {perror("Error ");}

    while(1)
    {
        c = getchar(); // returns the character read as an unsigned char cast to an int or EOF on end of file

        // If we hit EOF replace it with null character and return.
        if(c == EOF || c == '\n')
        {
            buffer[pos] = '\0';
            return buffer;
        }
        else
        {
            buffer[pos] = c;
        }
        pos++;

        //If we exceed buffer limit, dynamically reallocate.
        if(pos >= bufsize)
        {
            bufsize += RL_BUFSIZE;
            buffer = realloc(buffer,bufsize);
            if(!buffer)
                {perror("Error : ");}
        }
    }
}

char **parse_line(char *line)
{
    int bufsize = TOKEN_BUFSIZE, pos = 0;
    char **tokens = (char**)malloc(sizeof(char *) * bufsize);
    char *token;
    if(!tokens)
        {perror("Error : ");}

    // strtok() is used to return pointers to the tokens in the string you give it and place '\0' at the end of each token
    token = strtok(line, TOKEN_DELIM_STR); // Begin tokenising. Returns a pointer to the first token.

    while(token != NULL )
    {
        // Reallocate memory if overflow occurs
        if(pos >= bufsize)
        {
            bufsize += TOKEN_BUFSIZE;
            tokens = realloc(tokens, bufsize * sizeof(char *));
            if(!tokens)
                {perror("Error : ");}
        }
        tokens[pos] = token;
        pos++;
        token = strtok(NULL, TOKEN_DELIM_STR);
    }
    tokens[pos] = NULL; // NUll terminate the list of tokens
    return tokens;
}

char *builtin_str[] = {
    "cd",
    "mkdir",
    "rmdir",
    "ls",
    "pwd",
    "cat",
    "cp",
    "mv",
    "touch",
    "rm",
    "clear",
    "echo",
    "help",
    "exit" 
};

int (*functions[]) (char **) = {
  &cd,
  &mkDir,
  &rmDir,
  &ls,
  &pwd,
  &cat,
  &cp,
  &mv,
  &touch,
  &rm,
  &clear,
  &echo,
  &help,
  &exit1
};


int num_builtins()
{

    return (sizeof(builtin_str)/sizeof(char**));
}

void setup()
{
    int i;
    printf("\n Simple Linux Shell\n");
    printf(" Type program names and arguments, and hit enter.\n");
    printf(" The following are built in:\n");

    for (i = 0; i < num_builtins(); i++)
    {
        printf("  %s\n", builtin_str[i]);
    }
    printf("\n\n");
}

void loop_shell()
{
    char *line ;
    char **args ;
    int status = 1, i;
    do
    {
        printf("> ");
        line = read_line();
        args = parse_line(line);
        //printf("----------->>>>> %s??%s?  ?",args[0],args[3]);
        Execute(args);
        printf("\n");

        free(line);
        free(args);
    }while(status);

}

void Execute(char**args)
{
    if( args[0]!=NULL)
        for (int i = 0; i < num_builtins(); i++)
            if (strcmp(args[0], builtin_str[i]) == 0)
                return (*functions[i])(args);


    /*
    if(strcmp(args[0],"exit")==0 || strcmp(args[0],"Exit")==0)
        exit(0);

    else if(strcmp(args[0],"mkdir")==0 )
        mkDir(args[1]);

    else if(strcmp(args[0],"rmdir")==0 )
        rmDir(args[1]);

    else if(strcmp(args[0],"cd")==0 )
        cd(args);

    else if(strcmp(args[0],"ls")==0 )
        ls(args);

    else if(strcmp(args[0],"pwd")==0 )
        pwd();

    else if(strcmp(args[0],"clear")==0)
        clear();

    else if(strcmp(args[0],"cat")==0 )
        cat(args[1]);

    else if(strcmp(args[0],"cp")==0 )
        cp(args[1],args[2]);

    else if(strcmp(args[0],"mv")==0)
        mv(args[1],args[2]);

    else if(strcmp(args[0],"touch")==0 )
        touch(args[1]);

    else if(strcmp(args[0],"rm")==0 )
        rm(args[1]);
    */

}

int main()
{
    system("cls");
    setup();
    loop_shell();
    return 0;
}
