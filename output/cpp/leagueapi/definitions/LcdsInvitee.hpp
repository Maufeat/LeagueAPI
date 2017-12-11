#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LcdsInviteeState.hpp>

namespace leagueapi {
  struct LcdsInvitee { /**/ 
    std::string summonerName;/**/
    uint64_t summonerId;/**/
    LcdsInviteeState inviteeState;/**/
  };
  static void to_json(json& j, const LcdsInvitee& v) { 
    j["summonerName"] = v.summonerName;
    j["summonerId"] = v.summonerId;
    j["inviteeState"] = v.inviteeState;
  }
  static void from_json(const json& j, LcdsInvitee& v) { 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.inviteeState = j.at("inviteeState").get<LcdsInviteeState>(); 
  }
} 