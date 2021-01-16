# homework-1
Assigned 1/29/2021, due 2/6/2021 11:59 pm.
## Context
For this homework you will be creating three `Makefiles` for three folders. These folders are:
    
    LinkedListSingle
    LinkedListDouble
    FnPointers
    
There will be an appropriate `Makefile` for each folder. Each folder will have its own difficulty in creating a Makefile. `LinkedListSingle` will be the easiest as it is one file, `LinkedListDouble` will be the second easiest, and `FnPointers` will be the least easiest. 

For every Makefile in the three folders you need to follow the syntax:

    all: program1.o program2.o ... programN.o
        gcc program1.o program2.o ... programN.o -o executable_name
        
    program1.o: program1.c program_header_1A.h ... program_header_1Z.h
        gcc -c program1.c
        
    program2.o: program2.c program_header_2A.h ... program_header_2Z.h
        gcc -c program2.c
    .
    .
    .
    
    programN.o: programN.c program_headerNA.h ... program_header_NZ.h
        gcc -c programN.c
        
    clean:
        rm *.o
        rm executable_name
        
# YOU WILL NOT WRITE ANY C CODE IN THIS HOMEWORK!

## LinkedListSingle

You will create a Makefile to compile the files in the `LinkedListSingle` folder. The name of the executable must be `test_list`.

## LinkedListDouble

You will create a Makefile to compile the files in the `LinkedListDouble` folder. The name of the executable must be `run_list_run`.

## FnPointers

You will create a Makefile to compile the file in the `FnPointers` folder. The name of the executable must be `test_pointer`.

# Rubric

    Makefile for LinkedListSingle           - 20%
    Makefile for LinkedListDouble           - 25%
    Makefile for FnPointers                 - 30%
    Makefile syntax same as Context above   - 25%
    ---------------------------------------------
    Total                                   - 100%
