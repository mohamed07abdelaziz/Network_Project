//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#include "Coordinator.h"

Define_Module(Coordinator);

void Coordinator::initialize()
{
    // TODO - Generated method body
    std::ifstream myfile;
    myfile.open("contributer.txt");
    std::string mystring="";
    if ( myfile.is_open() ) {
    char mychar;
    while ( myfile ) {
    mychar = myfile.get();
    if(mychar!='�' && mychar!=' ')
    {
        mystring+=mychar;
    }
    }
    }
    char chart=mystring[0];
    int intValue = std::atoi(&chart);
    cMessage *msg=new cMessage(mystring.c_str());
    EV << mystring<<endl;
    send(msg, "out",  intValue);
}

void Coordinator::handleMessage(cMessage *msg)
{
    // TODO - Generated method body
}
