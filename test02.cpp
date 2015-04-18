#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
class sudoku
{
	public:
		int array[144];
		int b;
		void ReadIn(){int n;for(n=0;n<144;n++){cin>>array[n];}}
		void Solve(){
			b=0;
			bool where[144][9];
			int a,y,t;
			for(a=0;a<144;a++)
			{
				for(y=0;y<10;y++)
					where[a][y]=false;
			}
			for(a=0;a<144;a++){
				if(array[a]>0){

					for(t=0;t<12;t++){
						where[(a/12)*12+t][array[a]-1]=1;
					}
					for(t=0;t<12;t++){
						where[(a%12)+12*t][array[a]-1]=1;
					}
					for(t=0;t<3;t++){
						for(y=0;y<3;y++){
							where[((a/12)/3)*36+((a%12)/3)*3+t*12+y][array[a]-1]=1;
						}
					}
				}
			}
			y=check(array,where);
			cout<<y<<endl;
			if(y==1){	
				for(a=0;a<144;a++){

					cout<<array[a];
					if((a%12)<11)
						cout<<' ';
					if((a%12)==11)
						cout<<endl;
				}
			}
		}

		int check(int (&array)[144],bool (&where)[144][9]){

			int z,a,x,w,u,v,tmp[144];
			for(a=0;a<144;a++)
			{if(array[a]==0&&(where[a][0]+where[a][1]+where[a][2]+where[a][3]+where[a][4]+where[a][5]+where[a][6]+where[a][7]+where[a][8])==8){
																				  for(z=0;z<9;z++){
																					  if(where[a][z]==false){
																						  array[a]=z+1;
																						  for(x=0;x<12;x++){
																							  where[(a/12)*12+x][z]=1;
																						  }
																						  for(x=0;x<12;x++){
																							  where[(a%12)+12*x][z]=1;
																						  }
																						  for(x=0;x<3;x++){
																							  for(w=0;w<3;w++){
																								  where[((a/12)/3)*36+((a%12)/3)*3+x*12+w][z]=1;
																							  }
																						  }
																					  }
																				  }
																			  }
			}
			for(a=0;a<144;a++){
				if(array[a]==0&&(where[a][0]+where[a][1]+where[a][2]+where[a][3]+where[a][4]+where[a][5]+where[a][6]+where[a][7]+where[a][8])==8){
					check(array,where);
				}
			}
			for(a=0;a<144;a++){
				if(array[a]==0){
					for(z=0;z<9;z++){
						if(where[a][z]==false){
							return 2;
						}

					}
					return 0;
				}
			}
			if(checkans1(array)==1&&checkans2(array)==1&&checkans3(array)==1)return 1;
			else return 0;}

			int checkans1(int *array){
				int nine[9];
				int x,n,y,z;				
				for(x=0;x<12;x++)
				{
					for(n=0;n<9;n++){
						nine[n]=0;
					}
					for(y=0;y<12;y++){
						for(z=0;z<9;z++){
							if(array[12*x+y]==z+1)
								nine[z]= nine[z]+1;
						}
					}
					for(n=0;n<9;n++){
						if(nine[n]!=1)
							return 0;
					}
				}
				return 1	;}
			int checkans2(int *array){
				int nine[9];
				int x,n,y,z;				
				for(x=0;x<12;x++)
				{
					for(n=0;n<9;n++){
						nine[n]=0;
					}
					for(y=0;y<12;y++){
						for(z=0;z<9;z++){
							if(array[12*y+x]!=-1&&array[12*y+x]==z+1)
								nine[z]= nine[z]+1;
						}
					}
					for(n=0;n<9;n++){
						if(nine[n]!=1)
							return 0;
					}
				}
				return 1;	}
			int checkans3(int *array){
				int nine[9];
				int x,n,y,z,u,v,s;				
				for(x=0;x<4;x++)
				{
					for(v=0;v<4;v++){
						for(n=0;n<9;n++){
							nine[n]=0;
						}
						s=0;
						for(u=0;u<3;u++){
							for(y=0;y<3;y++){
								for(z=0;z<9;z++){

									if(array[x*36+v*3+12*u+y]!=-1&&array[x*36+v*3+12*u+y]==z+1)
										nine[z]= nine[z]+1;
									if(array[x*36+v*3]==-1){
										nine[z]=1;
										if(array[x*36+v*3+12*0+1]!=-1||array[x*36+v*3+12*0+2]!=-1||array[x*36+v*3+12*1+0]!=-1||array[x*36+v*3+12*1+1]!=-1||array[x*36+v*3+12*1+2]!=-1||array[x*36+v*3+12*2+0]!=-1||array[x*36+v*3+12*2+1]!=-1||array[x*36+v*3+12*2+2]!=-1)
											return 0;
									}
								}
							}
						}

						for(n=0;n<9;n++){
							if(nine[n]!=1)
								return 0;
						}
					}	

				}
				return 1;	}
};
int main() {
	sudoku	su;
	su.ReadIn();
	su.Solve();
	return 0;
}
