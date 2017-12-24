#pragma once
#include "../base_def.hpp" 
#include "LolChampSelectLegacyLoginSessionStates.hpp"
namespace lol {
  struct LolChampSelectLegacyLoginSession { 
    uint64_t summonerId;
    LolChampSelectLegacyLoginSessionStates state;
    uint64_t accountId;
    bool connected; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyLoginSession& v) {
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
    j["connected"] = v.connected; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyLoginSession& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolChampSelectLegacyLoginSessionStates>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.connected = j.at("connected").get<bool>(); 
  }
}