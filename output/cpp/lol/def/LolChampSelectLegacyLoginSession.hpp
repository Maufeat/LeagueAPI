#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChampSelectLegacyLoginSessionStates.hpp>
namespace lol {
  struct LolChampSelectLegacyLoginSession { 
    bool connected;
    LolChampSelectLegacyLoginSessionStates state;
    uint64_t summonerId;
    uint64_t accountId; 
  };
  void to_json(json& j, const LolChampSelectLegacyLoginSession& v) {
  j["connected"] = v.connected; 
  j["state"] = v.state; 
  j["summonerId"] = v.summonerId; 
  j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, LolChampSelectLegacyLoginSession& v) {
  v.connected = j.at("connected").get<bool>(); 
  v.state = j.at("state").get<LolChampSelectLegacyLoginSessionStates>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}