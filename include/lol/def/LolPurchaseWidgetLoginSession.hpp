#pragma once
#include "../base_def.hpp" 
#include "LolPurchaseWidgetLoginSessionStates.hpp"
namespace lol {
  struct LolPurchaseWidgetLoginSession { 
    uint64_t accountId;
    uint64_t summonerId;
    std::string idToken;
    LolPurchaseWidgetLoginSessionStates state; 
  };
  inline void to_json(json& j, const LolPurchaseWidgetLoginSession& v) {
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
    j["idToken"] = v.idToken; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolPurchaseWidgetLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
    v.state = j.at("state").get<LolPurchaseWidgetLoginSessionStates>(); 
  }
}