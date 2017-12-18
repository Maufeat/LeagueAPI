#pragma once
#include "../base_def.hpp" 
#include "LolClashMatchmakingReadyCheckState.hpp"
#include "LolClashMatchmakingReadyCheckResponse.hpp"
namespace lol {
  struct LolClashMatchmakingReadyCheckResource { 
    LolClashMatchmakingReadyCheckResponse playerResponse;
    LolClashMatchmakingReadyCheckState state; 
  };
  inline void to_json(json& j, const LolClashMatchmakingReadyCheckResource& v) {
    j["playerResponse"] = v.playerResponse; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolClashMatchmakingReadyCheckResource& v) {
    v.playerResponse = j.at("playerResponse").get<LolClashMatchmakingReadyCheckResponse>(); 
    v.state = j.at("state").get<LolClashMatchmakingReadyCheckState>(); 
  }
}