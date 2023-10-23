### ***Title*** : LAB11
### ***Aim*** : Read a txt file and print in all capitals on screen with cmd line argument.
### ***Algorithm*** :

Check if the correct number of command line arguments is provided. There should be exactly 2 arguments: the program name and the name of the file to process.

Open the file specified in the command line argument for reading.

If the file cannot be opened, print an error message and exit the program.

Initialize a string variable to store each line of text read from the file.

Read the file line by line.

For each character in the line, convert it to uppercase using the toupper function from the C++ Standard Library.

Print the modified line with all characters in uppercase to the standard output.

Repeat steps 5-7 until all lines in the file have been processed.

Close the file.

Exit the program.

### ***Explanation*** :

The program begins by checking if the correct number of command line arguments is provided using argc (argument count). There should be exactly 2 arguments: the program name (implicit) and the name of the file to process.

If the correct number of arguments is provided, the program continues to open the file specified in the command line argument using an ifstream object.

If the file cannot be opened (e.g., if it doesn't exist), an error message is printed, and the program exits with an error code of 1.

A string variable named line is initialized to store each line of text read from the file.

The program enters a loop to read the file line by line using getline. Each line of text is read into the line variable.

Within the loop, the program iterates through each character in the line and converts it to uppercase using toupper. This ensures that all characters in the line are in uppercase.

The modified line, with all characters in uppercase, is printed to the standard output using cout.

Steps 5-7 are repeated until all lines in the file have been processed.

After all lines have been processed, the file is closed using the file.close() method.

Finally, the program exits with a return code of 0, indicating successful execution.

This C++ program reads the content of the specified text file, converts it to uppercase, and prints the uppercase text to the screen.

### ***Output Screenshot*** :

Code:

https://github.com/anikethmehta/LAB11/blob/main/code1.png

https://github.com/anikethmehta/LAB11/blob/main/code2.png

Output:

https://github.com/anikethmehta/LAB11/blob/main/textfile.png

https://github.com/anikethmehta/LAB11/blob/main/cmd%20output.png
