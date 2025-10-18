#include "ResumeMakerHeaderFile.h"
 int main(){
 	int option;
 	WelcomePage w;
 	w.welcome();
 	
 	templateMaker t;
 	        while(1){
        	 cout<<"\n\n\n\n\n";
 	         cout<<"                                            =============== Home Page ==============="<<endl<<endl;
 		  	 cout<<"                                                      1. Template"<<endl;
 		  	 cout<<"                                                      2. History Resume"<<endl;
 		  	 cout<<"                                             Enter your option: ";
 		  	 cin>>option;
 		  	 switch(option){
 		  	 	case 1: 
					   
					   system("cls"); 
 	                   cout<<"\n\n\n\n\n";
 	                   cout<<"                                            =============== Templates ==============="<<endl<<endl;
 		  	           cout<<"                                                      1. Chronological Resume"<<endl;
 		  	           cout<<"                                                      2. Functional Resume"<<endl;
 		  	           cout<<"                                                      3. Combinational (Hybrid) Resume"<<endl;
 		  	           cout<<"                                                      4. Targeted Resume"<<endl;
 		  	           cout<<"                                                      5. Infographic Resume"<<endl;
 		  	           cout<<"                                                      6. Mini Resume"<<endl;
 		  	           cout<<"                                                      7. Federal Resume"<<endl;
 		  	           cout<<"                                             Enter your choice: ";
 		  	           cin>>option;
 		  	 		     switch(option){
 		  	 		     	case 1: t.Chronological_Resume();
 		  	 		     	  	break;
 		  	 		     	case 2: t.Functional_Resume();
 		  	 		     	  	break;
 		  	 		     	case 3: t.Combinational_Resume();
 		  	 		     	  	break;
 		  	 		     	case 4: t.Targeted_Resume();
 		  	 		     		break;
 		  	 		     	case 5: t.Infographic_Resume();
 		  	 		     		break;
 		  	 		     	case 6: t.Mini_Resume();
 		  	 		     		break;
 		  	 		     	case 7: t.Federal_Resume();
 		  	 		     		break;
 		  	 		     	default:  system("cls"); 
								      cout<<"Invaild Choice"<<endl;
 		  	 		     	          getchar();
 		  	 		     	  	      getchar();
 		  	 		     	  	      system("cls");
 		  	 		     	    break;
 		  	 		     		
							 }
 		  	 		
 		  	 		 break;
 		  	 	case 2:  system("cls");
 		  	 	         cout<<"\n\n\n\n\n";
 	                     cout<<"                                            =============== Resume Recorded ==============="<<endl<<endl;
 		  	             cout<<"                                                      1. All Resume"<<endl;
 		  	             cout<<"                                                      2. Search Resume"<<endl;
 		  	             cout<<"                                                      3. Delete Resume"<<endl;
 		  	             cout<<"                                             Enter your option: ";
 		  	 		     cin>>option;
 		  	 		     switch(option){
 		  	 		     	case 1: system("cls");
 		  	 		     		    t.printSave1();
 		  	 		     		    getchar();
 		  	 		     		    getchar(); 
 		  	 		     		    system("cls");
 		  	 		     		break;
 		  	 		     	case 2: system("cls");
 		  	 		     		
 		  	 		     		break;
 		  	 		     	case 3: system("cls");
 		  	 		     		
 		  	 		     		break;
 		  	 		     	default:
 		  	 		     		break;
							 }
 		  	 		 break;
 		  	 	default:  
 		  	 	         cout<<"You choose a wrong option..."<<endl;
 		  	 	     break;
				}
			}
				
 	return 0;
 }
