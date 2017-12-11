#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolInventoryLoginSessionStates.hpp>

namespace leagueapi {
  struct LolInventoryLoginSession { /**/ 
    LolInventoryLoginSessionStates state;/**/
    uint64_t summonerId;/**/
    uint64_t accountId;/**/
    std::string idToken;/**/
    json gasToken;/**/
    std::string puuid;/**/
  };
  static void to_json(json& j, const LolInventoryLoginSession& v) { 
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
    j["idToken"] = v.idToken;
    j["gasToken"] = v.gasToken;
    j["puuid"] = v.puuid;
  }
  static void from_json(const json& j, LolInventoryLoginSession& v) { 
    v.state = j.at("state").get<LolInventoryLoginSessionStates>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
  }
} 