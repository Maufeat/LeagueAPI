#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/ClientBracketMatchStatus.hpp>
namespace lol {
  struct BracketMatch { 
    int32_t order;
    int64_t winnerId;
    ClientBracketMatchStatus status;
    int64_t roundStartTime;
    int64_t gameId;
    int64_t rosterId1;
    int64_t gameStartTime;
    int64_t rosterId2;
    bool loserBracket;
    int32_t round;
    int64_t id; 
  };
  void to_json(json& j, const BracketMatch& v) {
    j["order"] = v.order; 
    j["winnerId"] = v.winnerId; 
    j["status"] = v.status; 
    j["roundStartTime"] = v.roundStartTime; 
    j["gameId"] = v.gameId; 
    j["rosterId1"] = v.rosterId1; 
    j["gameStartTime"] = v.gameStartTime; 
    j["rosterId2"] = v.rosterId2; 
    j["loserBracket"] = v.loserBracket; 
    j["round"] = v.round; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, BracketMatch& v) {
    v.order = j.at("order").get<int32_t>(); 
    v.winnerId = j.at("winnerId").get<int64_t>(); 
    v.status = j.at("status").get<ClientBracketMatchStatus>(); 
    v.roundStartTime = j.at("roundStartTime").get<int64_t>(); 
    v.gameId = j.at("gameId").get<int64_t>(); 
    v.rosterId1 = j.at("rosterId1").get<int64_t>(); 
    v.gameStartTime = j.at("gameStartTime").get<int64_t>(); 
    v.rosterId2 = j.at("rosterId2").get<int64_t>(); 
    v.loserBracket = j.at("loserBracket").get<bool>(); 
    v.round = j.at("round").get<int32_t>(); 
    v.id = j.at("id").get<int64_t>(); 
  }
}