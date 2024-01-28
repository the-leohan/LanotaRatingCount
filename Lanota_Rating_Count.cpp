#include<iostream>
using namespace std;
int main(){
	float HC,TC,DI,TOL,RA,TEMP;
	HC,TC,DI,TOL,RA,TEMP=0;
	cout<<"欢迎使用Lanota单曲Rating计算器Ver1.00|By:TheLeoHan"<<endl;
	cout<<"-----------------------------------------"<<endl;
	while(1){
		cout<<"请依次输入Harmony判定数量、TuneCount判定数量、Note总数以及定级,退出程序请输入0"<<endl;
		cout<<"特别地，定级为x+ (x=13或14)的请输入x+1.5，15+请输入15.75，16请输入16【其余定级的曲目直接输入定级即可】"<<endl; 
		cin>>HC;
		if(!HC){
			return 0;
		}
		cin>>TC>>TOL>>DI;
		if(DI==16){
			DI+=1.5;
		}else{
			DI+=1;
		}
		TEMP=(HC+TC/3)*DI;
		RA=TEMP/TOL;
		cout<<"该曲目的单曲Rating="<<RA<<" (四舍五入)"<<endl; 
		cout<<"-----------------------------------------"<<endl;
	} 
		
	return 0;
} 
