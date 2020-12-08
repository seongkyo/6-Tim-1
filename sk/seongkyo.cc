#include <iostream> 
#include <iomanip> 
using namespace std; 
void game_2(int number_2, int answer_2); 
int main(void) 
{ 
	  int answer_2; 
	    cout<<"369 game start!!!"<<endl; 
	      cout<<setw(3)<<1<<" : "; 
	        cin>>answer_2; 
		  game_2( 1, answer_2 ); 
		    return 0; 
} 
void game_2(int number_2, int answer_2) 
{ 
	  if( answer_2==0 ) 
		    { 
			        if( number_2%10==3 || number_2%10==6 || number_2%10==9 ) 
					    { 
						          cout<<setw(3)<<++number_2<<" : "; 
							        cin>>answer_2; 
								      game_2(number_2, answer_2); 
								         } 
				   else 
					      { 
						           cout<<"게임 종료"<<endl; 
							        return; 
								  } 
		    } 
	  else 
	  { 
		    if( number_2%10==3 || number_2%10==6 || number_2%10==9 ) 
			      { 
				          cout<<"게임 종료"<<endl; 
					      return; 
					       } 
		     else if( number_2!=answer_2 ) 
			      { 
				         cout<<"게임 종료"<<endl; 
					    return; 
			      } 
		    else 
		    { 
			      cout<<setw(3)<<++number_2<<" : "; 
			        cin>>answer_2; 
				  game_2(number_2, answer_2); 
		    } 
	  } 
} 
