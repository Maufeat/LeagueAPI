#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolMatchHistoryMatchHistoryPlayerChampMasteryDelta { /**/ 
    std::string grade;/**/
  };
  static void to_json(json& j, const LolMatchHistoryMatchHistoryPlayerChampMasteryDelta& v) { 
    j["grade"] = v.grade;
  }
  static void from_json(const json& j, LolMatchHistoryMatchHistoryPlayerChampMasteryDelta& v) { 
    v.grade = j.at("grade").get<std::string>(); 
  }
} 