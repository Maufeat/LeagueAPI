#pragma once
#include "../base_def.hpp" 
#include "LolChampSelectLegacyLoginSessionStates.hpp"
namespace lol {
  struct LolChampSelectLegacyLoginSession { 
    LolChampSelectLegacyLoginSessionStates state;
    uint64_t summonerId;
    uint64_t accountId;
    bool connected; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyLoginSession& v) {
    j["state"] = v.state; 
    j["summonerId"] = v.summonerId; 
    j["accountId"] = v.accountId; 
    j["connected"] = v.connected; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyLoginSession& v) {
    v.state = j.at("state").get<LolChampSelectLegacyLoginSessionStates>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.connected = j.at("connected").get<bool>(); 
  }
}