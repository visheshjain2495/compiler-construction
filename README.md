This is my lab work for compiler construction lab.

To execute lex file, use the following commands in terminal:
1. `lex exp6.l` - This will generate a C file named `lex.yy.c`.
2. `gcc lex.yy.c -lfl -o exp6` - This will compile the generated C file and create an executable named `exp6`.
3. `./exp6` - This will run the executable, allowing you to input strings or digits to be identified by the lex program.