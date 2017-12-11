#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChampSelectLegacyChampSelectAction { /**/ 
    int32_t pickTurn;/**/
    int64_t id;/**/
    std::string type;/**/
    int64_t actorCellId;/**/
    bool completed;/**/
    int32_t championId;/**/
  };
  static void to_json(json& j, const LolChampSelectLegacyChampSelectAction& v) { 
    j["pickTurn"] = v.pickTurn;
    j["id"] = v.id;
    j["type"] = v.type;
    j["actorCellId"] = v.actorCellId;
    j["completed"] = v.completed;
    j["championId"] = v.championId;
  }
  static void from_json(const json& j, LolChampSelectLegacyChampSelectAction& v) { 
    v.pickTurn = j.at("pickTurn").get<int32_t>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.type = j.at("type").get<std::string>(); 
    v.actorCellId = j.at("actorCellId").get<int64_t>(); 
    v.completed = j.at("completed").get<bool>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
} 