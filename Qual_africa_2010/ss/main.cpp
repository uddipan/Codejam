//
//  main.cpp
//  T9 Spelling
//
//  Created by uddipan mukherjee on 1/11/15.
//  Copyright (c) 2015 uddipan mukherjee. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>

// MACRO for selecting the small/large input. Comment out for large input.
#define SmallLargeInput


using namespace std;

string GenericName = "/GitHub/CodeJam";

string TestName = "/Qual_africa_2010/Reverse Words/Reverse Words/";

int main(int argc, const char * argv[]) {
    string InFileName, OutFileName;
    
#ifdef SmallLargeInput
    InFileName = GenericName + TestName + "A-small-practice.in";
    OutFileName = GenericName + TestName + "output-small.out";
#else
    InFileName = GenericName + TestName + "A-large-practice.in";
    OutFileName = GenericName + TestName + "output-large.out";
#endif
    
    
    string line;
    ifstream infile ( InFileName );
    ofstream outfile ( OutFileName );
    
    if (infile.is_open())
    {
        infile >> line;
        
        
        if (outfile.is_open())
        {
            //outfile << "Case #" << i+1 << ": " << Item1 << " " << Item2 <<"\n";
        }
        
        
        infile.close();
        outfile.close();
    }
    
    return 0;
}


