//
// Created by Scott on 2019-07-26.
// Alright reserved by Qinghzi Ma
// Email: Q.Ma.2@warwick.ac.uk
// Department of Computer Science, University of Warwick,  UK
//

#include <iostream>
#include "csv.h"
#include "csv_reader.h"



void io::read2columns(std::string file, std::string xheader, std::string yheader, std::vector<float>& x, std::vector<float>& y){
    io::CSVReader<2> in(file);
    in.read_header(io::ignore_extra_column,xheader,yheader);
    float xx; float yy;


    bool b_in_file = true;
    int idx = 0;
    do {
//        std::cout<<++idx<<std::endl;
        try {
            b_in_file = in.read_row(xx,yy);
            x.push_back(xx);
            y.push_back(yy);
        }
        catch (io::error::no_digit e)
        {
//            std::cout << "Non-numerical values obtained, ignored."  << '\n';
        }
    }
    while(b_in_file);

    std::cout<<"Finish file reading."<<std::endl;
}
