//
// Created by Scott on 2019-07-26.
// Alright reserved by Qinghzi Ma
// Email: Q.Ma.2@warwick.ac.uk
// Department of Computer Science, University of Warwick,  UK
//

#ifndef SHARED_LIB_CSV_READER_H
#define SHARED_LIB_CSV_READER_H

#include <string>
#include <vector>

namespace io{
    void read2columns(std::string file, std::string xheader, std::string yheader, std::vector<float>& x, std::vector<float>& y);
}
#endif //SHARED_LIB_CSV_READER_H
