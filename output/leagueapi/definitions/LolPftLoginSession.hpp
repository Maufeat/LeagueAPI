#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolPftLoginSessionStates.hpp>"

namespace leagueapi {
  struct LolPftLoginSession { /**/ 
    LolPftLoginSessionStates state;/**/
    std::string idToken;/**/
    uint64_t summonerId;/**/
    uint64_t accountId;/**/
    std::string puuid;/**/
  };
  static void to_json(json& j, const LolPftLoginSession& v) { 
    j["state"] = v.state;
    j["idToken"] = v.idToken;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
    j["puuid"] = v.puuid;
  }
  static void from_json(const json& j, LolPftLoginSession& v) { 
    v.state = j.at("state").get<LolPftLoginSessionStates>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
  }
} 