# Working with file
There is a text file containing an arbitrary number of lines. The length of each line does not exceed 255 characters. It is necessary to perform the specified processing of the file. The file contains a numeric matrix. The first line of the file contains two numbers: the number of rows (N <= 20) and columns of the matrix (M<=5), and then the matrix itself. Calculate for each column the sum of its elements. The results of the calculations should be written to the end of the source file as a table of the following form: COLUMN AMOUNT


# To run on linux, use the command:
```bash
gcc lab11.c lab11_func.c -o program -lm
```
```bash
./program
```
