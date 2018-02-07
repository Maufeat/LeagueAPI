#pragma once
#include "../base_def.hpp" 
#include "LolClashMatchmakingReadyCheckResponse.hpp"
#include "LolClashMatchmakingReadyCheckState.hpp"
namespace lol {
  struct LolClashMatchmakingReadyCheckResource { 
    LolClashMatchmakingReadyCheckState state;
    LolClashMatchmakingReadyCheckResponse playerResponse; 
  };
  inline void to_json(json& j, const LolClashMatchmakingReadyCheckResource& v) {
    j["state"] = v.state; 
    j["playerResponse"] = v.playerResponse; 
  }
  inline void from_json(const json& j, LolClashMatchmakingReadyCheckResource& v) {
    v.state = j.at("state").get<LolClashMatchmakingReadyCheckState>(); 
    v.playerResponse = j.at("playerResponse").get<LolClashMatchmakingReadyCheckResponse>(); 
  }
}