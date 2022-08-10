void help(char**args)
{
    if(args[1]==NULL){
        printf("Error: no argument found");
        
    }

    if(strcmp(args[1],"cd")==0)
    {
        printf("\n  cd command is known as change directory command.\n");
        printf("  It is used to change current working directory.\n");
        printf("  Syntax : cd [directory_name]\n");
        printf("  eg - cd D:\\Movies");
        printf("\n");
    }
    else if(strcmp(args[1],"mkdir")==0)
    {
        printf("\n  mkdir command is known as make directory command.\n");
        printf("  It is used to create directories.\n" );
        printf("  mkdir [directories_name]");
        printf("  eg - mkdir CPrograms");
        printf("\n");
    }

    else if(strcmp(args[1],"rmdir")==0)
    {
        printf("\n  rmdir command is known as remove directory command.\n");
        printf("  It is used to remove EMPTY directories only.\n" );
        printf("  rmdir [directories_name]\n");
        printf("  eg - rmdir CPrograms");
        printf("\n");
    }

    else if(strcmp(args[1],"ls")==0)
    {
        printf("\n  ls command is known as list directory command.\n");
        printf("  It is used to list everything in a directory.\n" );
        printf("  ls [directories_name]\n");
        printf("  eg - ls D:\\Movies");
        printf("\n");
    }

    else if(strcmp(args[1],"pwd")==0)
    {
        printf("\n  pwd command is known as print current working directory.\n");
        printf("  It is used to print current working directory.\n" );
        printf("  pwd \n");
        printf("  eg - pwd");
        printf("\n");
    }

    else if(strcmp(args[1],"cat")==0)
    {
        printf("\n  cat command is known as concatenate.\n");
        printf("   It is used to create, view, concatenate, merge files\n" );
        printf("  cat [File_name] \n");
        printf("  eg - cat Details.txt Info.txt ");
        printf("\n");
    }

    else if(strcmp(args[1],"cp")==0)
    {
        printf("\n  cp command is known as copy.\n");
        printf("   It is used to copy contents of a file to another.\n" );
        printf("  cp [source_file] [destination_file] \n");
        printf("  eg - cp f1.txt f2.txt ");
        printf("\n");
    }

    else if(strcmp(args[1],"mv")==0)
    {
        printf("\n  mv command is known as move.\n");
        printf("  It is used to move a file.\n" );
        printf("  mv [source_file] [destination_file] \n");
        printf("  eg - mv C:\\f1.txt D:\\f2.txt ");
        printf("\n");
    }

    else if(strcmp(args[1],"touch")==0)
    {
        printf("\n  touch command is known as touch a file.\n");
        printf("  It is used to create a empty file.\n" );
        printf("  touch [f1] [f2] [f3]\n");
        printf("  eg - touch f1.c f2.c f3.txt ");
        printf("\n");
    }


    else if(strcmp(args[1],"rm")==0)
    {
        printf("\n remove command is known as remove a file.\n");
        printf("  It is used to remove a file not a folder.\n" );
        printf("  rm [f1] [f2] [f3]\n");
        printf("  eg - rm f1.c f2.c f3.txt ");
        printf("\n");
    }

    else if(strcmp(args[1],"grep")==0)
    {
        printf("\n grep command is known as Global Regular Expression Print.\n");
        printf("  It is used to search for a string of characters in a specified file, it prints the line with the result.\n" );
        printf("  grep [flag] \"string\" [file_name]\n");
        printf("  eg - grep unix linux.txt ");
        printf("\n");


    }

    else if(strcmp(args[1],"echo")==0)
    {
        printf("\n echo command is known as echo.\n");
        printf("  echo command is used to display line of text/string that are passed as an argument.\n" );
        printf("  echo [string]\n");
        printf("  eg - echo Linux Toolbox in C ");
        printf("\n");
    }

    else if(strcmp(args[1],"help")==0)
    {
        printf("\n help command is known as help a command.\n");
        printf("  help command is used to display details about a command passed as arguments.\n" );
        printf("  help [command]\n");
        printf("  eg - help ls ");
        printf("\n");
    }

    else if(strcmp(args[1],"clear")==0)
    {
        printf("\n clear command is known as clear terminal.\n");
        printf("  clear command is used to clear the terminal/bash for good presentation.\n" );
       // printf("  clear \n");
        printf("  eg - clear");
        printf("\n");
    }

    else if(strcmp(args[1],"exit")==0)
    {
        printf("\n exit command is known as exit the terminal.\n");
        printf("  exit command is used to close the terminal/bash .\n" );
       // printf("  exit \n");
        printf("  eg - exit");
        printf("\n");
    }


}
