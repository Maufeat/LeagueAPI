#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEndOfGameChampionMasteryGrade { 
    uint64_t playerId;
    int32_t championId;
    std::string grade; 
  };
  inline void to_json(json& j, const LolEndOfGameChampionMasteryGrade& v) {
    j["playerId"] = v.playerId; 
    j["championId"] = v.championId; 
    j["grade"] = v.grade; 
  }
  inline void from_json(const json& j, LolEndOfGameChampionMasteryGrade& v) {
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.grade = j.at("grade").get<std::string>(); 
  }
}