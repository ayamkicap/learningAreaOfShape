#include<iostream>
#include<fstream>
using namespace std;

int const SIZE = 12;

int checkValidity(int*);//using pointer
int validityID(int);
int checkingQuestionValid(int);
void Triangle(float[],float[],float[],int);
void Rectangle(float[],float[],float[],int);
void Parallelogram(float[],float[],float[],int);
int createScore();
int countID();
void updateScore(int ,int ,int );


int main()
{
	int studentID;
	bool conti;
	ifstream infile;
	
	do
	{
		int ch;
		int studentID = createScore();//taking student ID in createScore() function
		ch = checkingQuestionValid(studentID); // check validity student and take ch in checkingQuestionValid(studentID) function
		
		cout <<"--------------------------------------------\n"<<endl<<endl;
		
		if(ch == 1)//if user choosing 1
		{
			infile.open("Triangle.txt");//open triangle file
			float Area[SIZE],Base[SIZE],High[SIZE];
			for(int i = 0; i<SIZE ; i++)
			{
				infile >> Area[i] >> Base[i] >> High[i]; //take a data file 
			}
			
			Triangle(Area,Base,High,studentID); // go to triangle function
			infile.close();
		}
		else if(ch == 2)//if user choosing 2
		{
			infile.open("Rectangle.txt");//open rectangle file
			float Area[SIZE],Width[SIZE],Length[SIZE];
			for(int i = 0; i<SIZE ; i++)
			{
				infile >> Area[i] >> Width[i] >> Length[i]; // take a data file
			}
			
			Rectangle(Area,Width,Length,studentID); //go to rectangle function
			infile.close();
		}
			
		else if(ch == 3)
		{
			infile.open("Parallelogram.txt");//open parallelogram file
			float Area[SIZE],Base[SIZE],Height[SIZE];
			for(int i = 0; i<SIZE ; i++)
			{
				infile >> Area[i] >> Base[i] >> Height[i]; // take a data file
			}
			
			Parallelogram(Area,Base,Height,studentID); //go to parallelogram function
			infile.close();
		}
		else
		{
			break;
		}
		cout << endl<<endl;	
		cout <<"--------------------------------------------\n"<<endl;
		cout << "Do you want to continue?"<<endl
			 << "'1' for continue '0' for stop"<<endl
			 << "Enter: ";
		cin >> conti;
		
	}while (conti);//repeat if user want to continue
	
	cout << "Thank you for chosing this program.";
	
}

////////////////////////////////////////////////////////////////////////////////////////////


void Triangle(float AreaQ[],float BaseQ[],float HighQ[],int studentID)//function about triangle
{
	cout << "*********************************"<<endl;
	cout << "*  WELCOME TO TRIANGLE SESSION  *"<<endl;
	cout << "*********************************\n"<<endl;
	cout << endl;
	float ansArea,ansHigh,ansBase, mark1=0,mark2=0,mark3=0,Tmark=0;
	float A,B,H,ans;
	string ch;
	do
	{
		//learning function
		cout <<"Enter three value "<<endl;
		cout <<"Enter 0 if you want to find the answer: "<<endl;
		cout <<endl;
		cout << "Area: ";
		cin >> A;
		cout << "Base: ";
		cin >> B;
		cout << "Height: ";
		cin >> H;
		
		//validation
		if(A == 0)
		{
			ans = 1/2 * B * H;
		}
		else if(B == 0)
		{
			ans = (2 * A) / H;
		}
		else
		{
			ans = (2 * A) / B;
		}
		
		cout << "your answer is: "<<ans<<endl;
		cout <<"--------------------------------------------"<<endl;
		cout << endl;
		cout << endl;
			
		cout << "Enter X to continue and Y to stop :";
		cin >> ch;
		cout << endl;
	}while(ch == "X" || ch == "x");
	system("pause");
	cout << endl;
	cout <<"--------------------------------------------"<<endl;
	cout << "This is question session for triangle/n"<<endl;
	cout << "Given the formula of triangle: "<<endl;
	cout << "Area = 1/2 X Base X Height"<<endl;
	cout <<"--------------------------------------------"<<endl;
	cout << endl;
	system("pause");
	cout << endl;
	cout << "_____________________________________"<<endl;
	for(int i = 0; i < 4 ; i++)//Q1 unti Q4
	{
		cout << "Question: "<< i+1 <<endl;
		cout << "Given "<<endl;
		cout << "Base = "<< BaseQ[i] <<endl;
		cout << "Height = "<< HighQ[i] <<endl;
		cout << endl;
		cout << "What is the Area of this triangle? "<<endl;
		cout << "Area : ";
		cin >> ansArea;
		cout << "_____________________________________"<<endl;
		if(ansArea == AreaQ[i])//to check whether user input correct or not
		{
			cout << "correct!"<<endl;
			mark1 += 1;
		}
		else
		{
			cout << "false!"<<endl;
		}
		cout << "_____________________________________"<<endl;
		cout << endl;
	}
	cout <<endl;
	cout <<"--------------------------------------------"<<endl;
	cout <<"Mark for session 1: "<< mark1<<endl;
	cout <<"--------------------------------------------"<<endl;
	cout << endl<<endl;
	cout << "_____________________________________"<<endl;
	for(int i = 4; i < 8 ; i++)//Q5 until Q8
	{
		cout << "Question: "<< i+1 <<endl;
		cout << "Given "<<endl;
		cout << "Area = "<< AreaQ[i] <<endl;
		cout << "Base = "<< BaseQ[i] <<endl;
		cout << endl;
		cout << "What is the High of this triangle? "<<endl;
		cout << "High : ";
		cin >> ansHigh;
		cout << "_____________________________________"<<endl;
		if(ansHigh == HighQ[i])//to check whether user input correct or not
		{
			cout << "correct!"<<endl;
			mark2 += 1;
		}
		else
		{
			cout << "false!"<<endl;
		}
		cout << "_____________________________________"<<endl;
		cout << endl;
	}
	cout <<endl;
	cout <<"--------------------------------------------"<<endl;
	cout << "Mark for session 2 :"<<mark2 <<endl;
	cout <<"--------------------------------------------"<<endl;
	cout << endl <<endl;
	cout << "_____________________________________"<<endl;
	for(int i = 8; i < 12 ; i++)//Q9 until Q12
	{
		cout << "Question: "<< i+1 <<endl;
		cout << "Given "<<endl;
		cout << "Area = "<< AreaQ[i] <<endl;
		cout << "High = "<< HighQ[i] <<endl;
		cout << endl;
		cout << "What is the Base of this triangle? "<<endl;
		cout << "Base : ";
		cin >> ansBase;
		cout << "_____________________________________"<<endl;
		if(ansBase == BaseQ[i])//to check whether user input correct or not
		{
			cout << "correct!"<<endl;
			mark3 += 1;
		}
		else
		{
			cout <<"false!!"<<endl;
		}
		cout << "_____________________________________"<<endl;
		cout << endl;
	}
	cout <<"--------------------------------------------"<<endl;
	Tmark = mark1 + mark2 + mark3;//calculate total mark
	cout << "Mark for session 3 :"<<mark3 <<endl;
	cout << "Total mark : "<<Tmark<<endl;
	cout <<"--------------------------------------------"<<endl;
	cout << endl <<endl;
	updateScore(studentID, Tmark, 1);//go to updateScore()
}

///////////////////////////////////////////////////////////////////////////////////////

void Rectangle(float AreaQ[],float WidthQ[],float LengthQ[], int studentID)
{
	cout << "**********************************"<<endl;
	cout << "*  WELCOME TO RECTANGLE SESSION  *"<<endl;
	cout << "**********************************\n"<<endl;
	cout << endl;
	float ansArea,ansWidth,ansLength, mark1=0,mark2=0,mark3=0,Tmark=0;	
	float A,L,W,ans;
	string ch;
	do
	{	
		//learning function
		cout <<"Enter three number "<<endl;
		cout <<"Enter 0 if you want to find the answer: "<<endl;
		
		cout << "Area: ";
		cin >> A;
		cout << "Length: ";
		cin >> L;
		cout << "Width: ";
		cin >> W;
		//validation 
		if(A == 0)
		{
			ans = L * W;
		}
		else if(L == 0)
		{
			ans = A / W;
		}
		else
		{
			ans = A / L;
		}
		
		cout << "your answer is: "<<ans<<endl;
		
		cout <<"--------------------------------------------"<<endl;
		cout << endl;
		cout << "Enter X to continue and Y to stop :";
		cin >> ch;
		cout << endl;
	}while(ch == "x" || ch == "X");
	system("pause");
	cout << endl;
	
	cout <<"--------------------------------------------"<<endl;
	cout << "This is question session for rectangle:\n"<<endl;
	cout << "Given the formula of rectangle: "<<endl;
	cout << "Area = Length X Width"<<endl;
	cout <<"--------------------------------------------"<<endl;
	cout << endl;
	system("pause");
	cout << endl;
	cout << "_____________________________________"<<endl;
	for(int i = 0; i < 4 ; i++)//Q1 until Q4
	{
		cout << "Question: "<< i+1 <<endl;
		cout << "Given "<<endl;
		cout << "Length = "<< LengthQ[i] <<endl;
		cout << "Width = "<< WidthQ[i] <<endl;
		cout << endl;
		cout << "What is the Area of this rectangle? "<<endl;
		cout << "Area : ";
		cin >> ansArea;
		cout << "_____________________________________"<<endl;
		if(ansArea == AreaQ[i])//to check whether user input correct or not
		{
			mark1 += 1;
			cout << "correct!"<<endl;
		}
		else
		{
			cout << "false!"<<endl;
		}
		cout << "_____________________________________"<<endl;
		cout << endl;
	}
	cout <<endl;
	cout <<"--------------------------------------------"<<endl;
	cout <<"Mark for session 1: "<< mark1<<endl;
	cout <<"--------------------------------------------"<<endl;
	cout << endl<<endl;
	cout << "_____________________________________"<<endl;
	for(int i = 4; i < 8 ; i++)//Q5 until Q8
	{
		cout << "Question: "<< i+1 <<endl;
		cout << "Given "<<endl;
		cout << "Area = "<< AreaQ[i] <<endl;
		cout << "Length = "<< LengthQ[i] <<endl;
		cout << endl;
		cout << "What is the Width of this rectangle? "<<endl;
		cout << "Width : ";
		cin >> ansWidth;
		cout << "_____________________________________"<<endl;
		if(ansWidth == WidthQ[i])//to check whether user input correct or not
		{
			mark2 += 1;
			cout << "correct!"<<endl;
		}
		else
		{
			cout<< "false!"<<endl;
		}
		cout << "_____________________________________"<<endl;
		cout << endl;
	}
	cout <<"--------------------------------------------"<<endl;
	cout << "Mark for session 2 :"<<mark2 <<endl;
	cout <<"--------------------------------------------"<<endl;
	cout << endl <<endl;
	cout << "_____________________________________"<<endl;
	for(int i = 8; i < 12 ; i++)//Q9 until Q12
	{
		cout << "Question: "<< i+1 <<endl;
		cout << "Given "<<endl;
		cout << "Area = "<< AreaQ[i] <<endl;
		cout << "Width = "<< WidthQ[i] <<endl;
		cout << endl;
		cout << "What is the length of this rectangle? "<<endl;
		cout << "Length : ";
		cin >> ansLength;
		cout << "_____________________________________"<<endl;
		if(ansLength == LengthQ[i])//to check whether user input correct or not
		{
			mark3 += 1;
			cout << "correct!"<<endl;
		}
		else
		{
			cout << "false!"<<endl;
		}
		cout << "_____________________________________"<<endl;
		cout << endl;
	}
	cout <<"--------------------------------------------"<<endl;
	Tmark = mark1 + mark2 + mark3;//calculate total mark
	cout << "Mark for session 3 :"<<mark2 <<endl;
	cout << "Total mark : "<<Tmark<<endl;
	cout <<"--------------------------------------------"<<endl;
	cout << endl <<endl;
	updateScore(studentID, Tmark, 2);// go to updateScore
}

/////////////////////////////////////////////////////////////////////////////////////

void Parallelogram(float AreaQ[],float BaseQ[],float HeightQ[], int studentID)
{
	cout << "***********************************************"<<endl;
	cout << "*  WELCOME TO PARALLELOGRAM LEARNING SESSION  *"<<endl;
	cout << "***********************************************\n"<<endl;
	cout << endl;
	float ansArea,ansBase,ansHeight, mark1=0,mark2=0,mark3=0,Tmark=0;
	float A,B,H,ans;
	string ch;
	do
	{
		//learning
		cout <<"Enter three number "<<endl;
		cout <<"Enter 0 if you want to find the answer: "<<endl;
		
		cout << "Area: ";
		cin >> A;
		cout << "Base: ";
		cin >> B;
		cout << "Height: ";
		cin >> H;
		//validation
		if(H == 0)
		{
			ans = A / B;
		}
		else if(B == 0)
		{
			ans = A / H;
		}
		else
		{
			ans = B * H;
		}
		
		cout << "your answer is: "<<ans<<endl;
		
		cout <<"--------------------------------------------"<<endl;
		cout << endl;
			
		cout << "Enter X to continue and Y to stop :";
		cin >> ch;
	}while(ch == "x" || ch == "X");
	system("pause");
	cout <<endl;
	
	//question
	cout <<"--------------------------------------------"<<endl;
	cout << "This is question session for parallelogram:.../n"<<endl;
	cout << "Given the formula of parallelogram: "<<endl;
	cout << "Area = Base X Height"<<endl;
	cout <<"--------------------------------------------"<<endl;
	cout << endl;
	system("pause");
	cout << endl;
	cout << "_____________________________________"<<endl;
	for(int i = 0; i < 4 ; i++)//Q1 until Q4
	{
		cout << "Question: "<< i+1 <<endl;
		cout << "Given "<<endl;
		cout << "Base = "<< BaseQ[i] <<endl;
		cout << "Height = "<< HeightQ[i] <<endl;
		cout << endl;
		cout << "What is the Area of this parallelogram? "<<endl;
		cout << "Area : ";
		cin >> ansArea;
		cout << "_____________________________________"<<endl;
		if(ansArea == AreaQ[i])//to check whether user input correct or not
		{
			mark1 += 1;
			cout << "correct!"<<endl;
		}
		else
		{
			cout << "false!"<<endl;
		}
		
		cout << endl;
	}
	cout <<"--------------------------------------------"<<endl;
	cout <<"Mark for session 1: "<< mark1<<endl;
	cout <<"--------------------------------------------"<<endl;
	cout << endl<<endl;
	cout << "_____________________________________"<<endl;
	for(int i = 4; i < 8 ; i++)//Q5 until Q8
	{
		cout << "Question: "<< i+1 <<endl;
		cout << "Given "<<endl;
		cout << "Area = "<< AreaQ[i] <<endl;
		cout << "Base = "<< BaseQ[i] <<endl;
		cout << endl;
		cout << "What is the Height of this parallelogram? "<<endl;
		cout << "Height : ";
		cin >> ansHeight;
		cout << "_____________________________________"<<endl;
		if(ansHeight == HeightQ[i])//to check whether user input correct or not
		{
			mark2 += 1;
			cout << "correct!"<<endl;
		}
		else
		{
			cout <<"false!"<<endl;
		}
		
		cout << endl;
	}
	cout <<"--------------------------------------------"<<endl;
	cout << "Mark for session 2 :"<<mark2 <<endl;
	cout <<"--------------------------------------------"<<endl;
	cout << endl <<endl;
	cout << "_____________________________________"<<endl;
	for(int i = 8; i < 12 ; i++)//Q9 until Q12
	{
		cout << "Question: "<< i+1 <<endl;
		cout << "Given "<<endl;
		cout << "Area = "<< AreaQ[i] <<endl;
		cout << "Height = "<< HeightQ[i] <<endl;
		cout << endl;
		cout << "What is the Base of this parallelogram? "<<endl;
		cout << "Base : ";
		cin >> ansBase;
		cout << "_____________________________________"<<endl;
		if(ansBase == BaseQ[i])//to check whether user input correct or not
		{
			mark3 += 1;
			cout << "correct!"<<endl;
		}
		else
		{
			cout << "false!"<<endl;
		}
		
		cout << endl;
	}
	cout <<"--------------------------------------------"<<endl;
	Tmark = mark1 + mark2 + mark3;// calculate total mark
	cout << "Mark for session 3 :"<<mark2 <<endl;
	cout << "Total mark : "<<Tmark<<endl;
	cout <<"--------------------------------------------"<<endl;
	cout << endl <<endl;
	updateScore(studentID, Tmark, 3);//go to updateScore function
}

///////////////////////////////////////////////////////////////////////

int createScore()//create new Id if no Id in data
{
	ofstream outfile;
	outfile.open("studentMarks.txt",ios_base::app);//open id to update id
	
	int studentID;
	cout << "Enter student ID : ";
	cin >> studentID;
	
	if(!checkValidity(&studentID)==1)//go to check validity function to check whether student was crated or not
	{
		outfile << studentID <<" -1 -1 -1"<<endl;
	}
	outfile.close();
	return studentID;
}



int checkValidity(int *studentID)//check validty student
{
	int counter;
	ifstream infile;
	infile.open("studentMarks.txt");
	
	counter = countID();//to know number of student was created ID
	
	int studentUpdate[counter][4];
	
	// READ THE FILE
	for(int i = 0; i < counter ; i++)
	{
		for(int j = 0; j < 4 ; j++)
		{
			int temp;
			infile >> temp;
			studentUpdate[i][j] = temp;
		}
		
	}
	//CHECKING
	int mark = 0;
	for(int i = 0; i < counter ; i++)
	{
		if(studentUpdate[i][0] == *studentID)//checking student ID
		{
			mark = 1;
			break;
		}
	}
	
	return mark;
}


int checkingQuestionValid(int studentID)
{
	int counter;
	ifstream infile;
	infile.open("studentMarks.txt");
	
	counter = countID();//to know number of student was created ID
	
	int studentUpdate[counter][4];
	
	// READ THE FILE
	for(int i = 0; i < counter ; i++)
	{
		for(int j = 0; j < 4 ; j++)
		{
			int temp;
			infile >> temp;
			studentUpdate[i][j] = temp;
		}	
	}
	//checking the question that the user was answered the question
	int mark[4] = {0,0,0,0};//set all to mark to zero
	cout <<"Number of question was answer the question: "<<endl;
	for(int i = 0 ; i < counter ; i++)
	{
		if(studentUpdate[i][0] == studentID)
		{
			for(int j=1;j<4;j++)
			{
				if (studentUpdate[i][j] != -1)
				{
					cout<<j<<endl;
					mark[j] = j;
				}
			}
		}
	}
	if(mark[1]==0 && mark[2]==0 && mark[3]==0)
	{
		cout << "You did not answer any question."<<endl;
	}
	cout <<endl;
	cout <<endl;
	int shape;
	cout << "1. Triangle"<<endl
		 << "2. Rectangle"<<endl
		 << "3. Parallelogram"<<endl;
	cout <<endl;
	cout <<"which shape do you want learn?"<<endl;
	cout << "Enter: ";
	cin >> shape;
	
	if((shape == mark[1])&&(shape == mark[2])&&(shape == mark[3]))
	{
		cout << "you were answer all question."<<endl;
		shape = 4;
	}
	//checking validation
	while((shape == mark[1]) || (shape == mark[2]) || (shape == mark[3]))
	{
		cout << "you were answer this question."<<endl;
		cout <<"which shape do you want learn?"<<endl;
		cout << "Enter: ";
		cin >> shape;
	}
	return shape;
}

int countID()//to read number of student that was create the ID
{
	ifstream infile;
	infile.open("studentMarks.txt");
	int counter = 0;
	int a, b,c,d;
	while(!infile.eof())//input file
	{
		infile>> a>>b>>c>>d;
		++counter;
	}
	
	infile.close();
	counter-=1;
	return counter;
}

void updateScore(int studentID,int Tmark,int shape )//update score of student
{
	int counter;
	ifstream infile;
	ofstream outfile;
	infile.open("studentMarks.txt");
	
	counter = countID();//to read number of student that was create the ID
	
	int studentUpdate[counter][4];
	
	// READ THE FILE
	for(int i = 0; i < counter ; i++)
	{
		for(int j = 0; j < 4 ; j++)
		{
			int temp;
			infile >> temp;
			studentUpdate[i][j] = temp;
		}
		
	}
	
	//UPDATE
	for(int i = 0 ; i < counter ; i++)
	{
		if(studentUpdate[i][0] == studentID)
		{
			if (shape == 1)
				studentUpdate[i][1] = Tmark;
			else if(shape == 2)
				studentUpdate[i][2] = Tmark;
			else if(shape == 3)
				studentUpdate[i][3] = Tmark;
			else
				cout << "wrong code"<<endl;
		}
	}
	
	infile.close();
	//SAVE TO FILE
	outfile.open("studentMarks.txt");
	for(int i = 0; i < counter ; i++)
	{
		for(int j = 0; j < 4 ; j++)
		{
			outfile << studentUpdate[i][j]<<" ";
		}
		outfile << endl;
	}
	outfile.close();
}
