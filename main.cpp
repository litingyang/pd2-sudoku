#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

class sudoku
{

public:

void check(int (&arr)[144],int n,bool (&where)[144]){
//arr[132]=0;

int a,x,w,z,u,v;
if(n<3){
//cout<<'('<<arr[n]<<')';
for(x=1;x<10;x++){

/*
for(w=0;w<12;w++){
if(arr[((n)/12)*12+0]==x)
continue;
//if(arr[((n)/12)*12+0]!=x&&arr[((n)/12)*12+1]!=x&&arr[((n)/12)*12+2]!=x&&arr[((n)/12)*12+3]!=x&&arr[((n)/12)*12+4]!=x&&arr[((n)/12)*12+5]!=x&&arr[((n)/12)*12+6]!=x&&arr[((n)/12)*12+7]!=x&&arr[((n)/12)*12+8]!=x&&arr[((n)/12)*12+9]!=x&&arr[((n)/12)*12+10]!=x&&arr[((n)/12)*12+11]!=x&&arr[((n)/12)*12+12]!=x){
}
for(z=0;z<12;z++){
if(arr[z*12+(n)%12]==x)
continue;}
for(u=0;u<3;u++){
for(v=0;v<3;v++){
//if(arr[((n)/12)*12+w]!=x)
//if(arr[z*12+(n)%12]!=x)
if(arr[((n/12)/3)*36+((n%12)/3)+u*12+v]==x)
continue;
}
}
*/
arr[n]=x;
if(arr[0]==6){
for(a=0;a<3;a++)
{
cout<<arr[a];
}
cout<<endl;
}
//check(arr,n+1,where);
}
//cout<<arr[n];
}
return;
}

void GiveOuestion(){
srand((unsigned)time(NULL));
int a,b;
bool where[144]={false};
b=rand();
int arr[144]={0,0,0,8,7,3,9,5,1,-1,-1,-1,8,7,3,9,5,1,6,2,4,-1,-1,-1,9,5,1,6,2,4,8,7,3,-1,-1,-1,-1,-1,-1,1,3,2,4,8,7,9,5,6,-1,-1,-1,7,8,5,1,9,6,4,2,3,-1,-1,-1,4,9,6,2,3,5,8,7,1,1,3,7,2,4,8,-1,-1,-1,6,9,5,2,8,4,5,6,9,-1,-1,-1,1,3,7,6,9,5,3,1,7,-1,-1,-1,2,8,4,3,1,2,-1,-1,-1,7,4,8,5,6,9,7,4,8,-1,-1,-1,5,6,9,3,1,2,5,6,9,-1,-1,-1,3,1,2,7,4,8};

cout<<where[3]<<where[6]<<endl;
//check(arr,0,where);

for(a=0;a<144;a++)
{
cout<<arr[a]<<endl;

}
}
void ReadIn(int (&array)[144]){
int n;
//for(n=0;n<144;n++){
//cin>>array[n];
//}
}
void Solve(int (&array)[144]){
array[132]=0;
}
};






int main() {
sudoku	su;
int array[144];
//int array[144]={4,2,6,8,7,3,9,5,1,-1,-1,-1,8,7,3,9,5,1,6,2,4,-1,-1,-1,9,5,1,6,2,4,8,7,3,-1,-1,-1,-1,-1,-1,1,3,2,4,8,7,9,5,6,-1,-1,-1,7,8,5,1,9,6,4,2,3,-1,-1,-1,4,9,6,2,3,5,8,7,1,1,3,7,2,4,8,-1,-1,-1,6,9,5,2,8,4,5,6,9,-1,-1,-1,1,3,7,6,9,5,3,1,7,-1,-1,-1,2,8,4,3,1,2,-1,-1,-1,7,4,8,5,6,9,7,4,8,-1,-1,-1,5,6,9,3,1,2,5,6,9,-1,-1,-1,3,1,2,7,4,8};
int a;
su.GiveOuestion();
su.ReadIn(array);
//su.Solve(array);
//for(a=0;a<144;a++)
//{
///cout<<array[a]<<endl;

//}
return 0;
}
