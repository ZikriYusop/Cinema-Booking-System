#include<iostream>
#include<string.h>
using namespace std;
void disp1();
void dispKid();
void dispAdult();
void time1();
void time2();
void time3();
void time4();
void time5();
void time6();
int main(){
	//information required
string time;
string day[7]={"SUNDAY","MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY","SATURDAY"};
int totOrder, a=0, tel, age, rep = 0, price = 0, book=1, count=1;
string name[30];

cout<<"LIMIT BOOKING [5 BOOK PER PERSON !] "<<endl;
cout<<"Enter your phone number : ";
cin>>tel;

cout<<"Enter total book : ";
cin>>totOrder;

do{

for(int i=0; i<totOrder; i++){
cout<<"Enter your full name "<<endl;	
cout<<"Enter Name : ";
cin>>name[i];
}
cout<<"Enter your age : ";
cin>>age;

//Movie for certain age
if(age<=3){
int movie1;	
	string time;
	disp1();
	cout << "Pick your choice of Movie : ";
	cin >> movie1;
	if(movie1==1){
		cout<<"Movie : Afiq & Abah"<<endl;
		time1();
		cout<<"Choose your day : ";
		cin>>day[a];
		if(day[a]==hari){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : SUNDAY, Time : "<<time<<endl;
		}
			else if(day[a]==hari){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : MONDAY, Time : "<<time<<endl;
		}
			else if(day[a]==hari){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : TUESDAY, Time : "<<time<<endl;
		}
			else if(day[a]==hari){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : WEDNESDAY, Time : "<<time<<endl;
		}
			else if(day[a]==hari){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : THURSDAY, Time : "<<time<<endl;
		}
			else if(day[a]==hari){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : FRIDAY, Time : "<<time<<endl;
		}
			else if(day[a]==hari){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : SATURDAY, Time : "<<time<<endl;
		}
			else{
			cout<<"Sorry, can't identify the choice. Please try again.";
		}
		cout<<"\nFee(RM) : 0.00"<<endl;
		price=price+0;
	}
		if(day[a]==hari){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : SUNDAY, Time : "<<time<<endl;
		}
			else if(day[a]==hari){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : MONDAY, Time : "<<time<<endl;
		}
			else if(day[a]==hari){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : TUESDAY, Time : "<<time<<endl;
		}
			else if(day[a]==hari){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : WEDNESDAY, Time : "<<time<<endl;
		}
			else if(day[a]==hari){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : THURSDAY, Time : "<<time<<endl;
		}
			else if(day[a]==hari){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : FRIDAY, Time : "<<time<<endl;
		}
			else if(day[a]==hari){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : SATURDAY, Time : "<<time<<endl;
		}
			else{
			cout<<"Sorry, can't identify the choice. Please try again.";
		}
		cout<<"\nFee(RM) : 0.00"<<endl;
		price=price+0;
	}
	else if(movie1==2){
		cout<<"Movie : Cocomelon"<<endl;
		time2();
		cout<<"Choose your day : ";
		cin>>day;
		if(day==1){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : SUNDAY, Time : "<<time<<endl;
		}
			else if(day==2){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : MONDAY, Time : "<<time<<endl;
		}
			else if(day==3){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : TUESDAY, Time : "<<time<<endl;
		}
			else if(day==4){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : WEDNESDAY, Time : "<<time<<endl;
		}
			else if(day==5){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : THURSDAY, Time : "<<time<<endl;
		}
			else if(day==6){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : FRIDAY, Time : "<<time<<endl;
		}
			else if(day==7){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : SATURDAY, Time : "<<time<<endl;
		}
			else{
			cout<<"Sorry, can't identify the choice. Please try again.";
		}
		cout<<"\nFee(RM) : 0.00"<<endl;
		price=price+0;
	}
	else{
		cout<<"Sorry, can't identify the choice. Please try again.";
	}
}
else if  (age<=12){
	int movie2;
	string time;
	dispKid();
	cout << "Pick your choice of Movie : ";
	cin >> movie2;
	if(movie2==1){ 
	    cout<<"Movie : Afiq & abah"<<endl;
	    time1();
	    cout<<"Choose your day : ";
		cin>>day;
		if(day==1){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : SUNDAY, Time : "<<time<<endl;
		}
			else if(day==2){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : MONDAY, Time : "<<time<<endl;
		}
			else if(day==3){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : TUESDAY, Time : "<<time<<endl;
		}
			else if(day==4){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : WEDNESDAY, Time : "<<time<<endl;
		}
			else if(day==5){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : THURSDAY, Time : "<<time<<endl;
		}
			else if(day==6){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : FRIDAY, Time : "<<time<<endl;
		}
			else if(day==7){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : SATURDAY, Time : "<<time<<endl;
		}
			else{
			cout<<"Sorry, can't identify the choice. Please try again.";
		}
        cout<<"\nFee(RM) : 3.00"<<endl;
        price=price+3;
		}
		else if(movie2==2){
		cout<<"Movie : Cocomelon"<<endl;
		time2();
		cout<<"Choose your day : ";
		cin>>day;
		if(day==1){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : SUNDAY, Time : "<<time<<endl;
		}
			else if(day==2){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : MONDAY, Time : "<<time<<endl;
		}
			else if(day==3){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : TUESDAY, Time : "<<time<<endl;
		}
			else if(day==4){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : WEDNESDAY, Time : "<<time<<endl;
		}
			else if(day==5){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : THURSDAY, Time : "<<time<<endl;
		}
			else if(day==6){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : FRIDAY, Time : "<<time<<endl;
		}
			else if(day==7){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : SATURDAY, Time : "<<time<<endl;
		}
			else{
			cout<<"Sorry, can't identify the choice. Please try again.";
		}
        cout<<"\nFee(RM) = 3.00"<<endl;
        price=price+3;
		}
		else if(movie2==3){
		cout<<"Movie : Papaya"<<endl;
		time3();
		cout<<"Choose your day : ";
		cin>>day;
		if(day==1){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : SUNDAY, Time : "<<time<<endl;
		}
			else if(day==2){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : MONDAY, Time : "<<time<<endl;
		}
			else if(day==3){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : TUESDAY, Time : "<<time<<endl;
		}
			else if(day==4){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : WEDNESDAY, Time : "<<time<<endl;
		}
			else if(day==5){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : THURSDAY, Time : "<<time<<endl;
		}
			else if(day==6){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : FRIDAY, Time : "<<time<<endl;
		}
			else if(day==7){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : SATURDAY, Time : "<<time<<endl;
		}
			else{
			cout<<"Sorry, can't identify the choice. Please try again.";
		}
        cout<<"\nFee(RM) : 5.00"<<endl;
        price=price+5;
		}
		else if(movie2==4){
		cout<<"Movie : Mechamato"<<endl;
		time4();
		cout<<"Choose your day : ";
		cin>>day;
		if(day==1){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : SUNDAY, Time : "<<time<<endl;
		}
			else if(day==2){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : MONDAY, Time : "<<time<<endl;
		}
			else if(day==3){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : TUESDAY, Time : "<<time<<endl;
		}
			else if(day==4){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : WEDNESDAY, Time : "<<time<<endl;
		}
			else if(day==5){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : THURSDAY, Time : "<<time<<endl;
		}
			else if(day==6){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : FRIDAY, Time : "<<time<<endl;
		}
			else if(day==7){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : SATURDAY, Time : "<<time<<endl;
		}
			else{
			cout<<"Sorry, can't identify the choice. Please try again.";
		}
		cout<<"\nFee(RM) : 5.00"<<endl;
        price=price+5;
		}
		else{
	    cout<<"Sorry, can't identify the choice. Please try again.";
		}
}
else{
	int movie3;
	string time;
	dispAdult();
	cout<<"Pick your choice of Movie : ";
	cin>>movie3;
	if(movie3==1){
	cout<<"Movie : Afiq & Abah "<<endl;
	time1();
	cout<<"Choose your day : ";
		cin>>day;
		if(day==1){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : SUNDAY, Time : "<<time<<endl;
		}
			else if(day==2){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : MONDAY, Time : "<<time<<endl;
		}
			else if(day==3){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : TUESDAY, Time : "<<time<<endl;
		}
			else if(day==4){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : WEDNESDAY, Time : "<<time<<endl;
		}
			else if(day==5){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : THURSDAY, Time : "<<time<<endl;
		}
			else if(day==6){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : FRIDAY, Time : "<<time<<endl;
		}
			else if(day==7){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : SATURDAY, Time : "<<time<<endl;
		}
			else{
			cout<<"Sorry, can't identify the choice. Please try again.";
		}
    cout<<"\nFee(RM) : 3.00"<<endl;
    price=price+3;
	}
	else if(movie3==2){
    cout<<"Movie : Cocomelon"<<endl;
    time2();
    cout<<"Choose your day : ";
		cin>>day;
		if(day==1){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : SUNDAY, Time : "<<time<<endl;
		}
			else if(day==2){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : MONDAY, Time : "<<time<<endl;
		}
			else if(day==3){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : TUESDAY, Time : "<<time<<endl;
		}
			else if(day==4){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : WEDNESDAY, Time : "<<time<<endl;
		}
			else if(day==5){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : THURSDAY, Time : "<<time<<endl;
		}
			else if(day==6){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : FRIDAY, Time : "<<time<<endl;
		}
			else if(day==7){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : SATURDAY, Time : "<<time<<endl;
		}
			else{
			cout<<"Sorry, can't identify the choice. Please try again.";
		}
    cout<<"\nFee(RM) : 3.00"<<endl;
    price=price+3;
	}
	else if(movie3==3){
    cout<<"Movie : Papaya"<<endl;
    time3();
    cout<<"Choose your day : ";
		cin>>day;
		if(day==1){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : SUNDAY, Time : "<<time<<endl;
		}
			else if(day==2){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : MONDAY, Time : "<<time<<endl;
		}
			else if(day==3){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : TUESDAY, Time : "<<time<<endl;
		}
			else if(day==4){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : WEDNESDAY, Time : "<<time<<endl;
		}
			else if(day==5){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : THURSDAY, Time : "<<time<<endl;
		}
			else if(day==6){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : FRIDAY, Time : "<<time<<endl;
		}
			else if(day==7){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : SATURDAY, Time : "<<time<<endl;
		}
			else{
			cout<<"Sorry, can't identify the choice. Please try again.";
		}
    cout<<"\nFee(RM) : 5.00"<<endl;
    price=price+5;
	}
	else if(movie3==4){
    cout<<"Movie : Mechamato"<<endl;
    time4();
    cout<<"Choose your day : ";
		cin>>day;
		if(day==1){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : SUNDAY, Time : "<<time<<endl;
		}
			else if(day==2){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : MONDAY, Time : "<<time<<endl;
		}
			else if(day==3){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : TUESDAY, Time : "<<time<<endl;
		}
			else if(day==4){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : WEDNESDAY, Time : "<<time<<endl;
		}
			else if(day==5){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : THURSDAY, Time : "<<time<<endl;
		}
			else if(day==6){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : FRIDAY, Time : "<<time<<endl;
		}
			else if(day==7){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : SATURDAY, Time : "<<time<<endl;
		}
			else{
			cout<<"Sorry, can't identify the choice. Please try again.";
		}
    cout<<"\nFee(RM) : 5.00"<<endl;
    price=price+5;
	} 
	else if( movie3 == 5){
    cout << "Movie : Asrama Seksyen 6" <<endl;
    time5();
    cout<<"Choose your day : ";
		cin>>day;
		if(day==1){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : SUNDAY, Time : "<<time<<endl;
		}
			else if(day==2){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : MONDAY, Time : "<<time<<endl;
		}
			else if(day==3){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : TUESDAY, Time : "<<time<<endl;
		}
			else if(day==4){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : WEDNESDAY, Time : "<<time<<endl;
		}
			else if(day==5){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : THURSDAY, Time : "<<time<<endl;
		}
			else if(day==6){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : FRIDAY, Time : "<<time<<endl;
		}
			else if(day==7){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : SATURDAY, Time : "<<time<<endl;
		}
			else{
			cout<<"Sorry, can't identify the choice. Please try again.";
		}
    cout << "\nFee(RM) : 8.00" << endl;
    price = price + 8;
	}
	else if (movie3 == 6){
    cout << "Movie : Hantu Corndog" <<endl;
    time6();
    cout<<"Choose your day : ";
		cin>>day;
		if(day==1){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : SUNDAY, Time : "<<time<<endl;
		}
			else if(day==2){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : MONDAY, Time : "<<time<<endl;
		}
			else if(day==3){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : TUESDAY, Time : "<<time<<endl;
		}
			else if(day==4){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : WEDNESDAY, Time : "<<time<<endl;
		}
			else if(day==5){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : THURSDAY, Time : "<<time<<endl;
		}
			else if(day==6){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : FRIDAY, Time : "<<time<<endl;
		}
			else if(day==7){
			cout<<"Choose your time : ";
			cin>>time;
			cout<<"Day : SATURDAY, Time : "<<time<<endl;
		}
			else{
			cout<<"Sorry, can't identify the choice. Please try again.";
		}
    cout << "\nFee(RM) : 8.00" << endl;
    price = price + 8;
	}
	else{
		cout<<"Sorry, can't identify the choice. Please try again.";
	}
	}
	cout << "\nDo you want book another ticket ? (YES = 1 / NO = 2) : ";
	cin >> rep; 
}
while (rep==1){
book++;
    cout << "Phone Number ("<<name[0]<<")          :" << tel   <<endl;
	cout << "Total Number of book    : "  <<book++<<endl;
	for(int n=0; n<totOrder; n++){
		cout << "Bookers Detail          : "  <<name[n]<<" ";
}
}
return 0;
}

void disp1(){
	//Movie for kids less than 4
cout << "                                                  " << endl;
cout << "+------+  MOVIE RECOMMENDED FOR THIS AGE  +------+" << endl;
cout << "**----------------------------------------------**" << endl;
cout << "||       CHOICE  |    TITLE      |  FEE(RM)     ||" << endl;
cout << "**----------------------------------------------**" << endl;
cout << "||        (1)    |  Afiq & abah  |  0.00        ||" << endl;
cout << "||        (2)    |   Cocomelon   |  0.00        ||" << endl;
cout << "**----------------------------------------------**" << endl;
cout << "                                                  " << endl;

}
void dispKid(){
	//Movie for kids less then 13
cout << "                                                  " << endl;
cout << "+------+  MOVIE RECOMMENDED FOR THIS AGE  +------+" << endl;
cout << "**----------------------------------------------**" << endl;
cout << "||       CHOICE  |    TITLE      |  FEE(RM)     ||" << endl;
cout << "**----------------------------------------------**" << endl;
cout << "||        (1)    |  Afiq & abah  |  3.00        ||" << endl;
cout << "||        (2)    |   Cocomelon   |  3.00        ||" << endl;
cout << "||        (3)    |    Papaya     |  5.00        ||" << endl;
cout << "||        (4)    |   Mechamato   |  5.00        ||" << endl;
cout << "**----------------------------------------------**" << endl;
cout << "                                                  " << endl;

}
void dispAdult(){
	//movie for kids greater than 16
 cout << "                                                        " << endl;
 cout << "+---------+  MOVIE RECOMMENDED FOR THIS AGE +----------+" << endl;
 cout << "**----------------------------------------------------**" << endl;
 cout << "||       CHOICE  |        TITLE        |  FEE(RM)     ||" << endl;
 cout << "**----------------------------------------------------**" << endl;
 cout << "||        (1)    |      Afiq & abah    |  3.00        ||" << endl;
 cout << "||        (2)    |       Cocomelon     |  3.00        ||" << endl;
 cout << "||        (3)    |        Papaya       |  5.00        ||" << endl;
 cout << "||        (4)    |     Mechamato       |  5.00        ||" << endl;
 cout << "||        (5)    |   Asrama Seksyen 6  |  8.00        ||" << endl;
 cout << "||        (6)    |    Hantu Conrdog!   |  8.00        ||" << endl;
 cout << "**----------------------------------------------------**" << endl;
 cout << "                                                        " << endl;
 
}
void time1(){
cout << "                                                                                                                    " << endl;
cout << "+----------------------------------------------+  SCREENING TIME  +------------------------------------------------+" << endl;
cout << "*------------------------------------------------------------------------------------------------------------------*" << endl;
cout << "|  DAY  |  SUNDAY[1]  |  MONDAY[2]  |  TUESDAY[3]  |  WEDNESDAY[4]  |  THURSDAY[5]  |  FRIDAY[6]   |  SATURDAY[7]  |" << endl;
cout << "*------------------------------------------------------------------------------------------------------------------*" << endl;
cout << "|  TIME |   10:00 am  |   11:00 am  |   10.30 am   |    11:30 am    |    10:45 am   |   12:45 pm   |       --      |" << endl;
cout << "|       |      --     |   01:00 pm  |   12:30 pm   |    01:30 pm    |    12:45 pm   |   02:30 pm   |    01:45 pm   |" << endl;
cout << "|       |   02:00 pm  |   03:00 pm  |   02:30 pm   |    03:30 pm    |    02:30 pm   |      --      |    03:45 pm   |" << endl;
cout << "|       |   04:00 pm  |   05:00 pm  |      --      |    05:30 pm    |    04:50 pm   |   06:00 pm   |    05:00 pm   |" << endl;
cout << "|       |   06:00 pm  |   07:00 pm  |   06:30 pm   |    07:30 pm    |    06:35 pm   |   07:30 pm   |    06:30 pm   |" << endl;
cout << "**----------------------------------------------------------------------------------------------------------------**" << endl;
cout << "                                                                                                                    " << endl;

}
void time2(){
cout << "                                                                                                                    " << endl;
cout << "+----------------------------------------------+  SCREENING TIME  +------------------------------------------------+" << endl;
cout << "*------------------------------------------------------------------------------------------------------------------*" << endl;
cout << "|  DAY  |  SUNDAY[1]  |  MONDAY[2]  |  TUESDAY[3]  |  WEDNESDAY[4]  |  THURSDAY[5]  |  FRIDAY[6]   |  SATURDAY[7]  |" << endl;
cout << "*------------------------------------------------------------------------------------------------------------------*" << endl;
cout << "|  TIME |   11:00 am  |   10:00 am  |   10.30 am   |    11:30 am    |    10:45 am   |   12:45 pm   |    10:00 am   |" << endl;
cout << "|       |   01:00 pm  |      --     |   12:30 pm   |       --       |    12:45 pm   |   02:30 pm   |    02:45 pm   |" << endl;
cout << "|       |   01:00 pm  |   02:00 pm  |   02:30 pm   |    03:30 pm    |       --      |      --      |       --      |" << endl;
cout << "|       |   05:00 pm  |   04:00 pm  |      --      |    05:30 pm    |    04:50 pm   |   06:00 pm   |    04:00 pm   |" << endl;
cout << "|       |   07:00 pm  |   06:00 pm  |   06:30 pm   |    07:30 pm    |    06:35 pm   |   07:30 pm   |    06:30 pm   |" << endl;
cout << "**----------------------------------------------------------------------------------------------------------------**" << endl;
cout << "                                                                                                                    " << endl;

}
void time3(){
cout << "                                                                                                                    " << endl;
cout << "+----------------------------------------------+  SCREENING TIME  +------------------------------------------------+" << endl;
cout << "*------------------------------------------------------------------------------------------------------------------*" << endl;
cout << "|  DAY  |  SUNDAY[1]  |  MONDAY[2]  |  TUESDAY[3]  |  WEDNESDAY[4]  |  THURSDAY[5]  |  FRIDAY[6]   |  SATURDAY[7]  |" << endl;
cout << "*------------------------------------------------------------------------------------------------------------------*" << endl;
cout << "|  TIME |   10:30am   |   11:00am   |   10.30 am   |    11:30 am    |    12:45 am   |   10:45 pm   |       --      |" << endl;
cout << "|       |   12:30pm   |   01:00pm   |   12:30 pm   |    01:30 pm    |    02:35 pm   |   01:30 pm   |    12:45 pm   |" << endl;
cout << "|       |   02:30pm   |   03:00pm   |   02:30 pm   |       --       |    04:30 pm   |      --      |    02:45 pm   |" << endl;
cout << "|       |   04:00pm   |   05:00pm   |      --      |    05:30 pm    |    06:50 pm   |   04:00 pm   |    03:00 pm   |" << endl;
cout << "|       |   06:00pm   |   07:00pm   |   06:30 pm   |    07:30 pm    |    07:35 pm   |   06:30 pm   |    07:00 pm   |" << endl;
cout << "**----------------------------------------------------------------------------------------------------------------**" << endl;
cout << "                                                                                                                    " << endl;

}
void time4(){
cout << "                                                                                                                    " << endl;
cout << "+----------------------------------------------+  SCREENING TIME  +------------------------------------------------+" << endl;
cout << "*------------------------------------------------------------------------------------------------------------------*" << endl;
cout << "|  DAY  |  SUNDAY[1]  |  MONDAY[2]  |  TUESDAY[3]  |  WEDNESDAY[4]  |  THURSDAY[5]  |  FRIDAY[6]   |  SATURDAY[7]  |" << endl;
cout << "*------------------------------------------------------------------------------------------------------------------*" << endl;
cout << "|  TIME |   10:00am   |   11:00am   |   10.30am    |    11:30am     |    11:45am    |   12:45pm    |       --      |" << endl;
cout << "|       |   12:00pm   |   01:00pm   |   12:30pm    |    02:15pm     |    01:45pm    |   02:30pm    |    11:00pm    |" << endl;
cout << "|       |   02:00pm   |             |   02:30pm    |    03:30pm     |    02:30pm    |      --      |    02:45pm    |" << endl;
cout << "|       |      --     |   05:00pm   |      --      |    05:30pm     |    04:50pm    |   06:00pm    |    05:00pm    |" << endl;
cout << "|       |   06:00pm   |   07:00pm   |   06:30pm    |    07:30pm     |    07:15pm    |   07:30pm    |    08:30pm    |" << endl;
cout << "**----------------------------------------------------------------------------------------------------------------**" << endl;
cout << "                                                                                                                    " << endl;

}
void time5(){
cout << "                                                                                                                    " << endl;
cout << "+----------------------------------------------+  SCREENING TIME  +------------------------------------------------+" << endl;
cout << "*------------------------------------------------------------------------------------------------------------------*" << endl;
cout << "|  DAY  |  SUNDAY[1]  |  MONDAY[2]  |  TUESDAY[3]  |  WEDNESDAY[4]  |  THURSDAY[5]  |  FRIDAY[6]   |  SATURDAY[7]  |" << endl;
cout << "*------------------------------------------------------------------------------------------------------------------*" << endl;
cout << "|  TIME |      --     |   11:00am   |   10.30am    |    10:30am     |    10:45am    |   12:45pm    |       --      |" << endl;
cout << "|       |      --     |   01:00pm   |   12:30pm    |    01:00pm     |    12:45pm    |   02:30pm    |    01:45pm    |" << endl;
cout << "|       |   02:00pm   |      --     |   02:30pm    |    04:30pm     |    03:30pm    |      --      |    03:45pm    |" << endl;
cout << "|       |   04:00pm   |   05:00pm   |      --      |    06:40pm     |    05:50pm    |   06:00pm    |    05:00pm    |" << endl;
cout << "|       |   06:00pm   |   07:00pm   |   06:30pm    |    08:30pm     |    07:35pm    |   07:30pm    |    06:30pm    |" << endl;
cout << "**----------------------------------------------------------------------------------------------------------------**" << endl;
cout << "                                                                                                                    " << endl;

}
void time6(){
cout << "                                                                                                                    " << endl;
cout << "+----------------------------------------------+  SCREENING TIME  +------------------------------------------------+" << endl;
cout << "*------------------------------------------------------------------------------------------------------------------*" << endl;
cout << "|  DAY  |  SUNDAY[1]  |  MONDAY[2]  |  TUESDAY[3]  |  WEDNESDAY[4]  |  THURSDAY[5]  |  FRIDAY[6]   |  SATURDAY[7]  |" << endl;
cout << "*------------------------------------------------------------------------------------------------------------------*" << endl;
cout << "|  TIME |   10:00am   |      --     |   10:30am    |    10:30am     |    10:45am    |      --      |       --      |" << endl;
cout << "|       |   12:15pm   |   02:00pm   |      --      |    01:30pm     |    12:45pm    |   02:30pm    |    11:00pm    |" << endl;
cout << "|       |   02:00pm   |   04:00pm   |   02:30pm    |    04:30pm     |    02:30pm    |   03:15pm    |    02:45pm    |" << endl;
cout << "|       |   04:00pm   |   06:00pm   |      --      |    06:30pm     |    05:50pm    |   05:00pm    |       --      |" << endl;
cout << "|       |      --     |   08:00pm   |   06:30pm    |    08:30pm     |    07:35pm    |   06:30pm    |    04:30pm    |" << endl;
cout << "**----------------------------------------------------------------------------------------------------------------**" << endl;
cout << "                                                                                                                    " << endl;

}

