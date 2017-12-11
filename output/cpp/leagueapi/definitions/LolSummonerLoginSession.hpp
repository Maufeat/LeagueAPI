#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolSummonerLoginSessionStates.hpp>

namespace leagueapi {
  struct LolSummonerLoginSession { /**/ 
    bool connected;/**/
    LolSummonerLoginSessionStates state;/**/
    uint64_t summonerId;/**/
    uint64_t accountId;/**/
    std::string puuid;/**/
  };
  static void to_json(json& j, const LolSummonerLoginSession& v) { 
    j["connected"] = v.connected;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
    j["puuid"] = v.puuid;
  }
  static void from_json(const json& j, LolSummonerLoginSession& v) { 
    v.connected = j.at("connected").get<bool>(); 
    v.state = j.at("state").get<LolSummonerLoginSessionStates>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
  }
} 