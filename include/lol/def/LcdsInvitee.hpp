#pragma once
#include "../base_def.hpp" 
#include "LcdsInviteeState.hpp"
namespace lol {
  struct LcdsInvitee { 
    std::string summonerName;
    uint64_t summonerId;
    LcdsInviteeState inviteeState; 
  };
  inline void to_json(json& j, const LcdsInvitee& v) {
    j["summonerName"] = v.summonerName; 
    j["summonerId"] = v.summonerId; 
    j["inviteeState"] = v.inviteeState; 
  }
  inline void from_json(const json& j, LcdsInvitee& v) {
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.inviteeState = j.at("inviteeState").get<LcdsInviteeState>(); 
  }
}