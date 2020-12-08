#include <iostream> 
#include <iomanip> 
using namespace std; 
void game(int number, int answer); 
int main(void) 
{ 
	  int answer; 
	    cout<<"369 game start!!!"<<endl; 
	      cout<<setw(3)<<1<<" : "; 
	        cin>>answer; 
		  game( 1, answer ); 
		    return 0; 
} 
void game(int number, int answer) 
{ 
	  if( answer==0 ) 
		    { 
			        if( number%10==3 || number%10==6 || number%10==9 ) 
					    { 
						          cout<<setw(3)<<++number<<" : "; 
							        cin>>answer; 
								      game(number, answer); 
								         } 
				   else 
					      { 
						           cout<<"게임 종료"<<endl; 
							        return; 
								  } 
		    } 
	  else 
	  { 
		    if( number%10==3 || number%10==6 || number%10==9 ) 
			      { 
				          cout<<"게임 종료"<<endl; 
					      return; 
					       } 
		     else if( number!=answer ) 
			      { 
				         cout<<"게임 종료"<<endl; 
					    return; 
			      } 
		    else 
		    { 
			      cout<<setw(3)<<++number<<" : "; 
			        cin>>answer; 
				  game(number, answer); 
		    } 
	  } 
} 
