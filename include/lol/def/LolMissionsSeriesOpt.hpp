#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolMissionsSeriesOpt { 
    std::string seriesId;
    std::string optStatus; 
  };
  inline void to_json(json& j, const LolMissionsSeriesOpt& v) {
    j["seriesId"] = v.seriesId; 
    j["optStatus"] = v.optStatus; 
  }
  inline void from_json(const json& j, LolMissionsSeriesOpt& v) {
    v.seriesId = j.at("seriesId").get<std::string>(); 
    v.optStatus = j.at("optStatus").get<std::string>(); 
  }
}