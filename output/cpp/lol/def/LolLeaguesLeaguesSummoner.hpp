#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLeaguesLeaguesSummoner { 
    uint64_t summonerId;
    uint64_t accountId; 
  };
  void to_json(json& j, const LolLeaguesLeaguesSummoner& v) {
  j["summonerId"] = v.summonerId; 
  j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, LolLeaguesLeaguesSummoner& v) {
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}