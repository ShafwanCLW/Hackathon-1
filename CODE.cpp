/* This program will suggest the user 3 best phone phone based on specification set by the user and find additional accecory that user can afford based on budget balance.
Program: Phone Suggestor
Develepor: Hariz, Shafwan, Rahimi
Contact: norahimisahal3@student.usm.my
		 syahirulshafwan@student.usm.my
		 muhammadhariznaim@student.usm.my
 */
 //header
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()//beginning of function
{
	ifstream inFile;
	inFile.open("input 2.txt");//opening file
	
	//variable declaration
	string model, make, processor, procSpeedname; 
	int price, ROM, RAM, MCAM, FCAM, battery, priceInput,balance, minprice;
	float procSpeed;
	char spec1, spec2, spec3, spec4, spec5, spec6,
		q1, q2, q3, q4, q5, q6,
		choice;
		
	string Q="Based on SELECTION MENU, what specification that's important to you? ", OtherQ="Do you have other specification to choose? (Y) for yes | (N) for no: ";
	
	cout<<"\t\t\t############################################################################"<<endl;
	cout<<"\t\t\t                           BEST PHONE SUGGESTOR                             "<<endl;
	cout<<"\t\t\t############################################################################"<<endl;
	cout<<"*********************************************************************************************************************"<<endl;
	cout<<"SELECTION MENU:\n(1) Processor Speed\n(2) ROM\n(3) RAM\n(4) Main Camera\n(5) Front Camera\n(6) Battery"<<endl;
	cout<<"*********************************************************************************************************************"<<endl<<endl;
	cout<<"What is your budget?		BUDGET: ";
	cin>>priceInput;

	cout <<"\n"<< Q;//User choose specification
	cin >> spec1;
	 
	cout << OtherQ;//User choose to continue/not 
	cin >> q1;
	
	//Question 
	if(q1=='y'||q1=='Y')
	 {
	 	
		cout << Q;
	 	cin >> spec2;
	 	cout << OtherQ;
	 	cin >> q2;
	 	
	 	if(q2=='y'||q2=='Y')
	 	{
	 		cout << Q;
	 		cin >> spec3;
	 		cout << OtherQ;
	 		cin >> q3;
	 		
	 		if(q3=='y'||q3=='Y')
	 		{
	 			cout << Q;
	 			cin >> spec4;
	 			cout << OtherQ;
	 			cin >> q4;
	 			
	 			if(q4=='y'||q4=='Y')
	 			{
	 				cout << Q;
	 				cin >> spec5;
	 				cout << OtherQ;
	 				cin >> q5;
	 				
	 				if(q5=='y'||q5=='Y')
	 				{
	 					cout << Q;
	 					cin >> spec6;
	 					
	 			
	 			}
	 		}
	 	}
	 }
}
	 		


	//Declaring to find top 3
	string maxROMmodel, maxROM2model, maxROM3model, 
		   maxbattmodel, maxbatt2model, maxbatt3model,
		   maxSPEEDmodel, maxSPEED2model, maxSPEED3model,
		   maxRAMmodel, maxRAM2model, maxRAM3model,
		   maxMCAMmodel, maxMCAM2model, maxMCAM3model,
		   maxFCAMmodel, maxFCAM2model, maxFCAM3model,
		   maxSPEEDname, maxSPEED2name, maxSPEED3name;
		   
	   
	int maxROM=0, maxROM2=0, maxROM3=0, 
		maxbatt=0, maxbatt2=0, maxbatt3=0,
		maxRAM=0, maxRAM2=0, maxRAM3=0,
		maxMCAM=0, maxMCAM2=0, maxMCAM3=0,
		maxFCAM=0, maxFCAM2=0, maxFCAM3=0,
		maxSPEEDprice, maxSPEED2price, maxSPEED3price,
		maxROMprice, maxROM2price, maxROM3price,
		maxRAMprice, maxRAM2price, maxRAM3price,
		maxMCAMprice, maxMCAM2price, maxMCAM3price,
		maxFCAMprice, maxFCAM2price, maxFCAM3price,
		maxbattprice, maxbatt2price, maxbatt3price;
		 
	float maxSPEED=0, maxSPEED2=0, maxSPEED3=0;
	
	//read from note
	while(!inFile.eof()){

		//object on file
		getline(inFile, model, '\t');
		inFile>>make;
		inFile>>price;
		inFile>>processor;
		inFile>>procSpeed;
		getline(inFile, procSpeedname, '\t');
		inFile>>ROM;
		inFile>>RAM;
		inFile>>MCAM;
		inFile>>FCAM;
		inFile>>battery;
		inFile.ignore();

	//phone based on budget
	if(price<=priceInput){
			//if specification is processor speed
			if(spec1=='1' || spec2=='1' || spec3=='1' || spec4=='1' || spec5=='1' || spec6=='1'){
				if(procSpeed>=maxSPEED3){
					if(procSpeed>=maxSPEED2){
						if(procSpeed>=maxSPEED){
							maxSPEED3name=maxSPEED2name;
							maxSPEED3price=maxSPEED2price;
							maxSPEED3model=maxSPEED2model;
							maxSPEED3=maxSPEED2;

							maxSPEED2name=maxSPEEDname;
							maxSPEED2price=maxSPEEDprice;
							maxSPEED2model=maxSPEEDmodel;
							maxSPEED2=maxSPEED;
							
							maxSPEEDname=procSpeedname;
							maxSPEEDprice=price;
							maxSPEEDmodel=model;
							maxSPEED=procSpeed;
						}
						else{
							maxSPEED3name=maxSPEED2name;
							maxSPEED3price=maxSPEED2price;
							maxSPEED3model=maxSPEED2model;
							maxSPEED3=maxSPEED2;
							
							maxSPEED2name=procSpeedname;
							maxSPEED2price=price;
							maxSPEED2model=model;
							maxSPEED2=procSpeed;	
						}
					}
						else{
							maxSPEED3name=procSpeedname;
							maxSPEED3price=price;
							maxSPEED3model=model;
							maxSPEED3=procSpeed;
						
							
						}
				}
				
					
			
			}
			
			// Specification for ROM
			if(spec1=='2' || spec2=='2' || spec3=='2' || spec4=='2' || spec5=='2' || spec6=='2'){
				if(ROM>=maxROM3){
					if(ROM>=maxROM2){
						if(ROM>=maxROM){
							maxROM3price=maxROM;
							maxROM3model=maxROM2model;
							maxROM3=maxROM2;
							
							maxROM2price=maxROMprice;
							maxROM2model=maxROMmodel;
							maxROM2=maxROM;
							
							maxROMprice=price;
							maxROMmodel=model;
							maxROM=ROM;
						}
						else{
							maxROM3price=maxROM2price;
							maxROM3model=maxROM2model;
							maxROM3=maxROM2;
							
							maxROM2price=price;
							maxROM2model=model;
							maxROM2=ROM;	
						}
					}
						else{
							maxROM3price=price;
							maxROM3model=model;
							maxROM3=ROM;
						
							
						}
				}	
				
			}
			//Specification for RAM
			if(spec1=='3' || spec2=='3' || spec3=='3' || spec4=='3' || spec5=='3' || spec6=='3'){
				if(RAM>=maxRAM3){
					if(RAM>=maxRAM2){
						if(RAM>=maxRAM){
							maxRAM3price=maxRAM2price;
							maxRAM3model=maxRAM2model;
							maxRAM3=maxRAM2;
							
							maxRAM2price=maxRAMprice;
							maxRAM2model=maxRAMmodel;
							maxRAM2=maxRAM;
							
							maxRAMprice=price;
							maxRAMmodel=model;
							maxRAM=RAM;
						}
						else{
							maxRAM3price=maxRAM2price;
							maxRAM3model=maxRAM2model;
							maxRAM3=maxRAM2;
							
							maxRAM2price=price;
							maxRAM2model=model;
							maxRAM2=RAM;	
						}
					}
						else{
							maxRAM3price=price;
							maxRAM3model=model;
							maxRAM3=RAM;
						
							
						}
				}	
				
			}	
			
			//Specification for Main Camera
			if(spec1=='4' || spec2=='4' || spec3=='4' || spec4=='4' || spec5=='4' || spec6=='4'){
				if(MCAM>=maxMCAM3){
					if(MCAM>=maxMCAM2){
						if(MCAM>=maxMCAM){
							maxMCAM3price=maxMCAM2price;
							maxMCAM3model=maxMCAM2model;
							maxMCAM3=maxMCAM2;
							
							maxMCAM2price=maxMCAMprice;
							maxMCAM2model=maxMCAMmodel;
							maxMCAM2=maxMCAM;
							
							maxMCAMprice=price;
							maxMCAMmodel=model;
							maxMCAM=MCAM;
						}
						else{
							maxMCAM3price=maxMCAM2price;
							maxMCAM3model=maxMCAM2model;
							maxMCAM3=maxMCAM2;
							
							maxMCAM2price=price;
							maxMCAM2model=model;
							maxMCAM2=MCAM;	
						}
					}
						else{
							maxMCAM3price=price;
							maxMCAM3model=model;
							maxMCAM3=MCAM;
						
							
						}
				}	
				
			}	
			//Specification for Front Camera
			if(spec1=='5' || spec2=='5' || spec3=='5' || spec4=='5' || spec5=='5' || spec6=='5'){
				if(FCAM>=maxFCAM3){
					if(FCAM>=maxFCAM2){
						if(FCAM>=maxFCAM){
							maxFCAM3price=maxFCAM2price;
							maxFCAM3model=maxFCAM2model;
							maxFCAM3=maxFCAM2;
							
							maxFCAM2price=maxFCAMprice;
							maxFCAM2model=maxFCAMmodel;
							maxFCAM2=maxFCAM;
							
							maxFCAMprice=price;
							maxFCAMmodel=model;
							maxFCAM=FCAM;
						}
						else{
							maxFCAM3price=maxFCAM2price;
							maxFCAM3model=maxFCAM2model;
							maxFCAM3=maxFCAM2;
							
							maxFCAM2price=price;
							maxFCAM2model=model;
							maxFCAM2=FCAM;	
						}
					}
						else{
							maxFCAM3price=price;
							maxFCAM3model=model;
							maxFCAM3=FCAM;
						
							
						}
				}	
				
			}	
			//Specification for Battery
			if(spec1=='6' || spec2=='6' || spec3=='6' || spec4=='6' || spec5=='6' || spec6=='6'){
				if(battery>=maxbatt3){
					if(battery>=maxbatt2){
						if(battery>=maxbatt){
							maxbatt3price=maxbatt2price;
							maxbatt3model=maxbatt2model;
							maxbatt3=maxbatt2;
							
							maxbatt2price=maxbattprice;
							maxbatt2model=maxbattmodel;
							maxbatt2=maxbatt;
							
							maxbattprice=price;
							maxbattmodel=model;
							maxbatt=battery;
						}
						else{
							maxbatt3price=maxbatt2price;
							maxbatt3model=maxbatt2model;
							maxbatt3=maxbatt2;
							
							maxbatt2price=price;
							maxbatt2model=model;
							maxbatt2=battery;	
						}
					}
						else{
							maxbatt3price=price;
							maxbatt3model=model;
							maxbatt3=battery;
						
							
						}
				}	
				
			}

	}

}
			//If user chose Processor Speed
			if(spec1=='1' || spec2=='1' || spec3=='1' || spec4=='1' || spec5=='1' || spec6=='1'){
				cout<<"\nTOP PROCESSOR SPEED: "<<endl
					<<"(A) MODEL: "<<maxSPEEDmodel<<"\t|PROCESSOR SPEED: "<<maxSPEED<<maxSPEEDname<<"\t|PRICE: RM"<<maxSPEEDprice<<endl
					<<"(B) MODEL: "<<maxSPEED2model<<"\t|PROCESSOR SPEED: "<<maxSPEED2<<maxSPEED2name<<"\t|PRICE: RM"<<maxSPEED2price<<endl
					<<"(C) MODEL: "<<maxSPEED3model<<"\t|PROCESSOR SPEED: "<<maxSPEED3<<maxSPEED3name<<"\t|PRICE: RM"<<maxSPEED3price<<endl;
			}
			//If user chose ROM
			if(spec1=='2' || spec2=='2' || spec3=='2' || spec4=='2' || spec5=='2' || spec6=='2'){
				cout<<"\nTOP ROM:"<<endl
					<<"(D) MODEL: "<<maxROMmodel<<"\t|ROM: "<<maxROM<<"\t|PRICE: RM"<<maxROMprice<<endl
					<<"(E) MODEL: "<<maxROM2model<<"\t|ROM "<<maxROM2<<"\t|PRICE: RM"<<maxROM2price<<endl
					<<"(F) MODEL: "<<maxROM3model<<"\t|ROM "<<maxROM3<<"\t|PRICE: RM"<<maxROM3price<<endl;
			}
			//If user chose RAM
			if(spec1=='3' || spec2=='3' || spec3=='3' || spec4=='3' || spec5=='3' || spec6=='3'){
			 	cout<<"\nTOP RAM:"<<endl
				 	<<"(G) MODEL: "<<maxRAMmodel<<"\t|RAM: "<<maxRAM<<"\t|PRICE: RM"<<maxRAMprice<<endl
					<<"(H) MODEL: "<<maxRAM2model<<"\t|RAM: "<<maxRAM2<<"\t|PRICE: RM"<<maxRAM2price<<endl
					<<"(I) MODEL: "<<maxRAM3model<<"\t|RAM: "<<maxRAM3<<"\t|PRICE: RM"<<maxRAM3price<<endl;
			}
			//If user chose Main Camera
			if(spec1=='4' || spec2=='4' || spec3=='4' || spec4=='4' || spec5=='4' || spec6=='4'){
			 	cout<<"\nTOP MAIN CAM:"<<endl
				 	<<"(J) MODEL: "<<maxMCAMmodel<<"\t|MAIN CAMERA: "<<maxMCAM<<"\t|PRICE: RM"<<maxMCAMprice<<endl
				 	<<"(K) MODEL: "<<maxMCAM2model<<"\t|MAIN CAMERA: "<<maxMCAM2<<"\t|PRICE: RM"<<maxMCAM2price<<endl
				 	<<"(L) MODEL: "<<maxMCAM3model<<"\t|MAIN CAMERA: "<<maxMCAM3<<"\t|PRICE: RM"<<maxMCAM3price<<endl;
			}
			//If user chose Front Camera
			if(spec1=='5' || spec2=='5' || spec3=='5' || spec4=='5' || spec5=='5' || spec6=='5'){
			 	cout<<"\nTOP FRONT CAM:"<<endl
				 	<<"(M) MODEL: "<<maxFCAMmodel<<"\t|FRONT CAMERA: "<<maxFCAM<<"\t|PRICE: RM"<<maxFCAMprice<<endl
				 	<<"(N) MODEL: "<<maxFCAM2model<<"\t|FRONT CAMERA: "<<maxFCAM2<<"\t|PRICE: RM"<<maxFCAM2price<<endl
				 	<<"(O) MODEL: "<<maxFCAM3model<<"\t|FRONT CAMERA: "<<maxFCAM3<<"\t|PRICE: RM"<<maxFCAM3price<<endl;
			}
			//If user chose Battery Capacity
			if(spec1=='6' || spec2=='6' || spec3=='6' || spec4=='6' || spec5=='6' || spec6=='6'){
				cout<<"\nTOP BATTERY CAP:"<<endl
					<<"(P) MODEL: "<<maxbattmodel<<"\t|BATTERY CAPACITY: "<<maxbatt<<"\t|PRICE: RM"<<maxbattprice<<endl
					<<"(Q) MODEL: "<<maxbatt2model<<"\t|BATTERY CAPACITY: "<<maxbatt2<<"\t|PRICE: RM"<<maxbatt2price<<endl
					<<"(R) MODEL: "<<maxbatt3model<<"\t|BATTERY CAPACITY: "<<maxbatt3<<"\t|PRICE: RM"<<maxbatt3price<<endl;
			}
			
			cout<<"\nChoice of your phone? ";
			cin>>choice;//user choose one model
			
			if(choice=='A' || choice=='a'){
				cout<<"This is your choice of phone : "<<maxSPEEDmodel<<endl
					<<"The Price is: RM"<<maxSPEEDprice<<endl;
				balance=priceInput-maxSPEEDprice;
			}
			if(choice=='B' || choice=='b'){
				cout<<"This is your choice of phone : "<<maxSPEED2model<<endl
					<<"The Price is: RM"<<maxSPEED2price<<endl;
				balance=priceInput-maxSPEED2price;
			}
			if(choice=='C' || choice=='c'){
				cout<<"This is your choice of phone : "<<maxSPEED3model<<endl
					<<"The Price is: RM"<<maxSPEED3price<<endl;
				balance=priceInput-maxSPEED3price;
			}
			if(choice=='D' || choice=='d'){
				cout<<"This is your choice of phone : "<<maxROMmodel<<endl
					<<"The Price is: RM"<<maxROMprice<<endl;
				balance=priceInput-maxROMprice;
			}
			if(choice=='E' || choice=='e'){
				cout<<"This is your choice of phone : "<<maxROM2model<<endl
					<<"The Price is: RM"<<maxROM2price<<endl;
				balance=priceInput-maxROM2price;
			}
			if(choice=='F' || choice=='f'){
				cout<<"This is your choice of phone : "<<maxROM3model<<endl
					<<"The Price is: RM"<<maxROM3price<<endl;
				balance=priceInput-maxROM3price;
			}
			if(choice=='G' || choice=='g'){
				cout<<"This is your choice of phone : "<<maxRAMmodel<<endl
					<<"The Price is: RM"<<maxRAMprice<<endl;
				balance=priceInput-maxRAMprice;
			}
			if(choice=='H' || choice=='h'){
				cout<<"This is your choice of phone : "<<maxRAM2model<<endl
					<<"The Price is: RM"<<maxRAM2price<<endl;
				balance=priceInput-maxRAM2price;
			}
			if(choice=='I' || choice=='i'){
				cout<<"This is your choice of phone : "<<maxRAM3model<<endl
					<<"The Price is: RM"<<maxRAM3price<<endl;
				balance=priceInput-maxRAM3price;
			}
			if(choice=='J' || choice=='j'){
				cout<<"This is your choice of phone : "<<maxMCAMmodel<<endl
					<<"The Price is: RM"<<maxMCAMprice<<endl;
				balance=priceInput-maxMCAMprice;
			}
			if(choice=='K' || choice=='k'){
				cout<<"This is your choice of phone : "<<maxMCAM2model<<endl
					<<"The Price is: RM"<<maxMCAM2price<<endl;
			balance=priceInput-maxMCAM2price;
			}
			if(choice=='L' || choice=='l'){
				cout<<"This is your choice of phone : "<<maxMCAM3model<<endl
					<<"The Price is: RM"<<maxMCAM3price<<endl;
				balance=priceInput-maxMCAM3price;
			}
			if(choice=='M' || choice=='m'){
				cout<<"This is your choice of phone : "<<maxFCAMmodel<<endl
					<<"The Price is: RM"<<maxFCAMprice<<endl;
				balance=priceInput-maxFCAMprice;
			}
			if(choice=='N' || choice=='n'){
				cout<<"This is your choice of phone : "<<maxFCAM2model<<endl
					<<"The Price is: RM"<<maxFCAM2price<<endl;
				balance=priceInput-maxFCAM2price;
			}
			
			if(choice=='O' || choice=='o'){
				cout<<"This is your choice of phone : "<<maxFCAM3model<<endl
					<<"The Price is: RM"<<maxFCAM3price;
				balance=priceInput-maxFCAM3price;
			}
			
			if(choice=='P' || choice=='p'){
				cout<<"This is your choice of phone : "<<maxbattmodel<<endl
					<<"The Price is: RM"<<maxbattprice<<endl;
				balance=priceInput-maxbattprice;
			}
			
			if(choice=='Q' || choice=='q'){
				cout<<"This is your choice of phone : "<<maxbatt2model<<endl
					<<"The Price is: RM"<<maxbatt2price<<endl;
				balance=priceInput-maxbatt2price;
			}
			if(choice=='R' || choice=='r'){
				cout<<"This is your choice of phone : "<<maxbatt3model<<endl
					<<"The Price is: RM"<<maxbatt3price<<endl;
				balance=priceInput-maxbatt3price;
			
			}
			cout<<"__________________________________________________________________________"<<endl<<endl;
			cout<<"Your Balance From Your Budget is : RM"<<balance<<endl;			
			cout<<"Here are the list of accesories that you can buy based on your balance :"<<endl<<endl;
				 
			if(balance>=1500){
				cout<<"1.Wireless Headphone	(RM 1500)"<<endl
					<<"2.Wireless Earphone (RM1000)"<<endl
					<<"3.Powerbank (RM500)"<<endl
					<<"4.Charger (RM200)"<<endl
					<<"5.Phone Cover (RM100)"<<endl
					<<"6.Screen Protector (RM30)"<<endl;
			}
			else if(balance>=1000){
				cout<<"1.Wireless Earphone (RM1000)"<<endl
					<<"2.Powerbank (RM500)"<<endl
					<<"3.Charger (RM200)"<<endl
					<<"4.Phone Cover (RM100)"<<endl
					<<"5.Screen Protector (RM30)"<<endl;
			}
			else if(balance>=500){
				cout<<"1.Powerbank (RM500)"<<endl
					<<"2.Charger (RM200)"<<endl
					<<"3.Phone Cover (RM100)"<<endl
					<<"4.Screen Protector (RM30)"<<endl;
			}
			else if(balance>=200){
				cout<<"1.Charger (RM200)"<<endl
					<<"2.Phone Cover (RM100)"<<endl
					<<"3.Screen Protector (RM30)"<<endl;
			}
			else if(balance>=100){
				cout<<"1.Phone Cover (RM100)"<<endl
					<<"2.Screen Protector (RM30)"<<endl;
			}
			else if(balance>=30){
				cout<<"1.Screen Protector (RM30)"<<endl;
			}
			else
				cout<<"Sorry,there is no accesories that you can afford"<<endl;
				
			cout<<"\nThank you for choosing our program, please come again!";
			
	inFile.close();//close file
	return 0;
}

