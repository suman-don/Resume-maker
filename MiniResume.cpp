#include "ResumeMakerHeaderFile.h"

void templateMaker::Mini_Resume(){
 resume6();
	
}
void templateMaker::resume6(){
		system("cls"); 
	 cout<<endl<<endl;
 	 cout<<"                                     =============== MINI RESUME TEMPLATE ==============="<<endl<<endl;
 	 cout<<"                                      -----------------------------------------------------------------------"<<endl;
     cout<<"                                     |                                                                       |"<<endl;
 	 cout<<"                           FRONT     |                                 JOHN SMITH                            |"<<endl;
	 cout<<"                                     |                            COMPUTER PROGRAMMER                        |"<<endl;
	 cout<<"                                     |                                                                       |"<<endl;
	 cout<<"                                     |                              848 Abbott Road                          |"<<endl;
	 cout<<"                                     |                           Stillfield, CT 08888                        |"<<endl; 
	 cout<<"                                     |                                999-999-999                            |"<<endl;
	 cout<<"                                     |                             jsmith@abcd.com                           |"<<endl;
	 cout<<"                                     |                                                                       |"<<endl;
	 cout<<"                                      -----------------------------------------------------------------------"<<endl;
	 cout<<"                                                                                                               "<<endl;
	 cout<<"                                      -----------------------------------------------------------------------"<<endl;
     cout<<"                                     |                                                                       |"<<endl;
 	 cout<<"                           BACK      |                        Experienced,entreprenurial,                    |"<<endl;
	 cout<<"                                     |                        dynamic computer programmer.                   |"<<endl;
	 cout<<"                                     |                                                                       |"<<endl;
	 cout<<"                                     |      - Five years experience in successful design, development,       |"<<endl;
	 cout<<"                                     |        and support of live use applicants.                            |"<<endl; 
	 cout<<"                                     |      - C++,Java,C,ASP.NET,SQL,MS Visual Studio,Eclipse,JBoss,         |"<<endl;
	 cout<<"                                     |        Tomcat.                                                        |"<<endl;
	 cout<<"                                     |      - Certifications: CCNA, Unicenter Certified Engineer.            |"<<endl;
	 cout<<"                                     |                                                                       |"<<endl;
	 cout<<"                                      -----------------------------------------------------------------------"<<endl;
 		  	 		     	  	   getchar();
 		  	 		     	  	   getchar();
 		  	 		     	  	   system("cls");
 		  	 		     	  	   print1();
}
void templateMaker::print1(){
		string fullname,jobtitle,streetAddress,city,state,postalcode,phone,email,summary,experience,skills,certification;
    	
    	cout<<"\n\n                      ========== Fill the information for mini resume =========="<<endl<<endl;
    	cout << "  Enter your full name: ";
    	getline(cin,fullname);
        cout << "\n  Enter your job title (e.g., Computer Programmer): ";
        getline(cin,jobtitle);
		cout << "\n  Enter your street address: ";
        getline(cin,streetAddress);
		cout << "\n  Enter your city: ";
		getline(cin,city);
		cout << "\n  Enter your state: ";
		getline(cin,state);
		cout << "\n  Enter your postal code: ";
		getline(cin,postalcode);
		cout << "\n  Enter your phone number: ";
        getline(cin,phone);
		cout << "\n  Enter your email address: ";
        getline(cin,email);
		cout << "\n  Enter a short professional summary (2–3 lines): ";
        getline(cin,summary);
		cout << "\n  Enter your total years of experience: ";
        getline(cin,experience);
		cout << "\n  Enter your key programming skills (e.g., C++, Java, etc.): ";
        getline(cin,skills);
		cout << "\n  Enter your certifications: ";
        getline(cin,certification);

    	string name= "";
    	string job = "";
    	for(int i=0;i<fullname.length();i++){
    		name += toupper(fullname[i]);
		}
		for(int i=0;i<jobtitle.length();i++){
			job += toupper(jobtitle[i]);
		}
		string cityAdd = "";
		for(int i=0;i<city.length();i++){
			if(city[i] == city[0]){
				cityAdd += toupper(city[0]);
			}
			cityAdd += city[i+1];
		}
		string stateAdd = "";
		for(int i=0;i<state.length();i++){
			stateAdd += toupper(state[i]);
		}
		
	
  		system("cls");
	 cout<<endl<<endl;
 	 cout<<"                                                =============== MINI RESUME TEMPLATE ==============="<<endl<<endl;
 	 cout<<"                                      -----------------------------------------------------------------------"<<endl;
     cout<<"                                     |                                                                       |"<<endl;
 	 cout<<"                           FRONT     |                                 "<<name<<setw(39-name.length())<<"|"<<endl;
	 cout<<"                                     |                            "<<job<<setw(44-job.length())<<"|"<<endl;
	 cout<<"                                     |                                                                       |"<<endl;
	 string streetAdd = "";
	 for(int i=0;i<streetAddress.length();i++){
	 	streetAdd += toupper(streetAddress[i]);
	 }
	 cout<<"                                     |                              "<<streetAdd<<setw(42-streetAddress.length())<<"|"<<endl;
	 cout<<"                                     |                           "<<cityAdd<<", "<<stateAdd<<" "<<postalcode<<setw(45-(city.length()+state.length()+postalcode.length()+3))<<"|"<<endl; 
	 cout<<"                                     |                                "<<phone<<setw(40-phone.length())<<"|"<<endl;
	 cout<<"                                     |                             "<<email<<setw(43-email.length())<<"|"<<endl;
	 cout<<"                                     |                                                                       |"<<endl;
	 cout<<"                                      -----------------------------------------------------------------------"<<endl;
	 cout<<"                                                                                                               "<<endl;
	 cout<<"                                      -----------------------------------------------------------------------"<<endl;
     cout<<"                                     |                                                                       |"<<endl;
 	 cout<<"                           BACK      |          ";
 	//----------------------- summary ----------------- 
 	 int counter = 0;
 	 const int length = 53;
 	 for(int i=0;i<summary.length();i++){
 	 	cout<<summary[i];
 	 	counter++;
 	 	if(counter == length){
 	 		cout<<"        |"<<endl;
 	 		cout<<"                                     |          ";
 	 		counter = 0;
		  }
	  }
	  if(counter > 0){
	  	int remaining = length - counter;
	  	cout<<string(remaining,' ')<<"        |"<<endl;
	  }
 	 //-------------------- end summary ------------------
 	 
	 cout<<"                                     |                                                                       |"<<endl;
	 cout<<"                                     |      - ";
	 
	 const int experience_length= 56;
	 int counter2 = 0;
	 for(int i=0;i<experience.length();i++){
	 	cout<<experience[i];
	 	counter2++;
	 	if(counter2 == experience_length){
	 		cout<<"       |"<<endl;
	 		cout<<"                                     |        ";
	 		counter2 = 0;
		 }
	 }
	 if(counter > 0 ){
	 	int remaining2 = experience_length- counter2;
	 	cout<<string(remaining2,' ')<<"       |"<<endl;
	 }
	 //-------------- end experience --------------------
	 
	 cout<<"                                     |      - ";
	 const int skill_length = 56;
	 int counter3 = 0;
	 string skillAdd = "";
	 for(int i=0;i<skills.length();i++){
	 	skillAdd += toupper(skills[i]);
	 }
	 
	 for(int i=0;i<skillAdd.length();i++){
	 	cout<<skillAdd[i];
	 	counter3++;
	 	if(counter3 == skill_length){
	 	    cout<<"       |"<<endl;
	 		cout<<"                                     |        ";
	 		counter3 = 0;	
		 }
	 }
    
     if(counter3 > 0){
     	int remaining3 = skill_length-counter3;
     	cout<<string(remaining3,' ')<<"       |"<<endl;
	 }
 
  //---------------- certification ----------------------
	 cout<<"                                     |      - Certifications:";
	 const int certification_length = 41;
	 int counter4 = 0;
	 string certificationAdd = "";
	 for(int i=0;i<certification.length();i++){
	 	certificationAdd += toupper(certification[i]);
	 }
	 for(int i=0;i<certificationAdd.length();i++){
	 	cout<<certificationAdd[i];
	 	counter4++;
	 	if(counter4 == certification_length){
	 	    cout<<"       |"<<endl;
	 		cout<<"                                     |                       ";
	 		counter4 = 0;	
		 }
	 }
    
     if(counter4 > 0){
     	int remaining4 = certification_length-counter4;
     	cout<<string(remaining4,' ')<<"       |"<<endl;
	 }
	 
	 cout<<"                                     |                                                                       |"<<endl;
	 cout<<"                                      -----------------------------------------------------------------------"<<endl;
 		  	 		     	  	   getchar();
 		  	 		     	  	   getchar();
 		  	 		     	  	   system("cls");
  
  	ofstream outfile("resume.txt",ios::app);
  	if(!outfile){
  		cout<<"Unable to open file."<<endl;
	  }
	  outfile<<name<<"|"<<job<<"|"<<streetAdd<<"|"<<cityAdd<<"|"<<stateAdd<<"|"<<postalcode<<"|"<<phone<<"|"<<email<<"|"<<summary<<"|"<<experience<<"|"<<skillAdd<<"|"<<certificationAdd<<"|\n";
	  outfile.close();

}

 void templateMaker::printSave1(){
  	ifstream infile("resume.txt");
  	if(!infile){
  		cout<<"Unable to open file."<<endl;
	  }
	  string line;
	  while(getline(infile,line)){
	  	stringstream ss(line);
	  	string readName,readJob,readStreet,readCity,readState,readPostalCode,readPhone,readEmail,readSummary,readExperience,readSkill,readCertification;
	  	
	  	getline(ss,readName,'|');
	  	getline(ss,readJob,'|');
	  	getline(ss,readStreet,'|');
	  	getline(ss,readCity,'|');
	  	getline(ss,readState,'|');
        getline(ss,readPostalCode,'|');
        getline(ss,readPhone,'|');
        getline(ss,readEmail,'|');
	  	getline(ss,readSummary,'|');
	  	getline(ss,readExperience,'|');
	  	getline(ss,readSkill,'|');
	  	getline(ss,readCertification,'|');
	  	
//	 system("cls");
	 cout<<endl<<endl;
 	 cout<<"                                                =============== MINI RESUME TEMPLATE ==============="<<endl<<endl;
 	 cout<<"                                      -----------------------------------------------------------------------"<<endl;
     cout<<"                                     |                                                                       |"<<endl;
 	 cout<<"                           FRONT     |                                 "<<readName<<setw(39-readName.length())<<"|"<<endl;
	 cout<<"                                     |                            "<<readJob<<setw(44-readJob.length())<<"|"<<endl;
	 cout<<"                                     |                                                                       |"<<endl;
	 string streetAdd = "";
	 for(int i=0;i<readStreet.length();i++){
	 	streetAdd += toupper(readStreet[i]);
	 }
	 cout<<"                                     |                              "<<readStreet<<setw(42-readStreet.length())<<"|"<<endl;
	 cout<<"                                     |                           "<<readCity<<", "<<readState<<" "<<readPostalCode<<setw(45-(readCity.length()+readState.length()+readPostalCode.length()+2))<<"|"<<endl; 
	 cout<<"                                     |                                "<<readPhone<<setw(40-readPhone.length())<<"|"<<endl;
	 cout<<"                                     |                             "<<readEmail<<setw(43-readEmail.length())<<"|"<<endl;
	 cout<<"                                     |                                                                       |"<<endl;
	 cout<<"                                      -----------------------------------------------------------------------"<<endl;
	 cout<<"                                                                                                               "<<endl;
	 cout<<"                                      -----------------------------------------------------------------------"<<endl;
     cout<<"                                     |                                                                       |"<<endl;
 	 cout<<"                           BACK      |          ";
 	//----------------------- summary ----------------- 
 	 int counter = 0;
 	 const int length = 53;
 	 for(int i=0;i<readSummary.length();i++){
 	 	cout<<readSummary[i];
 	 	counter++;
 	 	if(counter == length){
 	 		cout<<"        |"<<endl;
 	 		cout<<"                                     |          ";
 	 		counter = 0;
		  }
	  }
	  if(counter > 0){
	  	int remaining = length - counter;
	  	cout<<string(remaining,' ')<<"        |"<<endl;
	  }
 	 //-------------------- end summary ------------------
 	 
	 cout<<"                                     |                                                                       |"<<endl;
	 cout<<"                                     |      - ";
	 
	 const int experience_length= 56;
	 int counter2 = 0;
	 for(int i=0;i<readExperience.length();i++){
	 	cout<<readExperience[i];
	 	counter2++;
	 	if(counter2 == experience_length){
	 		cout<<"       |"<<endl;
	 		cout<<"                                     |        ";
	 		counter2 = 0;
		 }
	 }
	 if(counter > 0 ){
	 	int remaining2 = experience_length- counter2;
	 	cout<<string(remaining2,' ')<<"       |"<<endl;
	 }
	 //-------------- end experience --------------------
	 
	 cout<<"                                     |      - ";
	 const int skill_length = 56;
	 int counter3 = 0;
	 string readSkill1 = "";
	 for(int i=0;i<readSkill.length();i++){
	 	readSkill1 += toupper(readSkill[i]);
	 }
	 
	 for(int i=0;i<readSkill.length();i++){
	 	cout<<readSkill[i];
	 	counter3++;
	 	if(counter3 == skill_length){
	 	    cout<<"       |"<<endl;
	 		cout<<"                                     |        ";
	 		counter3 = 0;	
		 }
	 }
    
     if(counter3 > 0){
     	int remaining3 = skill_length-counter3;
     	cout<<string(remaining3,' ')<<"       |"<<endl;
	 }
 
  //---------------- certification ----------------------
	 cout<<"                                     |      - Certifications:";
	 const int certification_length = 41;
	 int counter4 = 0;
	 string certificationAdd = "";
	 for(int i=0;i<readCertification.length();i++){
	 	certificationAdd += toupper(readCertification[i]);
	 }
	 for(int i=0;i<certificationAdd.length();i++){
	 	cout<<certificationAdd[i];
	 	counter4++;
	 	if(counter4 == certification_length){
	 	    cout<<"       |"<<endl;
	 		cout<<"                                     |                       ";
	 		counter4 = 0;	
		 }
	 }
    
     if(counter4 > 0){
     	int remaining4 = certification_length-counter4;
     	cout<<string(remaining4,' ')<<"       |"<<endl;
	 }
	 
	 cout<<"                                     |                                                                       |"<<endl;
	 cout<<"                                      -----------------------------------------------------------------------"<<endl;
 		  	 		     	  	 
	  }
  }
  




