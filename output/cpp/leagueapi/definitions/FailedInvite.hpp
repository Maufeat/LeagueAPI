#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/ClientRequestError.hpp>

namespace leagueapi {
  struct FailedInvite { /**/ 
    ClientRequestError exception;/**/
    uint64_t playerId;/**/
  };
  static void to_json(json& j, const FailedInvite& v) { 
    j["exception"] = v.exception;
    j["playerId"] = v.playerId;
  }
  static void from_json(const json& j, FailedInvite& v) { 
    v.exception = j.at("exception").get<ClientRequestError>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
  }
} 