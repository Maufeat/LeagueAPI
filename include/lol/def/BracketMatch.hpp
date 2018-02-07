#pragma once
#include "../base_def.hpp" 
#include "ClientBracketMatchStatus.hpp"
namespace lol {
  struct BracketMatch { 
    int64_t id;
    int32_t round;
    int32_t order;
    int64_t rosterId1;
    int64_t rosterId2;
    int64_t roundStartTime;
    int64_t gameStartTime;
    ClientBracketMatchStatus status;
    int64_t winnerId;
    int64_t gameId;
    bool loserBracket; 
  };
  inline void to_json(json& j, const BracketMatch& v) {
    j["id"] = v.id; 
    j["round"] = v.round; 
    j["order"] = v.order; 
    j["rosterId1"] = v.rosterId1; 
    j["rosterId2"] = v.rosterId2; 
    j["roundStartTime"] = v.roundStartTime; 
    j["gameStartTime"] = v.gameStartTime; 
    j["status"] = v.status; 
    j["winnerId"] = v.winnerId; 
    j["gameId"] = v.gameId; 
    j["loserBracket"] = v.loserBracket; 
  }
  inline void from_json(const json& j, BracketMatch& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.round = j.at("round").get<int32_t>(); 
    v.order = j.at("order").get<int32_t>(); 
    v.rosterId1 = j.at("rosterId1").get<int64_t>(); 
    v.rosterId2 = j.at("rosterId2").get<int64_t>(); 
    v.roundStartTime = j.at("roundStartTime").get<int64_t>(); 
    v.gameStartTime = j.at("gameStartTime").get<int64_t>(); 
    v.status = j.at("status").get<ClientBracketMatchStatus>(); 
    v.winnerId = j.at("winnerId").get<int64_t>(); 
    v.gameId = j.at("gameId").get<int64_t>(); 
    v.loserBracket = j.at("loserBracket").get<bool>(); 
  }
}