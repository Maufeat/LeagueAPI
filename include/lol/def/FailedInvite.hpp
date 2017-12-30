#pragma once
#include "../base_def.hpp" 
#include "ClientRequestError.hpp"
namespace lol {
  struct FailedInvite { 
    uint64_t playerId;
    ClientRequestError exception; 
  };
  inline void to_json(json& j, const FailedInvite& v) {
    j["playerId"] = v.playerId; 
    j["exception"] = v.exception; 
  }
  inline void from_json(const json& j, FailedInvite& v) {
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.exception = j.at("exception").get<ClientRequestError>(); 
  }
}