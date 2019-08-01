//
// Created by Scott on 2019-07-26.
// Alright reserved by Qinghzi Ma
// Email: Q.Ma.2@warwick.ac.uk
// Department of Computer Science, University of Warwick,  UK
//

#include <iostream>
#include "csv.h"
#include "csv_reader.h"

void print(std::vector<float> const &input)
{
    for (int i = 0; i < input.size(); i++) {
        std::cout << input.at(i) << ' ';
    }
    std::cout <<std::endl;
}

int main() {
    std::vector<float> x, y;
    io::read2columns("../resources/pm25.csv","PRES","pm25",x,y);
    print(x);
    print(y);
    std::cout<<x.size()<<std::endl;
    std::cout<<y.size()<<std::endl;
    return 0;
}