#include "ResumeMakerHeaderFile.h"

void templateMaker::Functional_Resume(){
	    resume2();                           
}

void templateMaker::resume2(){
	system("cls"); 
	 cout<<endl<<endl;
 	 cout<<"                                     =============== FUNCTIONAL RESUME TEMPLATE ==============="<<endl<<endl;
 	 cout<<"                   ------------------------------------------------------------------------------------------"<<endl;
 	 cout<<"                  |                                                                                          |"<<endl;
	 cout<<"                  |   Summary                                                                                |"<<endl;
	 cout<<"                  |                                                                                          |"<<endl;
	 cout<<"                  |   Experienced customer service representative with a proven track record of boosting     |"<<endl;
	 cout<<"                  |   month-to-month sales. Able to predict, evaluate and meet the specific needs of cus     |"<<endl;
	 cout<<"                  |   tomers while maintaining an efficient work schedule. Awarded Employee of the Month     |"<<endl;
	 cout<<"                  |   for consistently receiving positive feedback. Seeking to leverage my experience in     |"<<endl;
	 cout<<"                  |   customer service to fill the Sales Clerk position at Blarney's.                        |"<<endl;
	 cout<<"                  |                                                                                          |"<<endl;
	 cout<<"                  |------------------------------------------------------------------------------------------|"<<endl;
	 cout<<"                  |                                                                                          |"<<endl;
	 cout<<"                  |   Relevant Skills                                                                        |"<<endl;
	 cout<<"                  |                                                                                          |"<<endl;
	 cout<<"                  |   Customer Service                                                                       |"<<endl;
	 cout<<"                  |         - Receive an average score of 95% on customer service feedback surveys by pro    |"<<endl;
	 cout<<"                  |           viding a friendly in store environment.                                        |"<<endl;
	 cout<<"                  |         - Enchace the customer experience by providing quality assistance and in-dept    |"<<endl;
	 cout<<"                  |           h product knowledge                                                            |"<<endl;
	 cout<<"                  |         - Educate customers on up and coming brands and the latest fashion trends.       |"<<endl;
	 cout<<"                  |                                                                                          |"<<endl;
	 cout<<"                  |   Sales                                                                                  |"<<endl;
	 cout<<"                  |         - Receive an average score of 95% on customer service feedback surveys by pro    |"<<endl;
	 cout<<"                  |           viding a friendly in store environment.                                        |"<<endl;
	 cout<<"                  |         - Enchace the customer experience by providing quality assistance and in-dept    |"<<endl;
	 cout<<"                  |           h product knowledge                                                            |"<<endl;
	 cout<<"                  |         - Educate customers on up and coming brands and the latest fashion trends.       |"<<endl;
	 cout<<"                  |                                                                                          |"<<endl;
	 cout<<"                  |   Merchandising                                                                          |"<<endl;
	 cout<<"                  |         - Receive an average score of 95% on customer service feedback surveys by pro    |"<<endl;
	 cout<<"                  |           viding a friendly in store environment.                                        |"<<endl;
	 cout<<"                  |         - Enchace the customer experience by providing quality assistance and in-dept    |"<<endl;
	 cout<<"                  |           h product knowledge                                                            |"<<endl;
	 cout<<"                  |         - Educate customers on up and coming brands and the latest fashion trends.       |"<<endl;
	 cout<<"                  |                                                                                          |"<<endl;
	 cout<<"                  |------------------------------------------------------------------------------------------|"<<endl;
	 cout<<"                  |                                                                                          |"<<endl;
     cout<<"                  |   Professional Experience                                                                |"<<endl;
     cout<<"                  |                                                                                          |"<<endl;
     cout<<"                  |   Ulta, Manhattan ,NY                               GAP, Albany,NY                       |"<<endl;
     cout<<"                  |   Sales Clerk                                       Sales Representative                 |"<<endl;
     cout<<"                  |   20XX-20XX                                         20XX-20XX                            |"<<endl;
     cout<<"                  |                                                                                          |"<<endl;
     cout<<"                  |   GAP, Albany, NY                                                                        |"<<endl;
     cout<<"                  |   Jr.Sales Representative                                                                |"<<endl;
     cout<<"                  |   20XX-20XX                                                                              |"<<endl;
     cout<<"                  |                                                                                          |"<<endl;
     cout<<"                  |------------------------------------------------------------------------------------------|"<<endl;
     cout<<"                  |                                                                                          |"<<endl;
     cout<<"                  |   Education                                                                              |"<<endl;
     cout<<"                  |                                                                                          |"<<endl;
     cout<<"                  |   Bachelor of Science in Business Adminstration (concentration finance) Honors: cum      |"<<endl;
     cout<<"                  |   laude(GPA: 3.78/4.0)                                                                   |"<<endl;
     cout<<"                  |   Louisiana State University, Baton Rouge, LA                                            |"<<endl;
     cout<<"                  |   May-20XX                                                                               |"<<endl;
 	 cout<<"                  |                                                                                          |"<<endl;
 	 cout<<"                   ------------------------------------------------------------------------------------------"<<endl;
 		  	 		     	  	   getchar();
 		  	 		     	  	   getchar();
 		  	 		     	  	   system("cls");
 		  	 		     	  	   print2();
     
}


void templateMaker::print2(){
		const int points_length = 75;
  	string summary,skill,point;
  	int number,number1,number2,number3;
  	system("cls");
  	cout<<"\n                                   ========== FIll THE INFORMATION FOR FUNCTIONAL RESUME ==========";
  	cout<<endl<<endl;
  	cout<<"  Explain short summary your profession: ";
  	cin.ignore();
  	getline(cin,summary);
    cout<<endl;
    

    cout << "  How many skills do you have?" << endl;
    cout << "- ";
    cin >> number1;
    cin.ignore();
    cout << endl;

    vector<string> skills(number1);
    vector<vector<string>> points(number1);

    for (int i = 0; i < number1; i++) {
        cout << "  Enter skill name: ";
        getline(cin, skills[i]);
        cout << endl;

        int number3;
        cout << "  How many points for this skill?" << endl;
        cout << "- ";
        cin >> number3;
        cin.ignore();
        cout << endl;

        cout << "   Points: " << endl;
        for (int j = 0; j < number3; j++) {
            string p;
            cout << "   - ";
            getline(cin, p);
            points[i].push_back(p);
        }
        cout << endl;
    }
	
	cout<<"  How many experience do you have in any company?"<<endl;
	cout<<"- ";
	cin>>number2;
	cin.ignore();
	cout<<endl;
	string brand[100] = "";
	string job[100] = "";
	string year[100] = "";
	for(int i=0;i<number2;i++){
		cout<<"  Enter store/brand city and state(comma-seperated): ";
		getline(cin,brand[i]);
		cout<<"  Enter job: ";
		getline(cin,job[i]);
		cout<<"  Enter year: ";
		getline(cin,year[i]);
        cout<<endl;
	}
	
	cout<<"  How many degree do you have?"<<endl;
	cout<<"- ";
	cin>>number3;
	cin.ignore();
	string faculty1[100];
	string institution1[100];
	string year2[100];
	cout<<endl;
    for(int i=0;i<number3;i++){
    	cout<<"  Enter your faculty with GPA: ";
    	getline(cin,faculty1[i]);
    	cout<<"  Enter your institution name: ";
    	getline(cin,institution1[i]);
    	cout<<"  Enter year: ";
    	getline(cin,year2[i]);
    	cout<<endl;
	}
	
	
	//--------------- print -----------------------------
	system("cls");
	cout<<endl<<endl;
 	 cout<<"                                     =============== FUNCTIONAL RESUME TEMPLATE ==============="<<endl<<endl;
 	 cout<<"                   ------------------------------------------------------------------------------------------"<<endl;
 	 cout<<"                  |                                                                                          |"<<endl;
	 cout<<"                  |   Summary                                                                                |"<<endl;
	 cout<<"                  |                                                                                          |"<<endl;
	 cout<<"                  |   ";
  	const int summary_length = 82;
	 int summaryCounter = 0;
	 for(int i=0;i<summary.length();i++){
	 	cout<<summary[i];
	 	summaryCounter++;
	 	if(summaryCounter == summary_length){
	 		cout<<"     |"<<endl;
	 		cout<<"                  |   ";
	 		summaryCounter =0;
		 }
	 }
	 if(summaryCounter > 0){
	 	int remaining = summary_length-summaryCounter;
	 	cout<<string(remaining,' ')<<"     |"<<endl;
	 }
      	
      //next 1
	 cout<<"                  |                                                                                          |"<<endl;
	 cout<<"                  |------------------------------------------------------------------------------------------|"<<endl;
	 cout<<"                  |                                                                                          |"<<endl;
	cout << "                  |   Relevant Skills                                                                        |" << endl;
    cout << "                  |                                                                                          |" << endl;

    for (int i = 0; i < number1; i++) {
        cout << "                  |   " << skills[i]
             << setw(88 - skills[i].length()) << "|" << endl;

        for (string p : points[i]) {
            cout << "                  |         - ";
            int counter = 0;

            for (size_t k = 0; k < p.length(); k++) {
                cout << p[k];
                counter++;

                if (counter == points_length && k + 1 < p.length()) {
                    cout <<"    |"<< endl;
                    cout << "                  |           ";
                    counter = 0;
                }
            }

            if (counter < points_length)
                cout << string(points_length - counter, ' ');

            cout << "    |" << endl;
        }

        cout << "                  |                                                                                          |" << endl;
    }
    
     cout<<"                  |------------------------------------------------------------------------------------------|"<<endl;
	 cout<<"                  |                                                                                          |"<<endl;
     cout<<"                  |   Professional Experience                                                                |"<<endl;
     cout<<"                  |                                                                                          |"<<endl;

    for (int i = 0; i < (number2+1)-number2; i++) {
    	
     if(number2 >= 1 ||number2 >= 2){
     cout<<"                  |   "<<brand[i]<<setw(50-brand[i].length())<<""<<brand[i+1]<<setw(38-brand[i+1].length())<<"|"<<endl;
     cout<<"                  |   "<<job[i]<<setw(50-job[i].length())<<""<<job[i+1]<<setw(38-job[i+1].length())<<"|"<<endl;
     cout<<"                  |   "<<year[i]<<setw(50-year[i].length())<<""<<year[i+1]<<setw(38-year[i+1].length())<<"|"<<endl;
     cout<<"                  |                                                                                          |"<<endl;	
		}
    
	 if(number2 >= 3 || number2 >= 4){
     cout<<"                  |   "<<brand[i+2]<<setw(50-brand[i+2].length())<<""<<brand[i+3]<<setw(38-brand[i+3].length())<<"|"<<endl;
     cout<<"                  |   "<<job[i+2]<<setw(50-job[i+2].length())<<""<<job[i+3]<<setw(38-job[i+3].length())<<"|"<<endl;
     cout<<"                  |   "<<year[i+2]<<setw(50-year[i+2].length())<<""<<year[i+3]<<setw(38-year[i+3].length())<<"|"<<endl;
     cout<<"                  |                                                                                          |"<<endl;
	 }
	 
     if(number2 >=5 || number2 >= 6){
     cout<<"                  |   "<<brand[i+4]<<setw(50-brand[i+4].length())<<""<<brand[i+5]<<setw(38-brand[i+5].length())<<"|"<<endl;
     cout<<"                  |   "<<job[i+4]<<setw(50-job[i+4].length())<<""<<job[i+5]<<setw(38-job[i+5].length())<<"|"<<endl;
     cout<<"                  |   "<<year[i+4]<<setw(50-year[i+4].length())<<""<<year[i+5]<<setw(38-year[i+5].length())<<"|"<<endl;
     cout<<"                  |                                                                                          |"<<endl;
	 }
    }
     cout<<"                  |------------------------------------------------------------------------------------------|"<<endl;
     cout<<"                  |   Education                                                                              |"<<endl;
     cout<<"                  |                                                                                          |"<<endl;
      for(int i=0;i<number3;i++){
     cout<<"                  |   "<<faculty1[i]<<setw(88-faculty1[i].length())<<"|"<<endl;
     cout<<"                  |   "<<institution1[i]<<setw(88-institution1[i].length())<<"|"<<endl;
     cout<<"                  |   "<<year2[i]<<setw(88-year2[i].length())<<"|"<<endl;
     cout<<"                  |                                                                                          |"<<endl;
	}
     cout<<"                   ------------------------------------------------------------------------------------------"<<endl;
     getchar();
     getchar();
     system("cls");
}


