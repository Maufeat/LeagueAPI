#pragma once
#include "../base_def.hpp" 
#include "ClientBracketMatchStatus.hpp"
namespace lol {
  struct BracketMatch { 
    ClientBracketMatchStatus status;
    int64_t gameStartTime;
    bool loserBracket;
    int64_t winnerId;
    int32_t round;
    int64_t id;
    int64_t gameId;
    int32_t order;
    int64_t rosterId2;
    int64_t rosterId1;
    int64_t roundStartTime; 
  };
  inline void to_json(json& j, const BracketMatch& v) {
    j["status"] = v.status; 
    j["gameStartTime"] = v.gameStartTime; 
    j["loserBracket"] = v.loserBracket; 
    j["winnerId"] = v.winnerId; 
    j["round"] = v.round; 
    j["id"] = v.id; 
    j["gameId"] = v.gameId; 
    j["order"] = v.order; 
    j["rosterId2"] = v.rosterId2; 
    j["rosterId1"] = v.rosterId1; 
    j["roundStartTime"] = v.roundStartTime; 
  }
  inline void from_json(const json& j, BracketMatch& v) {
    v.status = j.at("status").get<ClientBracketMatchStatus>(); 
    v.gameStartTime = j.at("gameStartTime").get<int64_t>(); 
    v.loserBracket = j.at("loserBracket").get<bool>(); 
    v.winnerId = j.at("winnerId").get<int64_t>(); 
    v.round = j.at("round").get<int32_t>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.gameId = j.at("gameId").get<int64_t>(); 
    v.order = j.at("order").get<int32_t>(); 
    v.rosterId2 = j.at("rosterId2").get<int64_t>(); 
    v.rosterId1 = j.at("rosterId1").get<int64_t>(); 
    v.roundStartTime = j.at("roundStartTime").get<int64_t>(); 
  }
}