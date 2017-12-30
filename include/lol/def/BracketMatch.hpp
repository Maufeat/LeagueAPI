#pragma once
#include "../base_def.hpp" 
#include "ClientBracketMatchStatus.hpp"
namespace lol {
  struct BracketMatch { 
    int32_t order;
    int64_t gameStartTime;
    int64_t id;
    ClientBracketMatchStatus status;
    int64_t rosterId1;
    int64_t winnerId;
    int64_t rosterId2;
    int64_t roundStartTime;
    bool loserBracket;
    int64_t gameId;
    int32_t round; 
  };
  inline void to_json(json& j, const BracketMatch& v) {
    j["order"] = v.order; 
    j["gameStartTime"] = v.gameStartTime; 
    j["id"] = v.id; 
    j["status"] = v.status; 
    j["rosterId1"] = v.rosterId1; 
    j["winnerId"] = v.winnerId; 
    j["rosterId2"] = v.rosterId2; 
    j["roundStartTime"] = v.roundStartTime; 
    j["loserBracket"] = v.loserBracket; 
    j["gameId"] = v.gameId; 
    j["round"] = v.round; 
  }
  inline void from_json(const json& j, BracketMatch& v) {
    v.order = j.at("order").get<int32_t>(); 
    v.gameStartTime = j.at("gameStartTime").get<int64_t>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.status = j.at("status").get<ClientBracketMatchStatus>(); 
    v.rosterId1 = j.at("rosterId1").get<int64_t>(); 
    v.winnerId = j.at("winnerId").get<int64_t>(); 
    v.rosterId2 = j.at("rosterId2").get<int64_t>(); 
    v.roundStartTime = j.at("roundStartTime").get<int64_t>(); 
    v.loserBracket = j.at("loserBracket").get<bool>(); 
    v.gameId = j.at("gameId").get<int64_t>(); 
    v.round = j.at("round").get<int32_t>(); 
  }
}