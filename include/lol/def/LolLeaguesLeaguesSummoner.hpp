#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLeaguesLeaguesSummoner { 
    uint64_t summonerId;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolLeaguesLeaguesSummoner& v) {
    j["summonerId"] = v.summonerId; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolLeaguesLeaguesSummoner& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}