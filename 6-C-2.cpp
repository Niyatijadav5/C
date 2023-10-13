#include<stdio.h>
int main()
{
	float red,green,blue,white,cyan,magenta,yellow,black,max;
	 printf("Enter values of RGB(0-255):");
	 scanf("%f%f%f",&red,&green,&blue);
	 if(red==0&&green==0&&blue==0)
	 {
	 	cyan = magenta=yellow=0;
	 	black = 1;
	 }
	 else
	 {
	 	red = red/255;
	 	green=green/255;
	 	blue=blue/255;
	 	
	 	max=red;
	 	if(green>max)
	 	{
	 		printf("max=green");
		}
		if(blue>max)
		{
			printf("max=blue");
		}
		white=max;
		cyan=(white-red)/white;
		magenta=(white-green)/white;
		yellow=(white-blue)/white;
		black=1-white;
	}
	printf("CMYK=%f,%f,%f,%f,",cyan,magenta,yellow,black);
	return 0;
		
	 }
}
