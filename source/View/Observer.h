#ifndef _OBSERVER_H
#define _OBSERVER_H

#include "CommonTypes.h"

class Observer
{
    public:
    virtual void update(piece currentPlayer, int message, std::vector<std::vector<piece>> boardConfiguration, int blackScore, int whiteScore, std::string move)=0;
};

#endif