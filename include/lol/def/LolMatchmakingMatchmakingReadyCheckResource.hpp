#pragma once
#include "../base_def.hpp" 
#include "LolMatchmakingMatchmakingDodgeWarning.hpp"
#include "LolMatchmakingMatchmakingReadyCheckResponse.hpp"
#include "LolMatchmakingMatchmakingReadyCheckState.hpp"
namespace lol {
  struct LolMatchmakingMatchmakingReadyCheckResource { 
    LolMatchmakingMatchmakingReadyCheckState state;
    LolMatchmakingMatchmakingReadyCheckResponse playerResponse;
    LolMatchmakingMatchmakingDodgeWarning dodgeWarning;
    float timer;
    std::vector<uint64_t> declinerIds;
    bool suppressUx; 
  };
  inline void to_json(json& j, const LolMatchmakingMatchmakingReadyCheckResource& v) {
    j["state"] = v.state; 
    j["playerResponse"] = v.playerResponse; 
    j["dodgeWarning"] = v.dodgeWarning; 
    j["timer"] = v.timer; 
    j["declinerIds"] = v.declinerIds; 
    j["suppressUx"] = v.suppressUx; 
  }
  inline void from_json(const json& j, LolMatchmakingMatchmakingReadyCheckResource& v) {
    v.state = j.at("state").get<LolMatchmakingMatchmakingReadyCheckState>(); 
    v.playerResponse = j.at("playerResponse").get<LolMatchmakingMatchmakingReadyCheckResponse>(); 
    v.dodgeWarning = j.at("dodgeWarning").get<LolMatchmakingMatchmakingDodgeWarning>(); 
    v.timer = j.at("timer").get<float>(); 
    v.declinerIds = j.at("declinerIds").get<std::vector<uint64_t>>(); 
    v.suppressUx = j.at("suppressUx").get<bool>(); 
  }
}