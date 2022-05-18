#include "CommandCenter.h"

void CommandCenter::UpdateAllSCVs()
{
    vector<SCV>::iterator iter = SCVs.begin();
    for (; iter != SCVs.end(); iter++)
    {
        iter->UpdateState();
    }
}

bool CommandCenter::TrySpawnSCV()
{
    if (minerals > SCV_COST) {
        minerals -= SCV_COST;
        new SCV();
        return true;
    }
    return false;
}

void CommandCenter::SCVCallBack(int id)
{
}

void CommandCenter::Register(SCV& scv, REGISTER_CALLBACK cb)
{
    SCVs.push_back(scv);
}
