#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEndOfGameChampionMasteryGrade { 
    std::string grade;
    int32_t championId;
    uint64_t playerId; 
  };
  void to_json(json& j, const LolEndOfGameChampionMasteryGrade& v) {
    j["grade"] = v.grade; 
    j["championId"] = v.championId; 
    j["playerId"] = v.playerId; 
  }
  void from_json(const json& j, LolEndOfGameChampionMasteryGrade& v) {
    v.grade = j.at("grade").get<std::string>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
  }
}