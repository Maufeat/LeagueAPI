#pragma once
#include "../base_def.hpp" 
#include "LolMatchmakingMatchmakingReadyCheckResponse.hpp"
#include "LolMatchmakingMatchmakingReadyCheckState.hpp"
#include "LolMatchmakingMatchmakingDodgeWarning.hpp"
namespace lol {
  struct LolMatchmakingMatchmakingReadyCheckResource { 
    std::vector<uint64_t> declinerIds;
    LolMatchmakingMatchmakingReadyCheckResponse playerResponse;
    float timer;
    LolMatchmakingMatchmakingReadyCheckState state;
    LolMatchmakingMatchmakingDodgeWarning dodgeWarning;
    bool suppressUx; 
  };
  inline void to_json(json& j, const LolMatchmakingMatchmakingReadyCheckResource& v) {
    j["declinerIds"] = v.declinerIds; 
    j["playerResponse"] = v.playerResponse; 
    j["timer"] = v.timer; 
    j["state"] = v.state; 
    j["dodgeWarning"] = v.dodgeWarning; 
    j["suppressUx"] = v.suppressUx; 
  }
  inline void from_json(const json& j, LolMatchmakingMatchmakingReadyCheckResource& v) {
    v.declinerIds = j.at("declinerIds").get<std::vector<uint64_t>>(); 
    v.playerResponse = j.at("playerResponse").get<LolMatchmakingMatchmakingReadyCheckResponse>(); 
    v.timer = j.at("timer").get<float>(); 
    v.state = j.at("state").get<LolMatchmakingMatchmakingReadyCheckState>(); 
    v.dodgeWarning = j.at("dodgeWarning").get<LolMatchmakingMatchmakingDodgeWarning>(); 
    v.suppressUx = j.at("suppressUx").get<bool>(); 
  }
}