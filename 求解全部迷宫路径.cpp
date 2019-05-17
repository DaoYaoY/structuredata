//递归求解迷宫出路问题

typedef struct
{
	int i;  //方块的行号 
	int j;   //方块的列号 
 } Box;
 
 typedef struct
 {
 	Box data[MAXSIZE];  //存放路径 
 	int length;  //迷宫路径的长度 
 }PathType;
 
 int count=0;
 
 void mgpath(int xi,int yi,int xe,int ye,PathType path)
 {
 	//求解迷宫路径为（xi,yi)--(xe,ye)
	 int di,k,i,j;
	 if(xi==xe && yi==ye)
	 {
	 	path.data[path.length].i=xi;
	 	path.data[path.length].j=yi;
	 	path.length++;
	 	printf("迷宫路径%d为下：\n",++count);
	 	for(k=0;k<path.length;k++)
	 	{
	 		printf("\t(%d,%d)",path.data[k].i,path.data[k].j);
	 		printf("\n");
		 }
	  }
	  else
	  {
	  	if(mg[xi][yi]==0)
	  	{
	  		di=0;
	  		while(di<4)
	  		{
	  			path.data[path.length].i=xi;
	  			path.data[path.length].j=yi;
	  			path.length++;
	  			switch(di)
	  			{
	  				case 0:i=xi-1;j=yi;break;
	  				case 0:i=xi;j=yi+1;break;
	  				case 0:i=xi+1;j=yi;break;
	  				case 0:i=xi;j=yi-1;break;
				  }
				  mg[xi][yi]=-1;
				  mapath(i,j,xe,ye,path);
				  ma[xi][yi]=0;
				  path.length--;
				  di++;
			  }
		  }
	   } 
 }
