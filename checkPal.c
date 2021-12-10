#include <stdio.h>
#include <string.h>
int isPalindrome(char in[]){
    //will parse the message from both ends
    //i starts from the beginning
    //j starts from the end
    int i = 0;
    int j = strlen(in)-1;
    while(i < j){
	//if there is a single mismatching
	//char from both sides, it is not
	//a palindrome(return 0)
        if(in[i] != in[j])
            return 0;
	//inc i and dec j to get
	//closer to middle
        i++;
        j--;
    }
    return 1;
}
int main() {
	//will hold message chars
        char mes[100];
	//prompts user for message
        printf("Enter message: ");
        scanf("%[^\n]s", mes);
	//1 means it is a palindrome
        if(isPalindrome(mes) == 1)
            printf("Message is a palindrome");
        else
            printf("Message is not a palindrome");
        return 0;
}
