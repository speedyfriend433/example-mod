#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(PlayLayer) {
    struct Fields {
        GameObject* ac;
    };

    void destroyPlayer(PlayerObject *p0, GameObject *p1) {
        if (!m_fields->ac)
            m_fields->ac = p1;

        if (p1 == m_fields->ac) {
            return PlayLayer::destroyPlayer(p0, p1);
        }
    }
};
