#pragma once
#include "../base_def.hpp" 
#include "LolMatchmakingMatchmakingReadyCheckResponse.hpp"
#include "LolMatchmakingMatchmakingDodgeWarning.hpp"
#include "LolMatchmakingMatchmakingReadyCheckState.hpp"
namespace lol {
  struct LolMatchmakingMatchmakingReadyCheckResource { 
    bool suppressUx;
    float timer;
    LolMatchmakingMatchmakingReadyCheckResponse playerResponse;
    LolMatchmakingMatchmakingReadyCheckState state;
    std::vector<uint64_t> declinerIds;
    LolMatchmakingMatchmakingDodgeWarning dodgeWarning; 
  };
  inline void to_json(json& j, const LolMatchmakingMatchmakingReadyCheckResource& v) {
    j["suppressUx"] = v.suppressUx; 
    j["timer"] = v.timer; 
    j["playerResponse"] = v.playerResponse; 
    j["state"] = v.state; 
    j["declinerIds"] = v.declinerIds; 
    j["dodgeWarning"] = v.dodgeWarning; 
  }
  inline void from_json(const json& j, LolMatchmakingMatchmakingReadyCheckResource& v) {
    v.suppressUx = j.at("suppressUx").get<bool>(); 
    v.timer = j.at("timer").get<float>(); 
    v.playerResponse = j.at("playerResponse").get<LolMatchmakingMatchmakingReadyCheckResponse>(); 
    v.state = j.at("state").get<LolMatchmakingMatchmakingReadyCheckState>(); 
    v.declinerIds = j.at("declinerIds").get<std::vector<uint64_t>>(); 
    v.dodgeWarning = j.at("dodgeWarning").get<LolMatchmakingMatchmakingDodgeWarning>(); 
  }
}