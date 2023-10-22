//In digital world colors are specified in RGB format with values of R, G, and B varying on integer scale from 0 to 255. 
//Colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK) format with values of C, M, Y and K varying on a real scale
// from 0.0 to 1.0. Convert RGB color to CMYK as per formula: 
//- White=Max(red/255,green/255,blue/255) 
//- Cyan=(white - red/255)/white 
//- Magenta=(white - green/255)/white 
//- Yellow=(white - blue/255)/white 
//- Black=1 - white 
//Note: if RGB values are all 0, then the CMY values are all 0 and the K value is 1.
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
		
	 }
 	return 0;
}
