	#include <stdio.h>
        #include <string.h>
        int main(){
            //pass holds the input password by user
            char pass[10];
            //holds number of points deducted for program
            int pts = 0;
            //holds consecutive char count
            int c1 = 0;
            int c2 = 0;
            //prompting for password and scanning input
            printf("Enter your password: ");
            scanf("%s", pass);
	    //checks if string length is below 10
            if(strlen(pass) < 10)
                //deducts 5 points for every missing character
                pts = (10 - strlen(pass))*5;
            //loop checks if there are any lowercase chars
            int i;
	    //deducts 20 points if there is no lowercase
            pts += 20;
            for(i = 0; i < strlen(pass); i++){
                if (pass[i] >= 'a' && pass[i] <= 'z'){
		    //resets pts if lowercase is found
                    pts -= 20;
		    //will cause loop to end after this 
                    i = strlen(pass);
                }
            }
            
            //loop checks if there are any uppercase chars
            int i1 = 0;
            //deducts 20 points if there are no uppercase
            pts += 20;
            while(i1 < strlen(pass)){
                if (pass[i1] >= 'A' && pass[i1] <= 'Z'){
		    //will reset pts if uppercase is found
                    pts -= 20;
		    //will cause loop to end
                    i1 = strlen(pass);
                }
                i1++;
            }
            //checks if there are any number chars
            int i2;
	    //deducts 20 points if no number is found
            pts += 20;
            for(i2 = 0; i2 < strlen(pass); i2++){
                if (pass[i2] >= '0' && pass[i2] <= '9'){
		    //resets pts if number is found
                    pts -= 20;
		    //ends loop
                    i2 = strlen(pass);
                }
            }
            //will check if either the number count or
            //letter count goes above 2 and will reset
            //counts when there isn't a consective char
            int i3;
            for(i3 = 0; i3 < strlen(pass); i3++){
		//checks for numbers
                if (pass[i3] >= '0' && pass[i3] <= '9'){
                    c1++;
                    if(c1 > 2){
                    //if c1>2 then there are more than 2
                    //consecutive chars(numbers)
                        pts += 20;
			//ends loop after this iteration
                        i3 = strlen(pass);
                    }
		    //resets if the chars aren't consecutive
                    c2 = 0;
                } //checks for letters
                else{
                    c2++;
                    if(c2 > 2){
                    //if c2>2 then there are more than 2
                    //consecutive chars(letters)
                        pts += 20;
			//ends loop after this iteration
                        i3 = strlen(pass);
                    }
		    //resets if the chars aren't consecutive
                    c1 = 0;
                }
            }
            if(pts > 30)
                printf("%d The password is unsafe! Please reset.", pts);
            else
                printf("%d The password is safe.", pts);
            return 0;
        }

