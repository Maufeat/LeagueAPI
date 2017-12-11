#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/ClientBracketMatchStatus.hpp>

namespace leagueapi {
  struct BracketMatch { /**/ 
    int64_t gameStartTime;/**/
    int32_t order;/**/
    int64_t winnerId;/**/
    int64_t id;/**/
    int64_t rosterId2;/**/
    int32_t round;/**/
    bool loserBracket;/**/
    int64_t gameId;/**/
    int64_t roundStartTime;/**/
    ClientBracketMatchStatus status;/**/
    int64_t rosterId1;/**/
  };
  static void to_json(json& j, const BracketMatch& v) { 
    j["gameStartTime"] = v.gameStartTime;
    j["order"] = v.order;
    j["winnerId"] = v.winnerId;
    j["id"] = v.id;
    j["rosterId2"] = v.rosterId2;
    j["round"] = v.round;
    j["loserBracket"] = v.loserBracket;
    j["gameId"] = v.gameId;
    j["roundStartTime"] = v.roundStartTime;
    j["status"] = v.status;
    j["rosterId1"] = v.rosterId1;
  }
  static void from_json(const json& j, BracketMatch& v) { 
    v.gameStartTime = j.at("gameStartTime").get<int64_t>(); 
    v.order = j.at("order").get<int32_t>(); 
    v.winnerId = j.at("winnerId").get<int64_t>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.rosterId2 = j.at("rosterId2").get<int64_t>(); 
    v.round = j.at("round").get<int32_t>(); 
    v.loserBracket = j.at("loserBracket").get<bool>(); 
    v.gameId = j.at("gameId").get<int64_t>(); 
    v.roundStartTime = j.at("roundStartTime").get<int64_t>(); 
    v.status = j.at("status").get<ClientBracketMatchStatus>(); 
    v.rosterId1 = j.at("rosterId1").get<int64_t>(); 
  }
} 