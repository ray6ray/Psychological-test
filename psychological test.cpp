// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<time.h>
#include<stdio.h>
using namespace std;

int main()
{

	char usr_answer;
	int sum = 0;
	int i;



	cout << "welcome to the weekly psychological test \n\n";

	for (i = 0;i<20;i++)
	{   
		if (i == 0)
		{
			cout << "Q1: How was your last week? \n A.fair B.good C.great \n";
			cin >> usr_answer;
		}

		else if (i == 1)
		{
			cout << "Q2: Which book do you want to read?\n A.Faust by Goethe B.Beyond good and evil by Nietzsche C.Enders game by Orson Scott Card \n";
			cin >> usr_answer;
		}

		else if (i == 2)
		{
			cout << "Q3: How many new songs did you listen to last week?\n A.<15 B.15-50 C.>50 \n";
			cin >> usr_answer;
		}

		else if (i == 3)
		{
			cout << "Q4: which of the following house attracts you?\n A.Gothic castle B.Luxury apartment C.Flower Garden \n";
			cin >> usr_answer;
		}

		else if (i == 4)
		{
			cout << "Q5: How many people did you talk to last week? \n A.0-10 B.10-25 C.>25 \n";
			cin >> usr_answer;
		}

		else if (i == 5)
		{
			cout << "Q6: Which drink will you choose?\n A.liquor B.Coke C.Earl Grey \n";
			cin >> usr_answer;
		}

		else if (i == 6)
		{
			cout << "Q7: If you have 8 days off, where do you want to go? \n A.Stay home B.Countryside C.Go abroad \n";
			cin >> usr_answer;
		}

		else if (i == 7)
		{
			cout << "Q8: How often do you call your parents?\n A.Monthly B.Biweekly C.Weekly \n";
			cin >> usr_answer;
		}

		else if (i == 8)
		{
			cout << "Q9: Which activity are you interested in?\n A.go to a nightclub B.visit a friend C.play sports \n";
			cin >> usr_answer;
		}

		else if (i == 9)
		{
			cout << "Q10: There is a bird flying out of your window, which kind of bird is that?\n A.raven B.eagle C.parrot \n";
			cin >> usr_answer;
		}
		else {
			continue;
		}
			
		if (usr_answer == 'A'||usr_answer =='a')
			cout << "you got 1 point.\n\n";
		else if (usr_answer =='B'||usr_answer =='b')
			cout << "you got 2 points.\n\n";
	    else if (usr_answer == 'C'|| usr_answer =='c')
			cout << "you got 3 points.\n\n";
		else
			cout << "please enter a valid answer.";
		
		switch (usr_answer)
		{
		case 'A':sum = sum + 1; break;
		case 'B':sum = sum + 2; break;
		case 'C':sum = sum + 3; break;
		case 'a':sum = sum + 1; break;
		case 'b':sum = sum + 2; break;
		case 'c':sum = sum + 3; break;
		default: break;
		}


	}

	cout << "Many thanks for answering all the questions.\n";
	cout << "Here is your result:\n";
	if (sum >= 25)  
		cout << "You are a very optimistic person.Keep going with what you are doing currently.\n Read various books will broaden your knowledge and make your life more interesting.\n You have a big dream in your mind and I believe it will come true.\n Have a great day!\n" << endl;
	else if (sum >= 20)
		cout << "you are quite a positive person and you might have many friends.\n Although you have enough friends but I still recommend you to talk to some of your collegues/students you don't usually talk to.\n I suggest you to find out a new way of entertainment next week.\n Have a great day! \n" << endl;
	else if (sum >= 15)
		cout << "Maybe you need to challenge yourself more.\n Go to a museum with your friend and I bet you will find something exciting.\n Do something you used to enjoy a lot in the past, and I guess you will experience something different this time.\n Have a great day! \n" << endl;
	else if (sum >= 10)
		cout << "I think you should try to find some new things to do. Such as listening to a music genre you have never listened to.\n Make a phone call with you best friend or your parents.\n Go to gym regularly and do more exercise.\n Have a great day! \n " << endl;
	else 
		cout << "Go out and make some new friends. You need fresh air and energy.Have a great day! \n " << endl;
	system("pause");
	return 0;
}

