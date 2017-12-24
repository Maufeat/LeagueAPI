#pragma once
#include "../base_def.hpp" 
#include "LcdsInviteeState.hpp"
namespace lol {
  struct LcdsInvitee { 
    uint64_t summonerId;
    std::string summonerName;
    LcdsInviteeState inviteeState; 
  };
  inline void to_json(json& j, const LcdsInvitee& v) {
    j["summonerId"] = v.summonerId; 
    j["summonerName"] = v.summonerName; 
    j["inviteeState"] = v.inviteeState; 
  }
  inline void from_json(const json& j, LcdsInvitee& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.inviteeState = j.at("inviteeState").get<LcdsInviteeState>(); 
  }
}