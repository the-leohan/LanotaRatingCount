#include<iostream>
using namespace std;
int main(){
	float HC,TC,DI,TOL,RA,TEMP;
	HC,TC,DI,TOL,RA,TEMP=0;
	cout<<"��ӭʹ��Lanota����Rating������Ver1.00|By:TheLeoHan"<<endl;
	cout<<"-----------------------------------------"<<endl;
	while(1){
		cout<<"����������Harmony�ж�������TuneCount�ж�������Note�����Լ�����,�˳�����������0"<<endl;
		cout<<"�ر�أ�����Ϊx+ (x=13��14)��������x+1.5��15+������15.75��16������16�����ඨ������Ŀֱ�����붨�����ɡ�"<<endl; 
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
		cout<<"����Ŀ�ĵ���Rating="<<RA<<" (��������)"<<endl; 
		cout<<"-----------------------------------------"<<endl;
	} 
		
	return 0;
} 
