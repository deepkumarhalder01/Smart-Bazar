#include<iostream>
using namespace std;
void process ();
void bazar ()
{
	cout <<"\tProduct list :-\n";
	cout<<"\t----------------\n";
	cout<<"\t1. Rice @50 1 KG\n";
	cout<<"\t=====----=====\n";
	cout<<"\t2. Oli @192 1LT \n";
	cout<<"\t=====----=====\n";
	cout<<"\t3. Potato @22 1 KG\n";
	cout<<"\t=====----=====\n";
	cout<<"\t4. Onion @45 1 KG\n";
	cout<<"\t=====----=====\n";
	cout<<"\t5. Ata @38 1 KG\n";
	cout<<"\t=====----=====\n";
	cout<<"\t6. Chowmin @24 500 GRAM'S\n";
	cout<<"\t=====----=====\n";
	cout<<"\t7. Kisan sose @180 1 Kg\n";
	cout<<"\t=====----=====\n";
	cout<<"\t8. Water @20 1 LT\n";
	cout<<"\t=====----=====\n";
	cout<<"\t9. Bread @100 1 POUND\n";
	cout<<"\t=====----=====\n";
	cout<<"\t10. pasta @80 1 Kg\n";
	cout<<"\t=====----=====\n";
	cout<<"\tPlease choose option 1 to 10 \n";
	process();
}
void process ()
{
	static int total;
	int s,n,am,op;
	cin>>s;
	switch(s)
	{
		case 1:
			cout<<"Enter unit or Quntity"<<endl;
			cout<<">>>>>>>>**************<<<<<<<<"<<endl;
			cin>>n;
			cout<<"Enter Product ammount : ";
			cin>>am;
			total=total+(n*am);
			cout<<"Do you  buy other product: press 1 and 2 ";
			cin>>op;
			if(op==1)
			{
				bazar();
			}
			else
			{
				cout<<"Smart Bazar Bill"<<endl;
				cout<<"*******************"<<endl;
				cout<<"----------------"<<endl;
				cout<<"Total Bill => "<<total<<endl;
			}
			break;
		case 2:
			cout<<"Enter unit or Quntity"<<endl;
			cout<<">>>>>>>>**************<<<<<<<<"<<endl;
			cin>>n;
			cout<<"Enter Product ammount : ";
			cin>>am;
			total=total+(n*am);
			cout<<"Do you  buy other product: press 1 and 2 ";
			cin>>op;
			if(op==1){
				bazar();
			}
			else
			{
				cout<<"Smart Bazar Bill"<<endl;
				cout<<"*******************"<<endl;
				cout<<"----------------"<<endl;
				cout<<"Total Bill => "<<total<<endl;
			}
			break;
		case 3:
			cout<<"Enter unit or Quntity"<<endl;
			cout<<">>>>>>>>**************<<<<<<<<"<<endl;
			cin>>n;
			cout<<"Enter Product ammount : ";
			cin>>am;
			total=total+(n*am);
			cout<<"Do you  buy other product: press 1 and 2 ";
			cin>>op;
			if(op==1){
				bazar();
			}
			else
			{
				cout<<"Smart Bazar Bill"<<endl;
				cout<<"*******************"<<endl;
				cout<<"----------------"<<endl;
				cout<<"Total Bill => "<<total<<endl;
			}
			break;
		case 4:
			cout<<"Enter unit or Quntity"<<endl;
			cout<<">>>>>>>>**************<<<<<<<<"<<endl;
			cin>>n;
			cout<<"Enter Product ammount : ";
			cin>>am;
			total=total+(n*am);
			cout<<"Do you  buy other product: press 1 and 2 ";
			cin>>op;
			if(op==1){
				bazar();
			}
			else
			{
				cout<<"Smart Bazar Bill"<<endl;
				cout<<"*******************"<<endl;
				cout<<"----------------"<<endl;
				cout<<"Total Bill => "<<total<<endl;
			}
			break;
		case 5:
			cout<<"Enter unit or Quntity"<<endl;
			cout<<">>>>>>>>**************<<<<<<<<"<<endl;
			cin>>n;
			cout<<"Enter Product ammount : ";
			cin>>am;
			total=total+(n*am);
			cout<<"Do you  buy other product: press 1 and 2 ";
			cin>>op;
			if(op==1){
				bazar();
			}
			else
			{
				cout<<"Smart Bazar Bill"<<endl;
				cout<<"*******************"<<endl;
				cout<<"----------------"<<endl;
				cout<<"Total Bill => "<<total<<endl;
			}
			break;
		case 6:
			cout<<"Enter unit or Quntity"<<endl;
			cout<<">>>>>>>>**************<<<<<<<<"<<endl;
			cin>>n;
			cout<<"Enter Product ammount : ";
			cin>>am;
			total=total+(n*am);
			cout<<"Do you  buy other product: press 1 and 2 ";
			cin>>op;
			if(op==1){
				bazar();
			}
			else
			{
				cout<<"Smart Bazar Bill"<<endl;
				cout<<"*******************"<<endl;
				cout<<"----------------"<<endl;
				cout<<"Total Bill => "<<total<<endl;
			}
			break;	
		case 7:
			cout<<"Enter unit or Quntity "<<endl;
			cout<<">>>>>>>>**************<<<<<<<<"<<endl;
			cin>>n;
			cout<<"Enter Product ammount : ";
			cin>>am;
			total=total+(n*am);
			cout<<"Do you  buy other product: press 1 and 2 ";
			cin>>op;
			if(op==1){
				bazar();
			}
			else
			{
				cout<<"Smart Bazar Bill"<<endl;
				cout<<"*******************"<<endl;
				cout<<"----------------"<<endl;
				cout<<"Total Bill => "<<total<<endl;
			}
			break;
		case 8:
			cout<<"Enter unit or Quntity "<<endl;
			cout<<">>>>>>>>**************<<<<<<<<"<<endl;
			cin>>n;
			cout<<"Enter Product ammount : ";
			cin>>am;
			total=total+(n*am);
			cout<<"Do you  buy other product: press 1 and 2 ";
			cin>>op;
			if(op==1){
				bazar();
			}
			else
			{
				cout<<"Smart Bazar Bill"<<endl;
				cout<<"*******************"<<endl;
				cout<<"----------------"<<endl;
				cout<<"Total Bill => "<<total<<endl;
			}
			break;
		case 9:
			cout<<"Enter unit or Quntity "<<endl;
			cout<<">>>>>>>>**************<<<<<<<<"<<endl;
			cin>>n;
			cout<<"Enter Product ammount : ";
			cin>>am;
			total=total+(n*am);
			cout<<"Do you  buy other product: press 1 and 2 ";
			cin>>op;
			if(op==1){
				bazar();
			}
			else
			{
				cout<<"Smart Bazar Bill"<<endl;
				cout<<"*******************"<<endl;
				cout<<"----------------"<<endl;
				cout<<"Total Bill => "<<total<<endl;
			}
			break;
		case 10:
			cout<<"Enter unit or Quntity "<<endl;
			cout<<">>>>>>>>**************<<<<<<<<"<<endl;
			cin>>n;
			cout<<"Enter Product ammount";
			cin>>am;
			total=total+(n*am);
			cout<<"Do you  buy other product: press 1 and 2 ";
			cin>>op;
			if(op==1){
				bazar();
			}
			else
			{
				cout<<"Smart Bazar Bill"<<endl;
				cout<<"*******************"<<endl;
				cout<<"----------------"<<endl;
				cout<<"Total Bill => "<<total<<endl;
			}
			break;
		default:
			cout<<"Invalid Input Please secelect Right Option's 1 to 10";				
	}	
}
int main ()
{
	cout<<"*****--Welcome to my Smart Bazar--*****\n";
	cout <<"Shop Address :- Elgin Road "<<endl;
	cout<<"Shop Open time Morning 09 : 30 AM to Evening 08 : 30 PM "<<endl;
	cout<<"Shop Oner Contact Number :- 8617618320"<<endl;
	bazar();	
}

