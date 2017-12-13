#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LcdsInviteeState.hpp>
namespace lol {
  struct LcdsInvitee { 
    LcdsInviteeState inviteeState;
    std::string summonerName;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LcdsInvitee& v) {
  j["inviteeState"] = v.inviteeState; 
  j["summonerName"] = v.summonerName; 
  j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LcdsInvitee& v) {
  v.inviteeState = j.at("inviteeState").get<LcdsInviteeState>(); 
  v.summonerName = j.at("summonerName").get<std::string>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}