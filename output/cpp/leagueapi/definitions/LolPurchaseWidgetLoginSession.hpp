#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolPurchaseWidgetLoginSessionStates.hpp>

namespace leagueapi {
  struct LolPurchaseWidgetLoginSession { /**/ 
    LolPurchaseWidgetLoginSessionStates state;/**/
    std::string idToken;/**/
    uint64_t summonerId;/**/
    uint64_t accountId;/**/
  };
  static void to_json(json& j, const LolPurchaseWidgetLoginSession& v) { 
    j["state"] = v.state;
    j["idToken"] = v.idToken;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }
  static void from_json(const json& j, LolPurchaseWidgetLoginSession& v) { 
    v.state = j.at("state").get<LolPurchaseWidgetLoginSessionStates>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
} 