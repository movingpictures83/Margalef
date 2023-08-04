#ifndef MARGALEFPLUGIN_H
#define MARGALEFPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class MargalefPlugin : public Plugin
{
public: 
 std::string toString() {return "Margalef";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
