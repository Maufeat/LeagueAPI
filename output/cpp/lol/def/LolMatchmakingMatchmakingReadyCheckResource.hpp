#pragma once
#include "../base_def.hpp" 
#include "LolMatchmakingMatchmakingReadyCheckResponse.hpp"
#include "LolMatchmakingMatchmakingReadyCheckState.hpp"
#include "LolMatchmakingMatchmakingDodgeWarning.hpp"
namespace lol {
  struct LolMatchmakingMatchmakingReadyCheckResource { 
    bool suppressUx;
    LolMatchmakingMatchmakingReadyCheckResponse playerResponse;
    float timer;
    LolMatchmakingMatchmakingDodgeWarning dodgeWarning;
    LolMatchmakingMatchmakingReadyCheckState state;
    std::vector<uint64_t> declinerIds; 
  };
  inline void to_json(json& j, const LolMatchmakingMatchmakingReadyCheckResource& v) {
    j["suppressUx"] = v.suppressUx; 
    j["playerResponse"] = v.playerResponse; 
    j["timer"] = v.timer; 
    j["dodgeWarning"] = v.dodgeWarning; 
    j["state"] = v.state; 
    j["declinerIds"] = v.declinerIds; 
  }
  inline void from_json(const json& j, LolMatchmakingMatchmakingReadyCheckResource& v) {
    v.suppressUx = j.at("suppressUx").get<bool>(); 
    v.playerResponse = j.at("playerResponse").get<LolMatchmakingMatchmakingReadyCheckResponse>(); 
    v.timer = j.at("timer").get<float>(); 
    v.dodgeWarning = j.at("dodgeWarning").get<LolMatchmakingMatchmakingDodgeWarning>(); 
    v.state = j.at("state").get<LolMatchmakingMatchmakingReadyCheckState>(); 
    v.declinerIds = j.at("declinerIds").get<std::vector<uint64_t>>(); 
  }
}