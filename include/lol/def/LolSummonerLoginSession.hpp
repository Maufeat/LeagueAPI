#pragma once
#include "../base_def.hpp" 
#include "LolSummonerLoginSessionStates.hpp"
namespace lol {
  struct LolSummonerLoginSession { 
    LolSummonerLoginSessionStates state;
    uint64_t summonerId;
    uint64_t accountId;
    std::string puuid;
    bool connected; 
  };
  inline void to_json(json& j, const LolSummonerLoginSession& v) {
    j["state"] = v.state; 
    j["summonerId"] = v.summonerId; 
    j["accountId"] = v.accountId; 
    j["puuid"] = v.puuid; 
    j["connected"] = v.connected; 
  }
  inline void from_json(const json& j, LolSummonerLoginSession& v) {
    v.state = j.at("state").get<LolSummonerLoginSessionStates>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.connected = j.at("connected").get<bool>(); 
  }
}