# Linux_Shell_in_C


As we all know, Linux Terminal is very powerful as Linux can be customized totally as per the user's need.
We Tried to create an application in C Language which will run in Windows OS.
Users who don't have Linux OS, but want to learn commands of Linux Terminal can use the application in their Windows OS.

They just need to run the application & execute the commands. The commands would work in the same way as they would in Linux. Users would get a feeling that they are working in Linux, but in reality the application would be running in Windows.

We have implemented commands mostly related to File Systems.
There are some commands like cat, cd which are used with many flags, we have also implemented some of the flags for those commands.

## Commands implemented are : 
```
  cd : change directory
      
  
  mkdir : make directory
          mkdir path/newDir
      
  rmdir : remove directory
          rmdir path/newDir
  
  ls  : lists all files & folders present in that directory
        ls C:/Users/Saurabh/Desktop
      
  pwd : print working directory
        pwd
      
  cat : It is used to create, view, concatenate, merge files 
        cat file1.txt file2.txt 
  
  cp : copy
       cp source.txt destination.txt
       
  mv : move
       mv source.txt destination.txt
  
  touch : creates files
          touch f1.txt f2.txt f3.txt ; 3 files are created in same directory
  
  rm : remove a file
       rm D:/myFile.txt
        
  clear : clears the terminal 
          clear
          
  echo : prints whatever is typed
         echo my name is saurabh
         
  help : help with a command 
         help ls; tells about ls
  
  exit : exit from the terminal.
         exit; closes the terminal
```
