/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:32:35 by maelmahf          #+#    #+#             */
/*   Updated: 2025/11/05 20:31:32 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

static int open_file(std::string nameInputfile ,std::string nameOutputfile ,
                 std::ifstream *inputFile ,std::ofstream *outputFile)
{
    (*inputFile).open(nameInputfile.c_str() , std::fstream::in);
    (*outputFile).open(nameOutputfile.c_str(), std::fstream::out);
    if(!inputFile || !outputFile)
    {
        std::cerr << "Faild open files" << std::endl;
        (*inputFile).close();
        (*outputFile).close();
        return 1;
    }
    return 0;
}

static void read_and_replace(char **argv , std::ifstream *inputFile , std::ofstream *outputFile)
{
    std::string to_find;
    std::string to_replace;
    std::string line;
    std::string::size_type found;
    size_t end_last_found;
    std::string replaced_line;

    to_find = *(argv + 2);
    to_replace = *(argv + 3);
    end_last_found = 0;

    while(std::getline(*inputFile , line))
    {
        replaced_line.clear();
        end_last_found = 0;
        found = line.find(to_find);

        if (found != std::string::npos)
        {
	        while (found != std::string::npos)
	        {
		        replaced_line.append(line, end_last_found, found - end_last_found);
		        replaced_line += to_replace;
		        end_last_found = found + to_find.length();
		        found = line.find(to_find, end_last_found);
		        if (found == std::string::npos)
			    replaced_line.append(line, end_last_found, line.length());
	        }
        }
        else
	        replaced_line = line;

    
    if (!(*inputFile).eof())
        *outputFile << replaced_line << std::endl;
    else
        *outputFile << replaced_line;
    }
}

int main(int argc , char **argv)
{
    std::string nameInputfile;
    std::string nameOutputfile;
    std::ifstream inputfile;
    std::ofstream outputfile;

    if(argc != 4)
        return(std::cout << "Wrong number of arguments" << std::endl , 0);
    nameInputfile = argv[1];
    nameOutputfile = nameOutputfile + argv[1] + ".replace";
    if(open_file(nameInputfile , nameOutputfile , &inputfile , &outputfile))
        return 1;
    read_and_replace(argv , &inputfile , &outputfile);
    inputfile.close();
    outputfile.close();
    return 0;
}