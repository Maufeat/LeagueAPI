#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolCollectionsLoginSessionStates.hpp>
namespace lol {
  struct LolCollectionsLoginSession { 
    bool connected;
    LolCollectionsLoginSessionStates state;
    uint64_t summonerId;
    uint64_t accountId; 
  };
  void to_json(json& j, const LolCollectionsLoginSession& v) {
  j["connected"] = v.connected; 
  j["state"] = v.state; 
  j["summonerId"] = v.summonerId; 
  j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, LolCollectionsLoginSession& v) {
  v.connected = j.at("connected").get<bool>(); 
  v.state = j.at("state").get<LolCollectionsLoginSessionStates>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}