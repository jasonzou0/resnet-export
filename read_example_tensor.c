#include <stdio.h>


int main(void)
{
    int SIZE = 64*3*7*7;
    float tensor_floats[SIZE];
    
    FILE *fp = fopen("model_dump/resnet18/tensors/Tensor_Conv_193","rb");
    size_t ret_code = fread(tensor_floats, sizeof *tensor_floats, SIZE, fp); // reads an array of doubles
    
    if(ret_code == SIZE) {
        puts("Array read successfully, contents: ");
        for(int n = 0; n < SIZE; ++n)
	  printf("%f.8 ", tensor_floats[n]);
        putchar('\n');
    } else { // error handling
       if (feof(fp))
          printf("Error reading test.bin: unexpected end of file\n");
       else if (ferror(fp)) {
           perror("Error reading test.bin");
       }
    }
 
    fclose(fp);
}
