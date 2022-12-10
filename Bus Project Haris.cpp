#include<iostream>

#include<windows.h>

using namespace std;

struct bus{

	string	name;         // name of the driver / customer
	
	int   id;          // plate number / invoice number
	
	string  depart;       // deparature location
	
	string   arrival;     // arrival location
	
	string   depart_time; // departure time
	
	string   arrival_time; // arrival time
	
	int   fare;         // fare of the bus

};

int total=0;   // bus

int rtotal=0;  // ticket

int ftotal=0;  // fare



bus e[100];   // bus

bus r[100];   // ticet

bus f[100];   // fare
/*                                              ***** FUNCTIONS IN PROGRAM *****

                                                  >   busdata();
                                                      
                                                  >   del();
                                                      
                                                  >   update();
                                                      
                                                  >   show();
                                                      
                                                  >    Res_Ticket();
                                                      
                                                  >    Update_Res();
                                                      
                                                  >    cancel_Res();
                                                      
                                                  >    show_invoice();
                                                      
                                                  >    fare();
                                                      
                                                  >    show_fare();
                                                      
                                                  >    update_fare(); */




//                        ...    busdata();   ...



void busdata(){

	int user=0;

	cout<<"\t\tTell Number of Buses you want to enter??";

	cin>>user;

	for(int i=total;i<total+user;i++){

		cout<<"\n\t\tEnter data of the Bus "<<i+1<<endl;


       cout<<"\n\t\tEnter Bus Plate Number: ";

		cin>>e[i].id;
		
		cout<<"\n\t\tEnter the name of the driver";
		
		cin>>e[i].name;
		
		cout<<"\n\t\tEnter Bus Departure Location: ";

		cin>>e[i].depart;

		cout<<"\n\t\tEnter Arrival Location: ";

		cin>>e[i].arrival;
		
		cout<<"\n\t\tEnter Departure Time: ";

		cin>>e[i].depart_time;

		cout<<"\n\t\tEnter Arrival Time: ";

		cin>>e[i].arrival_time;

		
		
		cout<<"\n\n\t\tBus Added Successfully\n\n\t\t Now you can choose any option from the following"<<endl;

	}

	total=total+user;

}



//                             ...     void show();  ...


void show(){

	if(total!=0){

	for(int i=0;i<total;i++){
		
		 cout<<"************************************************************************************";
        cout<<"************************************************************************************";

		cout<<"\n\nData of Bus "<<i+1<<endl;
		
		cout<<"\n\t\tPlate Number: "<<e[i].id<<endl;
		
		cout<<"\n\t\tThe name of the driver of bus "<<i+1<<" is "<<e[i].name<<endl;

		cout<<"\n\t\tDeparture Location "<<e[i].depart_time<<endl;

		cout<<"\n\t\tArrival Location: "<<e[i].arrival<<endl;
		
		cout<<"\n\t\tDeparture Time: "<<e[i].depart_time<<endl;

     	cout<<"\n\t\tArrival Time: "<<e[i].arrival_time<<endl;
     	
     	 cout<<"************************************************************************************";
        cout<<"************************************************************************************";

		
	}

    }

    else{

    	cout<<"No data is entered"<<endl;

	}

    }



//                             ...  void search(); ...


void search(){

	if(total!=0){

	int id;

	cout<<"\n\tEnter Plate Number of the Bus which you want to search"<<endl;

	cin>>id;

	for(int i=0;i<total;i++){

		if(e[i].id==id){

		cout<<"\n\tData of Bus "<<i+1<<endl;
		
		cout<<"\n\tPlate Number: "<<e[i].id<<endl;
		
		cout<<"\n\tThe name of the driver is : "<<e[i].name<<endl;

		cout<<"\n\tDeparture Location: "<<e[i].depart<<endl;

		cout<<"\n\tArrival Location: "<<e[i].arrival<<endl;
		
		cout<<"\n\tDeparture Time: "<<e[i].depart_time<<endl;

		cout<<"\n\tArrival Time: "<<e[i].arrival_time<<endl;

		

		break;

		}

		if(i==total-1){

			cout<<"/n/tNo such record found"<<endl;

		}

	}

}else{

	cout<<"\n\tNo data is entered"<<endl;

}

}


 //                                ...      void update();   ...




void update(){

	if(total!=0){

	int id;

	cout<<"\n\tEnter Plate Number of the Bus which You want  to update"<<endl;

	cin>>id;

	for(int i=0;i<total;i++){

		if(e[i].id==id){

		cout<<"\n\t\t.........Old data......."<<i+1<<endl;
		
		cout<<"\n\t\tPlate Number of the Bus: "<<e[i].id<<endl;
		
		cout<<"\n\t\tThe name of the driver is : "<<e[i].name<<endl;
		
		cout<<"\n\t\tDeparture Location: "<<e[i].depart<<endl;

		cout<<"\n\t\tArrival Location: "<<e[i].arrival<<endl;
		
		cout<<"\n\t\tDeparture Time: "<<e[i].depart_time<<endl;

		cout<<"\n\t\tArrival Time: "<<e[i].arrival_time<<endl;	

		cout<<"\n\t\t.........Enter new data......."<<endl;
		
		cout<<"\n\t\tEnter the name of the driver  : ";
		
		cin>>e[i].name;

		cout<<"\n\tEnter Departure Location: ";

		cin>>e[i].depart;

		cout<<"\n\tEnter Arrival Location: ";

		cin>>e[i].arrival;
		
		cout<<"\n\tEnter Departure Time: ";

		cin>>e[i].depart_time;

		cout<<"\n\tEnter Arrival Time: ";

		cin>>e[i].arrival_time;

		
		
		cout<<" \t\t Data updated Successfully!! \n\nNow you can choose from the following"<<endl;

		break;

		}

		if(i==total-1){

			cout<<"\n\tNo such record found"<<endl;

		}

	}

}else{

	cout<<"\n\tNo data is entered"<<endl;

}

}



//                             ...      void del();    ...



void del(){

	if(total!=0){

	int press;

	cout<<"\n\tPress 1 to delete specific record"<<endl;

	cout<<"\n\tPress 2 to delete full record"<<endl;

	cin>>press;

	if(press==1){

	     int id;

		cout<<"\n\tEnter Plate Number of the Bus which you want to delete";

		cin>>id;

		for(int i=0;i<total;i++){

			if(e[i].id==id){

				e[i].name=e[i+1].name;

				e[i].id=e[i+1].id;

				e[i].depart=e[i+1].depart;

				e[i].arrival=e[i+1].arrival;

				e[i].depart_time=e[i+1].depart_time;
				
				e[i].arrival_time=e[i+1].arrival_time;

				total--;

				cout<<"\n\tYour required record is deleted Successfully\n Now you ccan choose from the following"<<endl;

				break;

			}

			if(i==total-1){

			cout<<"\n\tNo such record found"<<endl;

		}

		}

	}

	else if(press==2){

		total=0;

		cout<<"\n\tAll record is deleted"<<endl;

	}

	else{

		cout<<"\n\tInvalid Input"<<endl;

	}

}else{

	cout<<"\n\tNo data is entered"<<endl;

}

}


//                             ....      void Res_Ticket();  ....



    Res_Ticket(){
		
		int ruser=0;

	cout<<"\n\tFor how many tickets you want to Reserve??"<<endl;

	cin>>ruser;

	for(int i=rtotal;i<rtotal+ruser;i++){

		cout<<"\n\tEnter data for the Customer "<<i+1<<endl<<endl;
		
		cout<<"\n\tEnter the name of the customer";
		
		cin>>r[i].name;

        cout<<"\n\tEnter   Invoice number: ";

		cin>>r[i].id;
		
		cout<<"\n\tEnter Bus Departure Location: ";

		cin>>r[i].depart;

		cout<<"\n\tEnter Arrival Location: ";

		cin>>r[i].arrival;
		
		cout<<"\n\tEnter Departure Time: ";

		cin>>r[i].depart_time;

		cout<<"\n\tEnter Arrival Time: ";

		cin>>r[i].arrival_time;
		
		cout<<"\n\n\t\tTicket Reserved Successfully\n\n\t\t Now you can choose any option from the following"<<endl;

	}

	rtotal=rtotal+ruser;	
	
	}
	
	
	
//                                   ...  void update_Res(); ...	
	
	
	
	Update_Res(){
	
	if(rtotal!=0){

	int id;

	cout<<"\n\tEnter Invoice number of the Ticket for which You want  to update"<<endl;

	cin>>id;

	for(int i=0;i<rtotal;i++){

		if(r[i].id==id){

		cout<<"\n\t\t......Old Ticket data......"<<endl;

		cout<<"\n\tInvoice Number: "<<r[i].id<<endl;
		
		cout<<"\n\tEnter the name of the customer"<<r[i].name;
		
		cout<<"\n\tDeparture Location: "<<r[i].depart<<endl;

		cout<<"\n\tArrival Location: "<<r[i].arrival<<endl;

		cout<<"\n\tArrival Time: "<<r[i].arrival_time<<endl;

		cout<<"\n\tDeparture Time: "<<r[i].depart_time<<endl;

		cout<<"\n\t\t......Enter new data......"<<endl;
		
		cout<<"\t\tEnter the name of the customer"<<r[i].name;
		
		cin>>r[i].name;
		
		cout<<"\n\tEnter Departure Location: ";

		cin>>r[i].depart;

		cout<<"\n\tEnter Arrival Location: ";

		cin>>r[i].arrival;

		cout<<"\n\tEnter Arrival Time: ";

		cin>>r[i].arrival_time;

		cout<<"\n\tEnter Departure Time: ";

		cin>>r[i].depart_time;
		
		cout<<"\t\t Ticket Reservation Updated Successfullly";

		break;

		}

		if(i==rtotal-1){

			cout<<"No such record found"<<endl;

		}

	}

}else{

	cout<<"No data is entered"<<endl;

}
	
	
	}
	
	
	
	//                                 ....   void cancel_Res(); ...
	
	
	cancel_Res(){

	if(rtotal!=0){

		int id;

		cout<<"\n\t\tEnter Invoice Number of the Ticket which you want to Cancel"<<endl;

		cin>>id;

		for(int i=0;i<rtotal;i++){

			if(r[i].id==id){

				r[i].name=r[i+1].name;

				r[i].id=r[i+1].id;

				r[i].depart=r[i+1].depart;
				
				r[i].arrival=r[i+1].arrival;

				r[i].depart_time=r[i+1].depart_time;
				
				r[i].arrival_time=r[i+1].arrival_time;

				rtotal--;

				cout<<"\n\t\tReservation Cancelled Successfuly!! \n\t\tNow you can choose from the following options"<<endl;

				break;

			}

			if(i==rtotal-1){

			cout<<"\n\tNo such record found"<<endl;

		}

		}

	}

}
	
	//                      ....  void show_invoice();  ....
	
	
	show_invoice(){

	if(rtotal!=0){

	for(int i=0;i<rtotal;i++){
        cout<<"************************************************************************************";
        cout<<"\n***********************************************************************************"<<endl;
		cout<<"\n\nData of Customer "<<i+1<<endl;

		cout<<"Ticket Invoice Number: "<<r[i].id<<endl;
		
		cout<<"Name of the customer "<<r[i].name<<endl;

		cout<<"Departure Location: "<<r[i].depart<<endl;
		
		cout<<"Arrival Location: "<<r[i].arrival<<endl;
		
		cout<<"Departure Time: "<<r[i].depart_time<<endl;

		cout<<"Arrival Time: "<<r[i].arrival_time<<endl;
		
		 cout<<"\n************************************************************************************";
        cout<<"\n************************************************************************************";

		

	}

    }

    else{

    	cout<<"\n\tNo data is entered\n\n Choose any option from the following"<<endl;

	}

}
	
	
	//                          ....  void fare(); ....

	
	fare(){
	int fuser=0;

	cout<<"\n\tFor how many Buses you want to define fare??"<<endl;

	cin>>fuser;

	for(int i=ftotal;i<ftotal+fuser;i++){

		cout<<"\n\tEnter data of the Bus for which you want to define fare "<<i+1<<endl<<endl;


       cout<<"\n\tEnter Bus Plate Number: ";

		cin>>f[i].id;
		
		cout<<"\n\tEnter Bus Departure Location: ";

		cin>>f[i].depart;	

		cout<<"\n\tEnter Arrival Location: ";

		cin>>f[i].arrival;

		cout<<"\n\tEnter Total Fare: ";

		cin>>f[i].fare;
		
		cout<<"\n\n\t\tFare Added Successfully\n\n\t\t Now you can you any option from the following"<<endl;

	}

	ftotal=ftotal+fuser;

}


//                                 ....  void show_fare();  ....


	show_fare(){

	if(ftotal!=0){

	for(int i=0;i<ftotal;i++){
		
		cout<<"************************************************************************************";
        cout<<"\n************************************************************************************"<<endl;

		cout<<"\n\nData of Bus "<<i+1<<endl;

		cout<<"Departure Location "<<f[i].depart<<endl;
		
		cout<<"Arrival Location: "<<f[i].arrival<<endl;

		cout<<"Plate Number: "<<f[i].id<<endl;

		cout<<"Total Fare: "<<f[i].fare<<endl;
		
		cout<<"\n************************************************************************************";
        cout<<"\n************************************************************************************"<<endl;

	}

    }

    else{

    	cout<<"No data is entered"<<endl;

	}

}



//                                       .... void update_fare();  ... 

	update_fare(){

	if(ftotal!=0){

	int id;

	cout<<"\n\tEnter Plate Number of the Bus which You want  to update fare"<<endl;

	cin>>id;

	for(int i=0;i<ftotal;i++){

		if(f[i].id==id){

		cout<<"Details of old fare of Bus along with Bus data"<<i+1<<endl;
		
		cout<<"Plate Number of the Bus: "<<f[i].id<<endl;

		cout<<"Departure Location: "<<f[i].depart<<endl;

		cout<<"Arrival Location: "<<f[i].arrival<<endl;

		cout<<"Total Fare: "<<f[i].fare<<endl;

		cout<<"\n\t\t....Enter new data....."<<endl;

		cout<<"\n\tEnter Departure Location: ";

		cin>>f[i].depart;

		cout<<"\n\tEnter Arrival Location: ";

		cin>>f[i].arrival;

		cout<<"\n\tEnter New Total Fare: ";

		cin>>f[i].fare;
		
		cout<<"\t\t Fare Updated Successfully\n\t\tNow you can choose from the following ";

		break;

		}

		if(i==total-1){

			cout<<"\n\tNo such record found"<<endl;

		}

	}

}else{

	cout<<"\n\tNo data is entered"<<endl;

}

}
	
	//                                 ....   main() function ....
	

main(){
	
	
    
        //                       .....  ADMIN LOGIN SYSTEM ..... 
		
		
		                      
    
	cout<<"\n\n\t\t**********^^^^^{   BUS RESERVTION SYSTEM   } ^^^***********"<<endl;

	  string username,password;

    cout<<"\n\n\n\t\t\t****** ====  Please Signup       ====  ******"<<endl;

	cout<<"\n\n\t\tEnter new username: ";

	cin>>username;

	cout<<"\t\tEnter new password: ";

	cin>>password;

	cout<<"\t\tYour new id is creating please wait";

	for(int i=0;i<6;i++)

	{

		cout<<".";

		Sleep(500);     // sleep function to suspend execution temporarily //
		                //       (500 miliseconds in this case )          //

	}

	cout<<"\n\t\tYour id created successfully";

	Sleep(2000);          // suspension for 2000 miliseconds(2 sec) //

	start:

	system("CLS");        //  to clear scree  //

	string usrn,pswd;

	cout<<"\n\n\t\t**********^^^^^{   BUS RESERVTION SYSTEM   } ^^^***********"<<endl;

	cout<<"\n\n\n\t\t   LOGIN"<<endl;

	cout<<"\t\tEnter username: ";

	cin>>usrn;

	cout<<"\t\tEnter password: ";

	cin>>pswd;

	if(usrn==username&&pswd==password)

	{

	system("CLS");
	
	
	
      //                               .....           MENU           ......
	  
	  
	  
	                           
	char ch;

	while(1){

	cout<<"\n\n\t\tEnter 1 Manage Buses"<<endl;

	cout<<"\t\tEnter 2 to Manage Customers"<<endl;

	cout<<"\t\tEnter 3 to Manage Fares"<<endl;

	cout<<"\t\tEnter 4 to logout"<<endl;

	cout<<"\t\tEnter 5 to exit"<<endl;

	cin>>ch;

	system("CLS");

	switch(ch){
    
		case '1':
			cout<<"\t\t1)Add Bus"<<endl
			    <<"\t\t2)Delete Bus"<<endl
			    <<"\t\t3)Update Bus"<<endl
			    <<"\t\t4)Details of Bus( or Route of the Bus)"<<endl;
			    int a;
            cin>>a;
            if(a==1){
            	busdata();
			}
			
			else if(a==2){
				
				del();
			}
			
			else if(a==3){
				
				update();
			}
            
            else if(a==4){
             
			   show();
			    	
			}
			
			else
			cout<<"Wrong Input!!!. Try Again";

			break;

		case '2':
			cout<<"\t\t1)Reserve Ticket"<<endl
			    <<"\t\t2)Update Reservation"<<endl
			    <<"\t\t3)Cancel Reservation"<<endl
			    <<"\t\t4)View invoice"<<endl;
				int b;
				cin>>b;	
            if(b==1){
            	Res_Ticket();
			}
			
			else if(b==2){
				
				Update_Res();
			}
			
			else if(b==3){
				
				cancel_Res();
			}
            
            else if(b==4){
             
			   show_invoice();
			    	
			}
			
			else
			cout<<"\n\tWrong Input!!!. Try Again";

			break;


		case '3':
			
			cout<<"\t\t1)Define fare of the Bus"<<endl
			    <<"\t\t2)View fare of the Bus"<<endl
			    <<"\t\t3)Update fare of the Bus"<<endl;
            int c;
            cin>>c;
			if(c==1){
            	fare();
			}
			
			else if(c==2){
				
				show_fare();
			}
			
			else if(c==3){
				
				update_fare();
			}
            
			
			else
			cout<<"\n\t\tWrong Input!!!. Try Again";

			break;

		case '4':

			goto start;

			break;

		case '5':

			exit(0);

			break;

		default:

			cout<<"\a\n\t\tInvalid Input"<<endl;

			break;

	}

}

}

  else if(usrn!=username)

  {

  	cout<<"\n\t\t\aInvalid username please try again";

  	Sleep(3000);                   //      suspension for 3000 seconds( 3 sec )     //

  	goto start;                   //    unconditional jump statement to transfer the control of the progrsm //

  }

  else if(pswd!=password)

  {

  	cout<<"\n\t\t\aInvalid password please try again";

  	Sleep(3000);                 // suspension for 3000 miliseconds (3 sec) //

  	goto start;

  }

  else{

  	cout<<"\n\t\t\aInvalid username and password";

  	Sleep(3000);               

  	goto start;

  }

}

             //==================================== The End  ============================================//
             
             
             
             
             
             
             
             

