#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct SeriesMediaDTO { 
    std::string backgroundUrl; 
  };
  inline void to_json(json& j, const SeriesMediaDTO& v) {
    j["backgroundUrl"] = v.backgroundUrl; 
  }
  inline void from_json(const json& j, SeriesMediaDTO& v) {
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>(); 
  }
}