task1:
#include<iostream>
using namespace std;
main()
{
	string word;
	cout<<"Enter a string: ";
	cin>>word;
	
int	count=0;
	for(int idx=0;word[idx]!='\0';idx++)
	{
	word[idx];
	count=count+1;
		
}
	if(count%2==0)
	cout<<"1";
	else 
	cout<<"0";
	
}

task2:
#include<iostream>
#include<string>
using namespace std;
string containsSeven(int numbers[],int size);
main()
{int size;
	cout<<"Enter the size of Array: ";
	cin>>size;
	int numbers[size];
	int y=0;
	
		for(int i=0;i<size;i++)
		{ 
		
		
		
			cout<<"Enter Element "<<++y<<": ";
			cin>>numbers[i];
			
		}
	
	
	
cout<<containsSeven(numbers,size)<<endl;
return 0;
	
}
string containsSeven(int numbers[],int size)
{
	for(int i=0;i<size;++i)
	{
		while(numbers[i]!=0)
	{
	
	if (numbers[i] % 10==7||numbers[i]==7)
	{ return "Boom!";
	}
	numbers[i] /=10;
}

}
	
	
	
	{
	
		return "There is no 7 in the array";
		
	}

}


task3:
#include<iostream>
using namespace std;
bool check_identical(string arr[],int n)
{
	for(int i=1; i<n;i++)
	{
		
		
		if(arr[i]!=arr[0])
		{return false;
		}

	else
	{return true;
	}
}
}
main()
{int n;
string arr[100];
int x=0;
	
	cout<<"Enter the size of the array: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		
	cout<<"Enter Element "<<++x<<": ";
	cin>>arr[i];	
	}
	cout<<check_identical(arr,n);
	return 0;
}
task4:
#include <iostream>
using namespace std;
void evenOddTransform(int arr[], int size, int c)
{
	for (int i = 0; i < c; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			if (arr[j] % 2 == 0)
			{
				arr[j] -= 2;
			}

			else
			{
				arr[j] += 2;
			}
		}
	}
}

main()
{
	int size;
	int arr[100];
	int c;
	cout << "Enter the size of the Array: ";
	cin >> size;
	int n = 0;
	for (int i = 0; i < size; ++i)
	{
		cout << "Enter Element " << ++n << ": ";
		cin >> arr[i];
	}

	cout << "Enter number of times even-odd transformation need to be done: ";
	cin >> c;
	evenOddTransform(arr, size, c);
	cout << "[";
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i];
		if (i < size-1)
		{
			cout << ",";
		}
		if (i == size - 1)
		{
			cout << "]";
		}
	}

	return 0;
}
task5:
#include <iostream>
using namespace std;

int count_common_chars(string arr, string arr2) {
    int count = 0;
    for (int idx = 0; arr[idx] != '\0'; ++idx) {
        for (int idx2 = 0;arr2[idx2] !='\0'; ++idx2) {
            if (arr[idx]== arr2[idx2]) {
                count++;
                arr2[idx2]='*';
                break;
            
            }
        }
    }
    return count;
}

int main()
 {
 	string arr;
 	string arr2;

   
   	cout<<"Enter the first string: ";
   	cin>>arr;
	
	
	cout<<"Enter the first string: ";
	cin>>arr2;	
	
	int result=count_common_chars(arr,arr2 ) ;
    cout <<"Number of common characters: "<<result;
    return 0;
}
task6:
#include<iostream>
using namespace std;
int coloringTime(string arr[],int size)
{
int switch_time=1;
int color_time=2;
int total_time=0;
string current_color=arr[0];
for(int i=0;i<size;i++)
{

if(arr[i]!=current_color)
{
	total_time=total_time+switch_time;
	current_color=arr[i];
	}
	
	
		total_time=total_time+color_time;
		
		
	}
		return total_time;
	}
	
main()
{
	int size;
	int n=0;
	string arr[100];
	cout<<"Enter the size of Array: ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter Element "<<++n<<": ";
		cin>>arr[i];
	}
	cout<<"Time to color: "<<coloringTime(arr,size)<<" seconds"<<endl;

	return 0;
}
task7:
task8:
#include<iostream>
using namespace std;
string findBrokenKeys(string correct_Phrase, string actual_Typed)
{string res1;

	for(int i=0;correct_Phrase[i]!='\0';i++)
	{
		int m=0;
	if(correct_Phrase[i]!=actual_Typed[i])
{			
		for(int k=0;res1[m]!='\0';k++)
		{
				if(res1[m]==correct_Phrase[i])
				{
					m++;
					break;
				}
				}
				if(m==0)
			
				{
				res1+=correct_Phrase[i];
				}
			}	
	}
	return res1;
}

main()
{
	string string_1,string_2;
	cout<<"Enter the correct Phrase: ";
	getline(cin,string_1);
	cout<<"Enter what you actually typed: ";
	getline(cin,string_2);
	cout<<"Broken keys: "<<findBrokenKeys(string_1,string_2);
}

task 9:
#include <iostream>
using namespace std;

bool isValid(char word[], int length) {
    for (int i = 0; i < length; i++) {
        char c = word[i];
        if (c == 'k' || c == 'm' || c == 'v' || c == 'w' || c == 'x') {
            return false;
        }
    }
    return true;
}

string longest7SegmentWord(char words[][10], int size) {
    int longest = 7;
    string longest_word = "";
    for (int i = 0; i < size; i++) {
        int length = 0;
        while (words[i][length] != '\0') {
            length++;
        }
        if (length > longest_word.length() &&  isValid(words[i], length)==true) {
            longest_word = words[i];
        }
    }
    return longest_word;
}


int main()
 {
    int size;
    cout << "Enter the number of words: ";
    cin >> size;
    char words[size][10];
    cout << "Enter the word, one by one: " << endl;
    for (int idx = 0; idx < size; idx++) {
        cin >> words[idx];
    }
    string longest_word = longest7SegmentWord(words, size);
    if (longest_word.length() > 0) {
        cout << "Longest 7-segment word: " << longest_word << endl;
    }
    return 0;
}  