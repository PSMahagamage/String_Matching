# String_Matching

TOPIC
------------------------------------------------------------------------------------------------------------------------------------------------
@ --- String Matching Algorithums --- @

------------------------------------------------------------------------------------------------------------------------------------------------

------------------------------------------------------------------------------------------------------------------------------------------------
USAGE
------------------------------------------------------------------------------------------------------------------------------------------------
from CLI,
After the navigation to the relavent folder which includes all the files
RUN
	Linux: g++ string_matcher.cpp -o string_matcher
	Windows: g++ string_matcher.cpp -o string_matcher.exe
------------------------------------------------------------------------------------------------------------------------------------------------
from GUI,
Compile and run the file using a IDE and the terminal window will appear with the summury of the string matching while writing the results to the output files.Terminal window will be open till getting any input.Summury will include the text and its pattern and the total number of matchings or any message in case there isn't any matching pattern or empty text/pattern.

------------------------------------------------------------------------------------------------------------------------------------------------
EXPLANATION
------------------------------------------------------------------------------------------------------------------------------------------------
This program offer user the ability to find a pattern in a text when the pattern contains “wild-cards” by using the naive string matching approach.For this type of wild-card scenario the naive string matching algorithum is the best way to modify and use without going for any complex cases(Only if there are no requirments like time complexitiy for special cases needed to fulfill ).If the length of text and the pattern is long and the time is the limitation,at that moment the KMP is the most effient way becasue it has a time complexity of o(m+n) and for the nive string matching algorithum the time complexity is o(mn).(when m and n both are large numbers the complexity of KMP < time complexcity of the naive string matching algorithum).When M OR N are small numbers then the naive approach become more faster.

------------------------------------------------------------------------------------------------------------------------------------------------
Test-data
------------------------------------------------------------------------------------------------------------------------------------------------
There are 4 types of test cases included in 8 files with text and its relavant pattern.Results are included in 4 different output files.The empty patter/text can be use to test this program.

ASSUMPTION - For concreteness, it is assumed that the text does not contain the “_”-symbol (the underscore).
