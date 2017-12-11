#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolMatchmakingMatchmakingReadyCheckResponse.hpp>
#include <leagueapi/definitions/LolMatchmakingMatchmakingReadyCheckState.hpp>
#include <leagueapi/definitions/LolMatchmakingMatchmakingDodgeWarning.hpp>

namespace leagueapi {
  struct LolMatchmakingMatchmakingReadyCheckResource { /**/ 
    LolMatchmakingMatchmakingReadyCheckState state;/**/
    std::vector<uint64_t> declinerIds;/**/
    bool suppressUx;/**/
    float timer;/**/
    LolMatchmakingMatchmakingReadyCheckResponse playerResponse;/**/
    LolMatchmakingMatchmakingDodgeWarning dodgeWarning;/**/
  };
  static void to_json(json& j, const LolMatchmakingMatchmakingReadyCheckResource& v) { 
    j["state"] = v.state;
    j["declinerIds"] = v.declinerIds;
    j["suppressUx"] = v.suppressUx;
    j["timer"] = v.timer;
    j["playerResponse"] = v.playerResponse;
    j["dodgeWarning"] = v.dodgeWarning;
  }
  static void from_json(const json& j, LolMatchmakingMatchmakingReadyCheckResource& v) { 
    v.state = j.at("state").get<LolMatchmakingMatchmakingReadyCheckState>(); 
    v.declinerIds = j.at("declinerIds").get<std::vector<uint64_t>>(); 
    v.suppressUx = j.at("suppressUx").get<bool>(); 
    v.timer = j.at("timer").get<float>(); 
    v.playerResponse = j.at("playerResponse").get<LolMatchmakingMatchmakingReadyCheckResponse>(); 
    v.dodgeWarning = j.at("dodgeWarning").get<LolMatchmakingMatchmakingDodgeWarning>(); 
  }
} 