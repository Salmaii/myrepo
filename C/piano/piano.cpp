
/*
int main (){
	
	int key;
	
	while(true){
		scanf("%s", &key);
		
		//notas brancas 
		if(key == 'x'){
            Beep (261, 600);
		}
		
		else 
		if(key == 'c'){
Beep (293, 2000);
		}
		
		else 
		if(key == 'v'){
Beep (329, 2000);
		}
		
		else 
		if(key == 'b'){
Beep (349, 2000);
		}
		
		else 
		if(key == 'n'){
Beep (392, 2000);
		}
		
		else 
		if(key == 'm'){
Beep (440, 2000);
		}
		
		else 
		if(key == ','){
Beep (493, 2000);
		}
		
		else 
		if(key == '.'){
			Beep (293, 600);
		}
		
		//notas pretas
		else 
		if(key == 'd'){
			Beep (293, 600);
		}
		
		else 
		if(key == 'f'){
			Beep (293, 600);
		}
		
		else 
		if(key == 'h'){
			Beep (293, 600);
		}
		
		else 
		if(key == 'j'){
			Beep (293, 2000);
		}
		
		else 
		if(key == 'k'){
			Beep (293, 2000);
		}
		
	}
	*/
	
#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

int main(int argc, char *argv[])
{
  while(true){
              cout<<"Input note: ";
              char note = getch();
              
              
              //do re mi fa sol la si do re mi fa sol
              if(note == 'a'){
                      Beep(261,100);
                      }
              if(note == 's'){
                      Beep(293,100);
                      }
              if(note == 'd'){
                      Beep(329,100);
                      }
              if(note == 'f'){
                      Beep(349,100);
                      }
              if(note == 'g'){
                      Beep(392,100);
                      }
              if(note == 'h'){
                      Beep(440,100);
                      }
              if(note == 'j'){
                      Beep(493,100);
                      }                      
              if(note == 'k'){
                      Beep(523,100);
                      }                      
              if(note == 'l'){
                      Beep(587,100);
                      }
              if(note == ';'){
                      Beep(659,100);
                      }  
              if(note == '\''){
                      Beep(698,100);
                      } 
               if(note == '\\'){
                      Beep(784,100);
                      } 
                      
               //rebemol mibemol solbemol labemol sibemol rebemol mibemol solbemol
               if(note == 'w'){
                      Beep(277,100);
                      } 
                      if(note == 'e'){
                      Beep(311,100);
                      }
                      if(note == 't'){
                      Beep(370,100);
                      }
                      if(note == 'y'){
                      Beep(415,100);
                      }
                      if(note == 'u'){
                      Beep(466,100);
                      }
                      if(note == 'o'){
                      Beep(554,100);
                      }
                      if(note == 'p'){
                      Beep(622,100);
                      }
                      if(note == ']'){
                      Beep(740,100);
                      }     
                      
            system("cls");          
}  
    
    return EXIT_SUCCESS;

	return 0;
}
