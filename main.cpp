#include <Geode/Geode.hpp>

using namespace geode::prelude;

#include <Geode/modify/PlayerObject.hpp>

class $modify(PlayerObject) {
   void update(float p0) {

    if (m_playerSpeed == 0.7f)
    {
        m_playerSpeed = 0;
    }
    if (m_playerSpeed == 0.9f)
    {
        m_playerSpeed = 1;
}
    
    
    PlayerObject::update(p0);
   }
};