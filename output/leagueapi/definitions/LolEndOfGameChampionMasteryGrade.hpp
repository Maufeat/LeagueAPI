#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolEndOfGameChampionMasteryGrade { /**/ 
    uint64_t playerId;/**/
    std::string grade;/**/
    int32_t championId;/**/
  };
  static void to_json(json& j, const LolEndOfGameChampionMasteryGrade& v) { 
    j["playerId"] = v.playerId;
    j["grade"] = v.grade;
    j["championId"] = v.championId;
  }
  static void from_json(const json& j, LolEndOfGameChampionMasteryGrade& v) { 
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.grade = j.at("grade").get<std::string>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
} 