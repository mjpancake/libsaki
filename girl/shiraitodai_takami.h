#ifndef SAKI_GIRL_SHIRAITODAI_TAKAMI_H
#define SAKI_GIRL_SHIRAITODAI_TAKAMI_H

#include "../table/girl.h"



namespace saki
{



class Takami : public Girl
{
public:
    GIRL_CTORS(Takami)

    void onDiscarded(const Table &table, bool spin) override;
    void nonMonkey(util::Rand &rand, TileCount &init, Mount &mount,
                   std::bitset<NUM_NM_SKILL> &presence,
                   const Princess &princess) override;
    int d3gNeed(T34 t) const;

private:
    std::vector<T37> mSlots;
};



} // namespace saki



#endif // SAKI_GIRL_SHIRAITODAI_TAKAMI_H
