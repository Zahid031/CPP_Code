#include<bits/stdc++.h>
using namespace std;

string removeComments(const string &line, int &deletionCount)
{
    string result;
    bool inComment = false;
    bool inString = false;

    for (size_t i = 0; i < line.length(); ++i)
    {
        if (!inComment && !inString && line[i] == '/' && i + 1 < line.length() && line[i + 1] == '/')
        {
            break;
        }
        else if (!inComment && !inString && line[i] == '/' && i + 1 < line.length() && line[i + 1] == '*')
        {
            inComment = true; 
            ++i;
            ++deletionCount; 
        }
        else if (inComment && line[i] == '*' && i + 1 < line.length() && line[i + 1] == '/')
        {
            inComment = false;
            ++i;
        }
        else if (!inComment && !inString && line[i] == '"')
        {
            inString = true; 
            result += line[i];
        }
        else if (inString && line[i] == '"')
        {
            inString = false; 
            result += line[i];
        }
        else if (!inComment)
        {
            result += line[i];
        }
    }

    return result;
}

int main()
{
    std::string inputFilename = "input.txt";
    std::string outputFilename = "output.txt";
    std::string line;
    int deletionCount = 0;

    // Open input file
    std::ifstream inputFile(inputFilename);
    if (!inputFile)
    {
        std::cerr << "Failed to open input file: " << inputFilename << std::endl;
        return 1;
    }

    // Open output file
    std::ofstream outputFile(outputFilename);
    if (!outputFile)
    {
        std::cerr << "Failed to create output file: " << outputFilename << std::endl;
        inputFile.close();
        return 1;
    }
}