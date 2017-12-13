#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LcdsInviteeState.hpp>
namespace lol {
  struct LcdsInvitee { 
    std::string summonerName;
    uint64_t summonerId;
    LcdsInviteeState inviteeState; 
  };
  void to_json(json& j, const LcdsInvitee& v) {
  j["summonerName"] = v.summonerName; 
  j["summonerId"] = v.summonerId; 
  j["inviteeState"] = v.inviteeState; 
  }
  void from_json(const json& j, LcdsInvitee& v) {
  v.summonerName = j.at("summonerName").get<std::string>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.inviteeState = j.at("inviteeState").get<LcdsInviteeState>(); 
  }
}