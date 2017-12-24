#pragma once
#include "../base_def.hpp" 
#include "LolSummonerLoginSessionStates.hpp"
namespace lol {
  struct LolSummonerLoginSession { 
    uint64_t summonerId;
    LolSummonerLoginSessionStates state;
    std::string puuid;
    uint64_t accountId;
    bool connected; 
  };
  inline void to_json(json& j, const LolSummonerLoginSession& v) {
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
    j["puuid"] = v.puuid; 
    j["accountId"] = v.accountId; 
    j["connected"] = v.connected; 
  }
  inline void from_json(const json& j, LolSummonerLoginSession& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolSummonerLoginSessionStates>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.connected = j.at("connected").get<bool>(); 
  }
}