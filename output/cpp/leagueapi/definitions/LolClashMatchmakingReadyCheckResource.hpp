#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolClashMatchmakingReadyCheckResponse.hpp>
#include <leagueapi/definitions/LolClashMatchmakingReadyCheckState.hpp>

namespace leagueapi {
  struct LolClashMatchmakingReadyCheckResource { /**/ 
    LolClashMatchmakingReadyCheckState state;/**/
    LolClashMatchmakingReadyCheckResponse playerResponse;/**/
  };
  static void to_json(json& j, const LolClashMatchmakingReadyCheckResource& v) { 
    j["state"] = v.state;
    j["playerResponse"] = v.playerResponse;
  }
  static void from_json(const json& j, LolClashMatchmakingReadyCheckResource& v) { 
    v.state = j.at("state").get<LolClashMatchmakingReadyCheckState>(); 
    v.playerResponse = j.at("playerResponse").get<LolClashMatchmakingReadyCheckResponse>(); 
  }
} 