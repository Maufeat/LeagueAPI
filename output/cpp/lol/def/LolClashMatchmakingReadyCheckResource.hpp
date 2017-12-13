#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashMatchmakingReadyCheckResponse.hpp>
#include <lol/def/LolClashMatchmakingReadyCheckState.hpp>
namespace lol {
  struct LolClashMatchmakingReadyCheckResource { 
    LolClashMatchmakingReadyCheckState state;
    LolClashMatchmakingReadyCheckResponse playerResponse; 
  };
  void to_json(json& j, const LolClashMatchmakingReadyCheckResource& v) {
  j["state"] = v.state; 
  j["playerResponse"] = v.playerResponse; 
  }
  void from_json(const json& j, LolClashMatchmakingReadyCheckResource& v) {
  v.state = j.at("state").get<LolClashMatchmakingReadyCheckState>(); 
  v.playerResponse = j.at("playerResponse").get<LolClashMatchmakingReadyCheckResponse>(); 
  }
}