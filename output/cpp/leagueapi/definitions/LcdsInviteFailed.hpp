#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LcdsGameInviteBaseRuntimeException.hpp>

namespace leagueapi {
  struct LcdsInviteFailed { /**/ 
    std::string summonerName;/**/
    uint64_t summonerId;/**/
    LcdsGameInviteBaseRuntimeException exception;/**/
  };
  static void to_json(json& j, const LcdsInviteFailed& v) { 
    j["summonerName"] = v.summonerName;
    j["summonerId"] = v.summonerId;
    j["exception"] = v.exception;
  }
  static void from_json(const json& j, LcdsInviteFailed& v) { 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.exception = j.at("exception").get<LcdsGameInviteBaseRuntimeException>(); 
  }
} 