
#include<iostream>
#include<fstream>
#include<cstring>
#include<string>

using namespace std;

int naiveMatcher(string txt,string pat, ofstream& outfile)
{
	int flag=0;
    if(pat.length()==0)//for empty patterns
    {
    	outfile<< "# Pattern is EMPTY !"<< endl;
    	cout<<"\t# Pattern is EMPTY !"<< endl;
        return 1;
    }
    if(txt.length()==0)//for empty texts
    {
    	outfile<< "# Text is EMPTY !"<< endl;
    	cout<< "\t# Text is EMPTY !"<< endl;
        return 1;
    }
    
	int counter=0;
    for(int i = 0; i <= txt.length() - pat.length(); i++)
    {
        int matches=0;
        for(int j = 0; j < pat.length(); j++)
        {
            if(txt[i+j] != pat[j] &&  pat[j] != '_' )//check that it is a miss or not
            {
                break;
            }
            matches++;
        }
            if(matches == pat.length())//if any match found write it with the index to the output file
            {
            	flag=1;
                outfile<< "# A match found in index : " << i << endl;
                counter++;
            }
    }
    if(flag == 1)//write and print the number of matcher
    {
    	outfile<< "# TOTAL NUMBER OF MATCHES is: "<<counter<<endl;
    	cout<< "\t# TOTAL NUMBER OF MATCHES is: "<<counter<<endl;
	}
	else//write and print if any match not found
	{
		outfile<< "# SORRY!NO MATCH FOUND!"<<endl;
    	cout<< "\t# SORRY!NO MATCH FOUND!"<<endl;
	}
    return 0;
}

int main()
{
    string texts[] = {"text1.txt","text2.txt","text3.txt","text4.txt","text5.txt"}; //creating a string array with the names of text files 
    string patterns[] = {"pattern1.txt","pattern2.txt","pattern3.txt","pattern4.txt","pattern5.txt"}; //creating a string array with the names of pattern files
    string outputs[] = {"patternmatch1.output","patternmatch2.output","patternmatch3.output","patternmatch4.output","patternmatch5.output"}; //creating a string array with the names of output files

	//declare varibles to store file names
    string text;
    string pattern;
    string output;
    
    int end;
    
    cout << "\n\t\t\t\t ***@ LETS WORK WITH NAIVE STRING MATCHER @***\n"<<endl;

    for(int i =0; i<5; i++)
    {
    	cout<< "@ TEST CASE "<<i+1<<"-->"<<endl;
    	
    	//initialize the varibles with file names
        text = texts[i];
        pattern = patterns[i];
        output = outputs[i];
		
		//declare input stream class objects
        ifstream textfile;
        ifstream patfile;
		
		//decalre output stream class object for outputs
        ofstream outfile(output.c_str()); //create and open output file

        textfile.open(text.c_str()); //open text file
        patfile.open(pattern.c_str()); //open pattern file

        string textline;
        string patline;

		//get textline
        getline(textfile,textline);
        cout << "\t# Text : "<< textline <<endl;
        //get patternline
        getline(patfile,patline);
        cout << "\t# Pattern : "<< patline <<endl;
            
        naiveMatcher(textline,patline,outfile); //match the text with the pattern
		
		//closing the files 
		textfile.close();
    	patfile.close();
		outfile.close();
		
		cout << endl;   	    
    }
	cin>>end;
    
    return 0;  
}
