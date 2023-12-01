// Create, open and close a file.
#include <stdio.h>
int main()
{
    FILE *file;
    
    file = fopen("file2.text", "w");
    
    if (file == NULL)
    {
        printf("Error opening the file");
    }
    
    printf("File created and open successfully");
    
    fclose(file);
    return 0;
}
