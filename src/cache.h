#ifndef CACHE_H
#define CACHE_H

#include <string>
#include <vector>
#include <iostream>
#include "packetq.h"

namespace se
{

int mkpath(std::string s);
std::string compute_cache_path(std::string cache_dir, int argc, char * argv [],
                               std::vector<std::string> mod_time_paths,
                               PacketQ::OutputOpts output_opts);
bool write_output_from_cache_input(std::string cache_file_path, std::ostream &output);

}

#endif
