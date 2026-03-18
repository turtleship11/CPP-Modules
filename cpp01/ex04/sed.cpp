#include "Sed.hpp"

void Sed::replaceInFile(const std::string& filename,
                        const std::string& s1,
                        const std::string& s2)
{
    if (s1.empty())
    {
        std::cerr << "Error: s1 cannot be empty" << std::endl;
        return;
    }

    std::ifstream infile(filename.c_str());
    if (!infile)
    {
        std::cerr << "Error: cannot open input file" << std::endl;
        return;
    }

    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile)
    {
        std::cerr << "Error: cannot create output file" << std::endl;
        return;
    }

    std::string line;

    while (std::getline(infile, line))
    {
        size_t pos = 0;

        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }

        outfile << line;
        if (!infile.eof())
            outfile << std::endl;
    }

    infile.close();
    outfile.close();
}