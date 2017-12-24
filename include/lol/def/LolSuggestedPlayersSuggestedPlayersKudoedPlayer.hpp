#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersKudoedPlayer { 
    std::string kudoedSummonerName;
    uint64_t kudoedSummonerId; 
  };
  inline void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersKudoedPlayer& v) {
    j["kudoedSummonerName"] = v.kudoedSummonerName; 
    j["kudoedSummonerId"] = v.kudoedSummonerId; 
  }
  inline void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersKudoedPlayer& v) {
    v.kudoedSummonerName = j.at("kudoedSummonerName").get<std::string>(); 
    v.kudoedSummonerId = j.at("kudoedSummonerId").get<uint64_t>(); 
  }
}