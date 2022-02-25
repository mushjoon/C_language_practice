#include <stdio.h>

int main()
{
    /* 
    The fopen() function is the start of accessing files

    FILE *fopen(const char *restrict name, const char *restrict mode);

    The 1st arg = pointer to a string that is the name of the external file you wanna process

    The 2nd arg is a char string that represents the file mode: what you wanna do with the file

    If successful, it will return FILE pointer, if not, fopen() returns NULL
    "w": write
    "a": append
    "r": read

    "w+": open a text file for update, first truncating the file to zero length if it exists or creating the file if it doesn't exist
    "a+": open a text file for update, appending to the end of the existing file, or creating the file if not exist
    "r+": open a text file for update (for both reading and writing)
    */

    FILE *pfile = NULL;
    char *filename = "myfile.text";
    pfile = fopen(filename, "w"); // open myfile.txt to write it
    if (pfile == NULL)
    {
        printf("Failed to open %s.\n", filename);
    }
    
    //pfile = fopen(filename, "a"); // appending the file
    //pfile = fopen(filename, "r"); // reading the file

    // renaming the file
    int rename(const char *oldname, const char *newname); // returns 0 if success, returns nonzero if fails

    // rename example
    if (rename("C:\\temp\\myfile.txt", "C:\\temp\\myfile_copy.txt"))    
    {
        printf("Failed to rename file");
    }
    else
    {
        printf("File renamed successfully");
    }
    
    // when you are done with a file, you need to close it
    fclose(pfile);
    pfile = NULL;

    // you can also delete file by using remove() function

    remove("myfile.txt");

    return 0;
}