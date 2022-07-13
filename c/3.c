// #define SIZEOF(X) ({__typeof__(X) Y; ((char*)(&Y+1) - (char*)(&Y));})

/*	step 1:
	sizeof(2) ({__typeof__(2) Y;((char *)(&Y+1) - (char *)(&Y));})
	step 2:
	sizeof(2) ({ int Y;((char * )(1000+4) - (char *)(1000));})
	step 3:
	sizeof(2) ({int Y:((char *)(4));})
	step 4:
	sizeof(2) is 4 bytes
*/



#define SIZEOF(X) ({__typeof__(X) Y; ((char*)(&Y+1) - (char*)(&Y));})
int main()
{
	int x=2;
	SIZEOF(x);
}


