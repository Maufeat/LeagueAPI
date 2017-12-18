#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashMatchmakingReadyCheckResponse.hpp>
#include <lol/def/LolClashMatchmakingReadyCheckState.hpp>
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