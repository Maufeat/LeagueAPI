#pragma once
#include "../base_def.hpp" 
#include "LolPurchaseWidgetLoginSessionStates.hpp"
namespace lol {
  struct LolPurchaseWidgetLoginSession { 
    LolPurchaseWidgetLoginSessionStates state;
    uint64_t summonerId;
    uint64_t accountId;
    std::string idToken; 
  };
  inline void to_json(json& j, const LolPurchaseWidgetLoginSession& v) {
    j["state"] = v.state; 
    j["summonerId"] = v.summonerId; 
    j["accountId"] = v.accountId; 
    j["idToken"] = v.idToken; 
  }
  inline void from_json(const json& j, LolPurchaseWidgetLoginSession& v) {
    v.state = j.at("state").get<LolPurchaseWidgetLoginSessionStates>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
  }
}