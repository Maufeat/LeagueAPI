#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct SeriesMediaDTO { 
    std::string backgroundUrl; 
  };
  void to_json(json& j, const SeriesMediaDTO& v) {
    j["backgroundUrl"] = v.backgroundUrl; 
  }
  void from_json(const json& j, SeriesMediaDTO& v) {
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>(); 
  }
}