#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolClashPlayerState.hpp>"

namespace leagueapi {
  struct LolClashPlayerTournamentData { /**/ 
    LolClashPlayerState state;/**/
    std::string rosterId;/**/
    int64_t bracketId;/**/
  };
  static void to_json(json& j, const LolClashPlayerTournamentData& v) { 
    j["state"] = v.state;
    j["rosterId"] = v.rosterId;
    j["bracketId"] = v.bracketId;
  }
  static void from_json(const json& j, LolClashPlayerTournamentData& v) { 
    v.state = j.at("state").get<LolClashPlayerState>(); 
    v.rosterId = j.at("rosterId").get<std::string>(); 
    v.bracketId = j.at("bracketId").get<int64_t>(); 
  }
} 