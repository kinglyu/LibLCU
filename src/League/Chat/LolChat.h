#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <thread>
#include "../../Session/Session.hpp"
#include "../Class/Chat/LolChatUserResource.h"

namespace LCU {
    namespace League {
        namespace Chat {
            Class::Chat::LolChatUserResource GetMe(Session* session);
            void SetMe(Session* session, Class::Chat::LolChatUserResource user);
        }
    }
};
