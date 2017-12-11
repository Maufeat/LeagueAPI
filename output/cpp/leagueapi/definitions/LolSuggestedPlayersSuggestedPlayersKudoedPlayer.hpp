#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersKudoedPlayer { /**/ 
    std::string kudoedSummonerName;/**/
    uint64_t kudoedSummonerId;/**/
  };
  static void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersKudoedPlayer& v) { 
    j["kudoedSummonerName"] = v.kudoedSummonerName;
    j["kudoedSummonerId"] = v.kudoedSummonerId;
  }
  static void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersKudoedPlayer& v) { 
    v.kudoedSummonerName = j.at("kudoedSummonerName").get<std::string>(); 
    v.kudoedSummonerId = j.at("kudoedSummonerId").get<uint64_t>(); 
  }
} 