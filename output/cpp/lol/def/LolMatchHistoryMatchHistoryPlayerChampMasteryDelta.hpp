#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolMatchHistoryMatchHistoryPlayerChampMasteryDelta { 
    std::string grade; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryPlayerChampMasteryDelta& v) {
    j["grade"] = v.grade; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryPlayerChampMasteryDelta& v) {
    v.grade = j.at("grade").get<std::string>(); 
  }
}